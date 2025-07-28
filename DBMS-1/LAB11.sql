USE CSE_3A_201;




CREATE TABLE STU_INFO (
    Rno INT PRIMARY KEY,
    Name VARCHAR(50),
    Branch VARCHAR(10)
);

INSERT INTO STU_INFO VALUES
(101, 'Raju', 'CE'),
(102, 'Amit', 'CE'),
(103, 'Sanjay', 'ME'),
(104, 'Neha', 'EC'),
(105, 'Meera', 'EE'),
(106, 'Mahesh', 'ME');



CREATE TABLE RESULT (
    Rno INT FOREIGN KEY REFERENCES STU_INFO(Rno),
    SPI FLOAT
);

INSERT INTO RESULT VALUES
(101, 8.8),
(102, 9.2),
(103, 7.6),
(104, 8.2),
(105, 7.0),
(106, 8.9);



CREATE TABLE EMPLOYEE_MASTER (
    EmployeeNo VARCHAR(10) PRIMARY KEY,
    Name VARCHAR(50),
    ManagerNo VARCHAR(10),
    FOREIGN KEY (ManagerNo) REFERENCES EMPLOYEE_MASTER(EmployeeNo)
);

INSERT INTO EMPLOYEE_MASTER VALUES
('E01', 'Tarun', NULL),
('E02', 'Rohan', 'E02'),
('E03', 'Priya', 'E01'),
('E04', 'Milan', 'E03'),
('E05', 'Jay', 'E01'),
('E06', 'Anjana', 'E04');




--------------------Part – A:--------------------


--1. Combine information from student and result table using cross join or Cartesian product.
SELECT *
FROM STU_INFO CROSS JOIN RESULT;

--2. Perform inner join on Student and Result tables.
SELECT *
FROM STU_INFO INNER JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO;

--3. Perform the left outer join on Student and Result tables.
SELECT *
FROM STU_INFO LEFT OUTER JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO;

--4. Perform the right outer join on Student and Result tables.
SELECT *
FROM STU_INFO RIGHT OUTER JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO;

--5. Perform the full outer join on Student and Result tables.
SELECT *
FROM STU_INFO FULL OUTER JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO;

--6. Display Rno, Name, Branch and SPI of all students.
SELECT STU_INFO.RNO, NAME, BRANCH, RESULT.SPI
FROM STU_INFO JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO;

--7. Display Rno, Name, Branch and SPI of CE branch’s student only.
SELECT STU_INFO.RNO, NAME, BRANCH, RESULT.SPI
FROM STU_INFO JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO
WHERE BRANCH='CE';

--8. Display Rno, Name, Branch and SPI of other than EC branch’s student only.
SELECT STU_INFO.RNO, NAME, BRANCH, RESULT.SPI
FROM STU_INFO JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO
WHERE BRANCH='EC';

--9. Display average result of each branch.
SELECT BRANCH, AVG(RESULT.SPI) AS AVG_RESULT
FROM STU_INFO JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO
GROUP BY BRANCH;

--10. Display average result of CE and ME branch.
SELECT BRANCH, AVG(RESULT.SPI) AS AVG_RESULT
FROM STU_INFO JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO
GROUP BY BRANCH
HAVING BRANCH IN ('CE','ME');

--11. Display Maximum and Minimum SPI of each branch.
SELECT BRANCH, MAX(RESULT.SPI) AS MAX_RESULT, MIN(RESULT.SPI) AS MIN_RESULT
FROM STU_INFO JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO
GROUP BY BRANCH;

--12. Display branch wise student’s count in descending order.
SELECT BRANCH, COUNT(NAME) AS COUNT_STU
FROM STU_INFO JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO
GROUP BY BRANCH
ORDER BY COUNT_STU DESC;


--------------------Part – B:--------------------


--1. Display average result of each branch and sort them in ascending order by SPI.
SELECT BRANCH, AVG(RESULT.SPI) AS AVG_RESULT
FROM STU_INFO JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO
GROUP BY BRANCH
ORDER BY AVG_RESULT;

--2. Display highest SPI from each branch and sort them in descending order.
SELECT BRANCH, MAX(RESULT.SPI) AS MAX_RESULT
FROM STU_INFO JOIN RESULT
ON STU_INFO.RNO=RESULT.RNO
GROUP BY BRANCH
ORDER BY MAX_RESULT DESC;


--------------------Part – C:--------------------


--1. Retrieve the names of employee along with their manager’s name from the Employee table.
SELECT E.NAME, E1.NAME
FROM EMPLOYEE_MASTER AS E, EMPLOYEE_MASTER AS E1
WHERE E.EmployeeNo=E1.ManagerNo;