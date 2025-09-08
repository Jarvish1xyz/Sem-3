USE CSE_3A_201;




CREATE TABLE Author (
    AuthorID INT PRIMARY KEY,
    AuthorName VARCHAR(100) NOT NULL,
    Country VARCHAR(50)
);

CREATE TABLE Publisher (
    PublisherID INT PRIMARY KEY,
    PublisherName VARCHAR(100) NOT NULL UNIQUE,
    City VARCHAR(50) NOT NULL
);

CREATE TABLE Book (
    BookID INT PRIMARY KEY,
    Title VARCHAR(200) NOT NULL,
    AuthorID INT NOT NULL,
    PublisherID INT NOT NULL,
    Price DECIMAL(8,2) NOT NULL,
    PublicationYear INT NOT NULL,
    FOREIGN KEY (AuthorID) REFERENCES Author(AuthorID),
    FOREIGN KEY (PublisherID) REFERENCES Publisher(PublisherID)
);


INSERT INTO Author VALUES
(1, 'Chetan Bhagat', 'India'),
(2, 'Arundhati Roy', 'India'),
(3, 'Amish Tripathi', 'India'),
(4, 'Ruskin Bond', 'India'),
(5, 'Jhumpa Lahiri', 'India'),
(6, 'Paulo Coelho', 'Brazil'),
(7, 'Sudha Murty', 'India');

INSERT INTO Publisher VALUES
(1, 'Rupa Publications', 'New Delhi'),
(2, 'Penguin India', 'Gurugram'),
(3, 'HarperCollins India', 'Noida'),
(4, 'Aleph Book Company', 'New Delhi');

INSERT INTO Book VALUES
(101, 'Five Point Someone', 1, 1, 250.00, 2004),
(102, 'The God of Small Things', 2, 2, 350.00, 1997),
(103, 'Immortals of Meluha', 3, 3, 300.00, 2010),
(104, 'The Blue Umbrella', 4, 1, 180.00, 1980),
(105, 'The Lowland', 5, 2, 400.00, 2013),
(106, 'Revolution 2020', 1, 2, 275.00, 2011),
(107, 'Sita: Warrior of Mithila', 3, 3, 320.00, 2017),
(108, 'The Room on the Roof', 4, 4, 200.00, 1956);


--------------------Part – A:--------------------


--1. List all books with their authors.
SELECT BookID, Title, AuthorName
FROM Book JOIN Author
ON Book.AuthorID=Author.AuthorID;

--2. List all books with their publishers.
SELECT BookID, Title, PublisherName
FROM Book JOIN Publisher
ON Book.PublisherID=Publisher.PublisherID;

--3. List all books with their authors and publishers.
SELECT BookID, Title, AuthorName, PublisherName
FROM Book JOIN Author
ON Book.AuthorID=Author.AuthorID
JOIN Publisher
ON Book.PublisherID=Publisher.PublisherID;

--4. List all books published after 2010 with their authors and publisher and price.
SELECT BookID, Title, AuthorName, PublisherName, Price
FROM Book JOIN Author
ON Book.AuthorID=Author.AuthorID
JOIN Publisher
ON Book.PublisherID=Publisher.PublisherID
WHERE PublicationYear>2010;

--5. List all authors and the number of books they have written.
SELECT AuthorName, COUNT(Title)
FROM Book JOIN Author
ON Book.AuthorID=Author.AuthorID
GROUP BY AuthorName;

--6. List all publishers and the total price of books they have published.
SELECT PublisherName, SUM(Price)
FROM Publisher JOIN Book
ON Publisher.PublisherID=Book.PublisherID
GROUP BY PublisherName;

--7. List authors who have not written any books.
SELECT AuthorName, COUNT(Title)
FROM Author LEFT OUTER JOIN Book
ON Book.AuthorID=Author.AuthorID
GROUP BY AuthorName
HAVING COUNT(Title) < 1;

--8. Display total number of Books and Average Price of every Author.
SELECT AuthorName, COUNT(Title), AVG(Price)
FROM Book JOIN Author
ON Book.AuthorID=Author.AuthorID
GROUP BY AuthorName;

--9. lists each publisher along with the total number of books they have published, sorted from highest to lowest.
SELECT PublisherName, COUNT(Title) AS C
FROM Publisher JOIN Book
ON Publisher.PublisherID=Book.PublisherID
GROUP BY PublisherName
ORDER BY C DESC;
--10. Display number of books published each year.
SELECT PublicationYear, COUNT(Title) AS C
FROM Book
GROUP BY PublicationYear;


--Part – B:


--1. List the publishers whose total book prices exceed 500, ordered by the total price.
SELECT PublisherName, SUM(Price)
FROM Publisher JOIN Book
ON Publisher.PublisherID=Book.PublisherID
GROUP BY PublisherName
HAVING SUM(Price)>500;

--2. List most expensive book for each author, sort it with the highest price.
SELECT AuthorName, MAX(Price)
FROM Book JOIN Author
ON Book.AuthorID=Author.AuthorID
GROUP BY AuthorName
ORDER BY MAX(Price) DESC;


--Part – C: 


--1. Emp_info(Eid, Ename, Did, Cid, Salary, Experience)
--Dept_info(Did, Dname)
--City_info(Cid, Cname, Did))
--District(Did, Dname, Sid)
--State(Sid, Sname, Cid)
--Country(Cid, Cname)


--2. Insert 5 records in each table.
--3. Display employeename, departmentname, Salary, Experience, City, District, State and country of all employees.
