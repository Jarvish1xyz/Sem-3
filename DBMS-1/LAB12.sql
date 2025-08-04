USE CSE_3A_201;





--------------------Part – A:--------------------


--1. Combine information from Person and Department table using cross join or Cartesian product.
SELECT *
FROM PERSON AS P CROSS JOIN DEPT AS D;

--2. Find all persons with their department name
SELECT PersonName, DeptName
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID;

--3. Find all persons with their department name & code.
SELECT PersonName, DeptName, DeptCode
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID;

--4. Find all persons with their department code and location.
SELECT PersonName, DeptCode, LOCATION
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID;

--5. Find the detail of the person who belongs to Mechanical department.
SELECT *
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
WHERE DeptCode='ME';

--6. Final person’s name, department code and salary who lives in Ahmedabad city.
SELECT PersonName, DeptCode, SALARY
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
WHERE CITY='AHEMDABAD';

--7. Find the person's name whose department is in C-Block.
SELECT PersonName
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
WHERE LOCATION='C-BLOCK';

--8. Retrieve person name, salary & department name who belongs to Jamnagar city.
SELECT PersonName,SALARY, DeptName 
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
WHERE CITY='JAMNAGAR';

--9. Retrieve person’s detail who joined the Civil department after 1-Aug-2001.
SELECT *
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
WHERE DeptCode='CI' AND JoiningDate>'2001-08-01';

--10. Display all the person's name with the department whose joining date difference with the current date is more than 365 days.
SELECT PersonName, DeptName 
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
WHERE (YEAR(GETDATE())-YEAR(JoiningDate)) > 1;

--11. Find department wise person counts.
SELECT DEPTNAME, COUNT(*)
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
GROUP BY DEPTNAME;

--12. Give department wise maximum & minimum salary with department name.
SELECT DEPTNAME, MAX(SALARY) AS MAX_SAL, MIN(SALARY) AS MIN_SAL
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
GROUP BY DEPTNAME;

--13. Find city wise total, average, maximum and minimum salary.
SELECT SUM(SALARY) AS TOTAL_SAL, AVG(SALARY) AS AVG_SAL, MAX(SALARY) AS MAX_SAL, MIN(SALARY) AS MIN_SAL
FROM PERSON
GROUP BY CITY;

--14. Find the average salary of a person who belongs to Ahmedabad city.
SELECT AVG(SALARY) AS AVG_SAL
FROM PERSON
WHERE CITY='AHEMDABAD';

--15. Produce Output Like: <PersonName> lives in <City> and works in <DepartmentName> Department. (In single column)
SELECT PersonName + ' LIVES IN ' + CITY + ' AND WORKS IN ' + DEPTNAME + ' DEPARTMENT.'
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID;

--------------------Part – B:--------------------


--1. Produce Output Like: <PersonName> earns <Salary> from <DepartmentName> department monthly. (In single column)
SELECT PersonName + ' EARNS ' + CAST(SALARY AS VARCHAR) + ' FROM ' + DEPTNAME + ' DEPARTMENT MONTHLY.'
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID;

--2. Find city & department wise total, average & maximum salaries.
SELECT SUM(SALARY) AS TOTAL_SAL, AVG(SALARY) AS AVG_SAL, MAX(SALARY) AS MAX_SAL
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
GROUP BY CITY, DEPTNAME;

--3. Find all persons who do not belong to any department.
SELECT * FROM PERSON
WHERE PERSON.DEPTID IS NULL;

--4. Find all departments whose total salary is exceeding 100000.
SELECT DEPTNAME, SUM(SALARY) AS TOTAL_SAL
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
WHERE SUM(SALARY)>100000
GROUP BY DEPTNAME;


--------------------Part – C:--------------------


--1. List all departments who have no person.
SELECT DEPTNAME
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
GROUP BY DEPTNAME
HAVING COUNT(*)=0;

--2. List out department names in which more than two persons are working.
SELECT DEPTNAME
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
GROUP BY DEPTNAME
HAVING COUNT(*)>2;

--3. Give a 10% increment in the computer department employee’s salary. (Use Update)
UPDATE PERSON
SET SALARY = SALARY+(SALARY*0.1)
FROM PERSON JOIN DEPT
ON PERSON.DeptID=DEPT.DeptID
WHERE DeptCode='C';

SELECT * FROM PERSON;