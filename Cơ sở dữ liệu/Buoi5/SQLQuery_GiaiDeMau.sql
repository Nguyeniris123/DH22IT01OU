CREATE VIEW dbo.abc
AS
Select *
from Orders

--Phần 1
-- Câu 1
SELECT ReorderLevel, ProductID, ProductName, CategoryName, CompanyName
FROM Suppliers, Categories, Products
WHERE Categories.CategoryID = Products.CategoryID
	AND Suppliers.SupplierID = Products.SupplierID
	AND ReorderLevel >= 25
ORDER BY ReorderLevel DESC

-- Câu 2
SELECT OrderID, OrderDate, CompanyName, Country
FROM Orders, Customers
WHERE Orders.CustomerID = Customers.CustomerID
	AND Year(OrderDate) = 1997
ORDER BY OrderDate

-- Câu 3
SELECT TOP 5 Employees.EmployeeID, FirstName, LastName,
	COUNT (OrderID)	AS SoLuongDonHang
FROM Employees, Orders
WHERE Employees.EmployeeID = Orders.EmployeeID
GROUP BY Employees.EmployeeID, FirstName, LastName
ORDER BY COUNT(OrderID) DESC

--Câu 4
UPDATE Categories
	SET CategoryName = N'Hải sản'
WHERE CategoryName = N'Seafood'

Select *
From Categories

-- Câu 5
INSERT INTO [dbo].[Employees]
	  ([LastName]
      ,[FirstName]
      ,[BirthDate]
      ,[Country])
	  VALUES
	  (N'Hồ Chí'
	  ,N'Nguyên'
	  ,N'20040407'
	  ,N'Việt Nam')

Select LastName, FirstName, BirthDate, Country
From Employees

-- Câu 6
DELETE FROM Employees
	Where LastName = N'Hồ Chí'
	AND FirstName =  N'Nguyên'
	AND BirthDate =  N'20040407'
	AND Country =  N'Việt Nam'

--Phần 2
--Câu 6
