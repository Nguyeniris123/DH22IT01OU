--1.
--KQ: 75530 HÀNG
SELECT *
FROM Orders, Customers

--2.
--KQ: 830 hàng
SELECT Orders.*, Customers.* 
FROM Orders, Customers
WHERE Orders.CustomerID = Customers.CustomerID

--3.
--KQ: 17
SELECT CustomerID, CompanyName, ContactName, Address, Country, City
FROM Customers
WHERE City = N'London' OR Country = N'France'
ORDER by Country

--4.
--KQ: 5
SELECT CustomerID, CompanyName, ContactName, Address, Country, City, ContactTitle
FROM Customers
WHERE 
(ContactTitle = N'Sales Manager' AND Country = N'USA') 
OR 
(ContactTitle = N'Owner' AND Country = N'Mexico') 
ORDER by Country DESC

--5.
--KQ: 7
SELECT CustomerID, CompanyName, ContactName, Address, Country, City, ContactTitle
FROM Customers
WHERE 
(ContactTitle LIKE N'%Manager%' AND Country = N'USA') 
OR 
(ContactTitle <> N'Owner' AND Country = N'Mexico') 
ORDER by Country DESC

--6.
--KQ: 
SELECT OrderID, OrderDate
From Orders
