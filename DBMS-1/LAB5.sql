USE CSE_3A_201;


----------------------------------------Alter, Rename Operation----------------------------------------


--------------------Part � A:--------------------


--1. Add two more columns City VARCHAR (20) and Pincode INT.
ALTER TABLE DEPOSIT
ADD CITY VARCHAR(20), PINCODE INT;

--2. Add column state VARCHAR(20).
ALTER TABLE DEPOSIT
ADD STATE VARCHAR(20);

--3. Change the size of CNAME column from VARCHAR (50) to VARCHAR (35).
ALTER TABLE DEPOSIT
ALTER COLUMN CNAME VARCHAR(35);

--4. Change the data type DECIMAL to INT in amount Column.
ALTER TABLE DEPOSIT
ALTER COLUMN AMOUNT INT;

--5. Delete Column City from the DEPOSIT table.
ALTER TABLE DEPOSIT
DROP COLUMN CITY;

--6. Rename Column ActNo to ANO.
EXEC SP_RENAME 'DEPOSIT.ACTNO', 'ANO';

--7. Change name of table DEPOSIT to DEPOSIT_DETAIL.
EXEC SP_RENAME 'DEPOSIT', 'DEPOSIT_DETAIL';


--------------------Part � B:--------------------


--1. Rename Column ADATE to AOPENDATE OF DEPOSIT_DETAIL table.
EXEC SP_RENAME 'DEPOSIT_DETAIL.ADATE', 'AOPENDATE';

--2. Delete Column AOPENDATE from the DEPOSIT_DETAIL table.
ALTER TABLE DEPOSIT_DETAIL
DROP COLUMN AOPENDATE;

--3. Rename Column CNAME to CustomerName.
EXEC SP_RENAME 'DEPOSIT_DETAIL.CNAME', 'CustomerName';

--4. Add Column country.
ALTER TABLE DEPOSIT_DETAIL
ADD COUNTRY VARCHAR(20);


--------------------Part � C:--------------------


CREATE TABLE STUDENT_DETAIL(
	ENROLLMENT_NO VARCHAR(20),
	NAME VARCHAR(25),
	CPI DECIMAL(5,2),
	BIRTHDATE DATETIME
);


--1. Add two more columns City VARCHAR (20) (Not null) and Backlog INT (Null).
ALTER TABLE STUDENT_DETAIL
ADD CITY VARCHAR(20) NOT NULL,
	Backlog INT NULL;

--2. Add column department VARCHAR (20) Not Null.
ALTER TABLE STUDENT_DETAIL
ADD DEPARTMENT VARCHAR(20) NOT NULL;

--3. Change the size of NAME column of student_detail from VARCHAR (25) to VARCHAR (35).
ALTER TABLE STUDENT_DETAIL
ALTER COLUMN NAME VARCHAR(35);

--4. Change the data type DECIMAL to INT in CPI Column.
ALTER TABLE STUDENT_DETAIL
ALTER COLUMN CPI INT;

--5. Delete Column City from the student_detail table.
ALTER TABLE STUDENT_DETAIL
DROP COLUMN CITY;

--6. Rename Column Enrollment_No to ENO.
EXEC SP_RENAME 'STUDENT_DETAIL.ENROLLMENT_NO', 'ENO';

--7. Change name of table student_detail to STUDENT_MASTER.
EXEC SP_RENAME 'STUDENT_DETAIL', 'STUDENT_MASTER';





----------------------------------------DELETE, Truncate, Drop Operation----------------------------------------


--------------------Part � A:--------------------


--1. Delete all the records of DEPOSIT_DETAIL table having amount less than and equals to 4000.
DELETE FROM DEPOSIT_DETAIL
WHERE AMOUNT<=4000;

--2. Delete all the accounts CHANDI BRANCH.
DELETE FROM DEPOSIT_DETAIL
WHERE BNAME='CHANDI';

--3. Delete all the accounts having account number (ANO) is greater than 102 and less than 105.
DELETE FROM DEPOSIT_DETAIL
WHERE ANO>102 AND ANO<105;

--4. Delete all the accounts whose branch is �AJNI� or �POWAI�
DELETE FROM DEPOSIT_DETAIL
WHERE BNAME='AJNI' OR BNAME='POWAI';

--5. Delete all the accounts whose account number is NULL.
DELETE FROM DEPOSIT_DETAIL
WHERE ANO IS NULL;

--6. Delete all the remaining records using Delete command.
DELETE FROM DEPOSIT_DETAIL;

--7. Delete all the records of Deposit_Detail table. (Use Truncate)
TRUNCATE TABLE DEPOSIT_DETAIL;

--8. Remove Deposit_Detail table. (Use Drop)
DROP TABLE DEPOSIT_DETAIL;


--------------------Part � B:--------------------


CREATE TABLE EMPLOYEE_MASTER (
	EMPNO INT,
	EMPNAME VARCHAR(25),
	JOININGTIME DATETIME,
	SALARY DECIMAL(8,2),
	CITY VARCHAR(20)
);

INSERT INTO EMPLOYEE_MASTER VALUES
(101, 'KEYUR', '2002-01-5', 12000.00, 'RAJKOT'),
(102, 'HARDIK', '2004-02-15', 14000.00, 'AHMEDABAD'),
(103, 'KAJAL', '2006-03-14', 15000.00, 'BARODA'),
(104, 'BHOOMI', '2005-06-23', 12500.00, 'AHMEDABAD'),
(105, 'HARMIT', '2004-02-15', 14000.00, 'RAJKOT'),
(106, 'MITESH', '2001-09-25', 5000.00, 'JAMNAGAR'),
(107, 'MEERAeera', Null, 7000.00, 'MORBI'),
(108, 'KISHAN', '2003-02-6', 10000.00, NULL);


--1. Delete all the records of Employee_MASTER table having salary greater than and equals to 14000.
DELETE FROM EMPLOYEE_MASTER
WHERE SALARY>=14000;

--2. Delete all the Employees who belongs to �RAJKOT� city.
DELETE FROM EMPLOYEE_MASTER
WHERE CITY='RAJKOT';

--3. Delete all the Employees who joined after 1-1-2007.
DELETE FROM EMPLOYEE_MASTER
WHERE JOININGTIME>'2007-01-1';

--4. Delete the records of Employees whose joining date is null and Name is not null.
DELETE FROM EMPLOYEE_MASTER
WHERE JOININGTIME IS NULL;

--5. Delete the records of Employees whose salary is 50% of 20000.
DELETE FROM EMPLOYEE_MASTER
WHERE SALARY = (20000*0.5);

--6. Delete the records of Employees whose City Name is not empty.
DELETE FROM EMPLOYEE_MASTER
WHERE NOT CITY IS NULL;

--7. Delete all the records of Employee_MASTER table. (Use Truncate)
TRUNCATE TABLE EMPLOYEE_MASTER;

--8. Remove Employee_MASTER table. (Use Drop)
DROP TABLE EMPLOYEE_MASTER;


--------------------Part � C:--------------------


