USE CSE_3A_201;


----------------------------------------Sub Queries----------------------------------------



CREATE TABLE DEPARTMENT (
    DID INT PRIMARY KEY,
    DName VARCHAR(50)
);

CREATE TABLE STUDENT_DATA (
    Rno INT PRIMARY KEY,
    Name VARCHAR(50),
    City VARCHAR(50),
    DID INT,
    FOREIGN KEY (DID) REFERENCES DEPARTMENT(DID)
);

CREATE TABLE ACADEMIC (
    RNO INT PRIMARY KEY,
    SPI DECIMAL(4,2),
    BKLOG INT,
    FOREIGN KEY (RNO) REFERENCES STUDENT_DATA(Rno)
);

INSERT INTO DEPARTMENT VALUES
(10, 'Computer'),
(20, 'Electrical'),
(30, 'Mechanical'),
(40, 'Civil');

INSERT INTO STUDENT_DATA VALUES
(101, 'Raju', 'Rajkot', 10),
(102, 'Amit', 'Ahmedabad', 20),
(103, 'Sanjay', 'Baroda', 40),
(104, 'Neha', 'Rajkot', 20),
(105, 'Meera', 'Ahmedabad', 30),
(106, 'Mahesh', 'Baroda', 10);

INSERT INTO ACADEMIC VALUES
(101, 8.8, 0),
(102, 9.2, 2),
(103, 7.6, 1),
(104, 8.2, 4),
(105, 7.0, 2),
(106, 8.9, 3);


--------------------Part – A:--------------------


--1. Display details of students who are from computer department.
SELECT Rno, Name, City, STUDENT_DATA.DID, DName
FROM STUDENT_DATA JOIN DEPARTMENT
ON STUDENT_DATA.DID=DEPARTMENT.DID
WHERE DName='COMPUTER';

--2. Displays name of students whose SPI is more than 8.
SELECT Name
FROM STUDENT_DATA JOIN ACADEMIC
ON STUDENT_DATA.Rno=ACADEMIC.RNO
WHERE SPI>8;

--3. Display details of students of computer department who belongs to Rajkot city.
SELECT Rno, Name, City, STUDENT_DATA.DID, DName
FROM STUDENT_DATA JOIN DEPARTMENT
ON STUDENT_DATA.DID=DEPARTMENT.DID
WHERE DName='COMPUTER' AND City='RAJKOT';

--4. Find total number of students of electrical department.
SELECT COUNT(*)
FROM STUDENT_DATA JOIN DEPARTMENT
ON STUDENT_DATA.DID=DEPARTMENT.DID
WHERE DName='Electrical';

--5. Display name of student who is having maximum SPI.
SELECT Name
FROM STUDENT_DATA JOIN ACADEMIC
ON STUDENT_DATA.Rno=ACADEMIC.RNO
WHERE SPI=(
	SELECT MAX(SPI)
	FROM ACADEMIC);

--6. Display details of students having more than 1 backlog.
SELECT *
FROM STUDENT_DATA JOIN ACADEMIC
ON STUDENT_DATA.Rno=ACADEMIC.RNO
WHERE BKLOG>1;


--------------------Part – B:--------------------


--1. Display name of students who are either from computer department or from mechanical department.
SELECT Rno, Name, City, STUDENT_DATA.DID, DName
FROM STUDENT_DATA JOIN DEPARTMENT
ON STUDENT_DATA.DID=DEPARTMENT.DID
WHERE DName IN ('COMPUTER','Electrical');

--2. Display name of students who are in same department as 102 studying in.
SELECT *
FROM STUDENT_DATA JOIN DEPARTMENT
ON STUDENT_DATA.DID=DEPARTMENT.DID
WHERE DEPARTMENT.DID=(
	SELECT DEPARTMENT.DID
	FROM STUDENT_DATA JOIN DEPARTMENT
	ON STUDENT_DATA.DID=DEPARTMENT.DID
	WHERE Rno=102);


--------------------Part – C:--------------------


--1. Display name of students whose SPI is more than 9 and who is from electrical department.
SELECT Name
FROM STUDENT_DATA JOIN ACADEMIC
ON STUDENT_DATA.Rno=ACADEMIC.RNO
JOIN DEPARTMENT
ON STUDENT_DATA.DID=DEPARTMENT.DID
WHERE SPI>9 AND DName='Electrical';

--2. Display name of student who is having second highest SPI.
SELECT TOP 1 *
FROM STUDENT_DATA JOIN ACADEMIC
ON STUDENT_DATA.Rno=ACADEMIC.RNO
WHERE SPI IN (
	SELECT TOP 2 SPI
	FROM ACADEMIC
	ORDER BY SPI DESC)
ORDER BY SPI;

--3. Display city names whose students SPI is 9.2
SELECT City
FROM STUDENT_DATA JOIN ACADEMIC
ON STUDENT_DATA.Rno=ACADEMIC.RNO
WHERE SPI=9.2;

--4. Find the names of students who have more than the average number of backlogs across all students.
SELECT Name
FROM STUDENT_DATA JOIN ACADEMIC
ON STUDENT_DATA.Rno=ACADEMIC.RNO
WHERE BKLOG>(
	SELECT AVG(BKLOG)
	FROM ACADEMIC);

--5. Display the names of students who are in the same department as the student with the highest SPI.SELECT *
FROM STUDENT_DATA JOIN ACADEMIC
ON STUDENT_DATA.Rno=ACADEMIC.RNO
JOIN DEPARTMENT
ON STUDENT_DATA.DID=DEPARTMENT.DID
WHERE SPI IN(
	SELECT MAX(SPI)
	FROM STUDENT_DATA JOIN ACADEMIC
	ON STUDENT_DATA.Rno=ACADEMIC.RNO
	JOIN DEPARTMENT
	ON STUDENT_DATA.DID=DEPARTMENT.DID
	GROUP BY DName)
ORDER BY SPI DESC;



----------------------------------------SET Operators----------------------------------------


--------------------Part – A:--------------------


CREATE TABLE COMPUTER (
    RollNo INT PRIMARY KEY,
    Name VARCHAR(50)
);

CREATE TABLE ELECTRICAL (
    RollNo INT PRIMARY KEY,
    Name VARCHAR(50)
);

INSERT INTO COMPUTER VALUES
(101, 'Ajay'),
(109, 'Haresh'),
(115, 'Manish');

INSERT INTO ELECTRICAL VALUES
(105, 'Ajay'),
(107, 'Mahesh'),
(115, 'Manish');


--1. Display name of students who is either in Computer or in Electrical.
SELECT NAME FROM COMPUTER
UNION
SELECT NAME FROM ELECTRICAL;

--2. Display name of students who is either in Computer or in Electrical including duplicate data.
SELECT NAME FROM COMPUTER
UNION ALL
SELECT NAME FROM ELECTRICAL;

--3. Display name of students who is in both Computer and Electrical.
SELECT NAME FROM COMPUTER
INTERSECT
SELECT NAME FROM ELECTRICAL;

--4. Display name of students who are in Computer but not in Electrical.
SELECT NAME FROM COMPUTER
EXCEPT
SELECT NAME FROM ELECTRICAL;

--5. Display name of students who are in Electrical but not in Computer.
SELECT NAME FROM ELECTRICAL
EXCEPT
SELECT NAME FROM COMPUTER;

--6. Display all the details of students who are either in Computer or in Electrical.
SELECT * FROM COMPUTER
UNION
SELECT * FROM ELECTRICAL;

--7. Display all the details of students who are in both Computer and Electrical.
SELECT * FROM COMPUTER
INTERSECT
SELECT * FROM ELECTRICAL;




--------------------Part – B:--------------------

CREATE TABLE EMP_DATA (
    EID INT,
    Name VARCHAR(50)
);

CREATE TABLE CUSTOMER (
    CID INT,
    Name VARCHAR(50)
);

INSERT INTO EMP_DATA VALUES
(1, 'Ajay'),
(9, 'Haresh'),
(5, 'Manish');

INSERT INTO CUSTOMER VALUES
(5, 'Ajay'),
(7, 'Mahesh'),
(5, 'Manish');


--1. Display name of persons who is either Employee or Customer.
SELECT NAME FROM EMP_DATA
UNION
SELECT Name FROM CUSTOMER;

--2. Display name of persons who is either Employee or Customer including duplicate data.
SELECT NAME FROM EMP_DATA
UNION ALL
SELECT Name FROM CUSTOMER;

--3. Display name of persons who is both Employee as well as Customer.
SELECT NAME FROM EMP_DATA
INTERSECT
SELECT Name FROM CUSTOMER;

--4. Display name of persons who are Employee but not Customer.
SELECT NAME FROM EMP_DATA
EXCEPT
SELECT NAME FROM CUSTOMER;

--5. Display name of persons who are Customer but not Employee.
SELECT NAME FROM CUSTOMER
EXCEPT
SELECT NAME FROM EMP_DATA;


--------------------Part – C:--------------------


--1. Perform all the queries of Part-B but display ID and Name columns instead of Name only.
	--I. Display name of persons who is either Employee or Customer.
	SELECT * FROM EMP_DATA
	UNION
	SELECT * FROM CUSTOMER;

	--II. Display name of persons who is either Employee or Customer including duplicate data.
	SELECT * FROM EMP_DATA
	UNION ALL
	SELECT * FROM CUSTOMER;

	--III. Display name of persons who is both Employee as well as Customer.
	SELECT * FROM EMP_DATA
	INTERSECT
	SELECT * FROM CUSTOMER;

	--IV. Display name of persons who are Employee but not Customer.
	SELECT * FROM EMP_DATA
	EXCEPT
	SELECT * FROM CUSTOMER;

	--V. Display name of persons who are Customer but not Employee.
	SELECT * FROM CUSTOMER
	EXCEPT
	SELECT * FROM EMP_DATA;