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
--KQ: 185
SELECT OrderID, OrderDate, CompanyName, LastName
From Orders, Customers, Employees
Where 
	Employees.EmployeeID = Orders.EmployeeID
and Customers.CustomerID = Orders.CustomerID
and OrderDate between '19970101' and '19970630'
order by OrderDate

--7
--KQ: 29 hàng
SELECT OrderID, OrderDate, CompanyName, LastName
From Orders, Customers, Employees
Where 
	Employees.EmployeeID = Orders.EmployeeID
and Customers.CustomerID = Orders.CustomerID
and OrderDate between '19970201' and '19970228'
order by OrderDate


--8
--Kq:105 hàng
SELECT OrderID, OrderDate, CompanyName, LastName
From Orders, Customers, Employees
Where 
	Employees.EmployeeID = Orders.EmployeeID
and Customers.CustomerID = Orders.CustomerID
and month(OrderDate) = '4'
order by OrderDate

--9
--Kq: 422
SELECT OrderID, OrderDate, CompanyName, LastName
From Orders, Customers, Employees
Where 
	Employees.EmployeeID = Orders.EmployeeID
and Customers.CustomerID = Orders.CustomerID
and Year(OrderDate) % 2 = 0
order by OrderDate

--10
--Kq: 111 HÀNG
SELECT OrderID, OrderDate, CompanyName, LastName
From Orders, Customers, Employees
Where 
	Employees.EmployeeID = Orders.EmployeeID
and Customers.CustomerID = Orders.CustomerID
and Day(OrderDate) In (5,13,14,23)
order by OrderDate

--11
--KQ: 4
SELECT OrderID, OrderDate, 
	CONVERT(varchar, OrderDate, 103) AS NgayKieuVN1,
	CONVERT(varchar, OrderDate, 105) AS NgayKieuVN2,
	CompanyName, Freight
From Orders, Customers
Where 
	Customers.CustomerID = Orders.CustomerID
	AND ShipCountry = N'UK'
	AND EmployeeID = 2
	and Year(OrderDate) = 1997
order by OrderDate

--12
--Kq: 6
Select ProductID, ProductName, CompanyName, CategoryName
From Products, Suppliers, Categories
Where 
	Products.SupplierID = Suppliers.SupplierID
	And Products.CategoryID = Categories.CategoryID
	And ProductName Like N'ch%'

--13
--Kq: 4
Select ProductID, CompanyName, UnitPrice, UnitsInStock, Discontinued
From Products, Suppliers
Where 
	Products.SupplierID = Suppliers.SupplierID
	AND Discontinued = 1
	AND UnitsInStock > 0

--14
--Kq: 78
Select CompanyName, ContactName, Country, Phone, Fax
From Customers
Where
	Country <> N'USA'
order by Country Desc

--15
--KQ: 63
Select CompanyName, ContactName, Country, Phone, Fax
From Customers
Where
	Country Not in (N'Brazil', N'Italy', N'Spain', N'Venezuela', N'UK')
order by Country

--16
--Kq: 16
Select OrderID, CompanyName, LastName, OrderDate, ShipCountry, ShippedDate, Freight
From Employees, Orders, Customers
Where 
	Employees.EmployeeID = Orders.EmployeeID
	AND Customers.CustomerID = Orders.CustomerID
	AND (
		   (ShipCountry = N'USA' and Freight > 300) 
		OR (ShipCountry = N'Argentina' and Freight < 5) 
		)	
Order by ShipCountry

--17 (phải nhập thêm 2 hàng vào bảng Orders để test
--Kq:
Select OrderID, CompanyName, LastName, OrderDate, RequiredDate, ShipCountry, Freight
From Employees, Orders, Customers
Where 
	Orders.EmployeeID = Employees.EmployeeID
AND Orders.CustomerID = Customers.CustomerID
AND (
		CAST (OrderDate AS Date) = CAST (GETDATE() AS Date)
	OR CAST (RequiredDate AS Date) = CAST (GETDATE() AS Date)
	)
Order by ShipCountry

-- xoá 2 hàng nhập liệu để test
DELETE FROM Orders
where OrderID IN (11080, 11081)

--18
--Kq: 31 hàng
Select OrderID, CONVERT(varchar, OrderDate, 105), CompanyName, LastName, Freight, Freight*1.1  AS NewFreight
From Employees, Orders, Customers
Where 
	Employees.EmployeeID = Orders.EmployeeID
AND Customers.CustomerID = Orders.CustomerID
AND (
		MONTH(OrderDate) = 4
	AND Year(OrderDate) = 1997
	)
Order by OrderDate

--19
--KQ: 1059
Select Orders.OrderID, ProductName, [Order Details].UnitPrice, Quantity, Discount,
		[Order Details].UnitPrice * Quantity AS ThanhTien, 
		([Order Details].UnitPrice * Quantity) * Discount AS TienGiamGia, 
		([Order Details].UnitPrice * Quantity) - ([Order Details].UnitPrice * Quantity) * Discount AS TienPhaiTra
From Orders, Products, [Order Details]
Where 
	Products.ProductID = [Order Details].ProductID
	AND Orders.OrderID = [Order Details].OrderID
	AND Year(OrderDate) = 1997
Order by OrderDate

--20
--Kq: 33
Select Orders.OrderID, ProductName, [Order Details].UnitPrice, Quantity, Discount,
		[Order Details].UnitPrice * Quantity AS ThanhTien, 
		([Order Details].UnitPrice * Quantity) * Discount AS TienGiamGia, 
		([Order Details].UnitPrice * Quantity) - ([Order Details].UnitPrice * Quantity) * Discount AS TienPhaiTra
From Orders, Products, [Order Details]
Where 
	Products.ProductID = [Order Details].ProductID
	AND Orders.OrderID = [Order Details].OrderID
	AND Year(OrderDate) = 1997
	AND Discount > 0
	AND ([Order Details].UnitPrice * Quantity) - ([Order Details].UnitPrice * Quantity) * Discount < 50
Order by OrderDate

--21
--Kq: 4 hàng
Select ProductID, ProductName, CompanyName, UnitPrice, UnitsInStock,
		UnitPrice * UnitsInStock AS TriGia
From Products, Suppliers
Where 
	Suppliers.SupplierID = Products.SupplierID
	AND Discontinued = 1
	AND UnitsInStock > 0

--22
--Kq: 6 hàng
Select HireDate, Title, BirthDate, HomePhone, 
		TitleOfCourtesy + ' ' + Left(LastName, 1) + '. ' + FirstName AS HoTen
From Employees
Where 
	HireDate <= N'19931231'
order by HireDate

--23
--KQ: 1
Select count(ProductID) SoLuongSanPham,
		Min(UnitPrice) DonGiaCaoNhat,
		Max(UnitPrice) DonGiaThapNhat,
		AVG(UnitPrice) DonGiaTrungBinhCong
From Products

--24
--Kq: 8 hàng
Select count(ProductID) SoLuongSanPham,
		Min(UnitPrice) DonGiaCaoNhat,
		Max(UnitPrice) DonGiaThapNhat,
		AVG(UnitPrice) DonGiaTrungBinhCong
From Products
Group by CategoryID

--Mở rộng: hiện mã và tên loại sản phẩm. Thống kê theo 8 nhóm loại sản phẩm
Select Products.CategoryID,
		CategoryName,
		count(ProductID) SoLuongSanPham,
		Min(UnitPrice) DonGiaCaoNhat,
		Max(UnitPrice) DonGiaThapNhat,
		AVG(UnitPrice) DonGiaTrungBinhCong
From Products, Categories
Where 
	Categories.CategoryID = Products.CategoryID
Group by Products.CategoryID, CategoryName

--25
--Kq: 1 hang, 105 đơn hàng
Select count(OrderID)
From Orders
Where	
	ShipCountry IN (N'Belgium',N'Canada',N'UK')

--26
--Kq: 3 hàng thống kê đơn hàng chở đến 3 nước
Select count(OrderID)
From Orders
Where	
	ShipCountry IN (N'Belgium',N'Canada',N'UK')
Group by ShipCountry

--27
--KQ: 3 hàng
Select Categories.CategoryID, CategoryName,
		AVG(UnitPrice) AS DonGiaTrungBinh
From Categories, Products
Where	
	Categories.CategoryID = Products.CategoryID
Group by Categories.CategoryID, CategoryName
Having AVG(UnitPrice) > 30

--28
--Kq: 8 loại sản phẩm
Select Categories.CategoryID, CategoryName,
		AVG(UnitPrice) AS DonGiaTrungBinh
From Categories, Products
Where	
	Categories.CategoryID = Products.CategoryID
	AND UnitPrice > 30
Group by Categories.CategoryID, CategoryName

--29
--Kq: 8 hàng
Select CategoryName,  SUM([Order Details].UnitPrice*Quantity * (1-Discount)) AS DoanhSo
From Categories, Products, [Order Details], Orders
Where	
	Categories.CategoryID = Products.CategoryID
	AND Products.ProductID = [Order Details].ProductID
	AND Orders.OrderID = [Order Details].OrderID
	AND YEAR(OrderDate) = 1996 
Group by CategoryName

--30
--Kq: 86 hàng
Select CompanyName, 
		SUM(Freight)/SUM([Order Details].UnitPrice * Quantity *(1-Discount)) AS TiLeTienCuoc
From Customers, Orders, [Order Details]
Where	
	Customers.CustomerID = Orders.CustomerID
	AND Orders.OrderID = [Order Details].OrderID
	AND Year(OrderDate) = 1997
Group by CompanyName	

--31
--KQ: 39 sản phẩm
Select Top 39 ProductID, ProductName, UnitPrice
From Products
Order by UnitPrice DESC

--32
--Kq: 39
Select Top 50 PERCENT ProductID, ProductName, UnitPrice
From Products
Order by UnitPrice DESC

--33
--Kq: 10 hàng
Select Top 10 Customers.CustomerID, CompanyName, Count(OrderID) AS SoLuongDonHang
From Customers, Orders
Where 
	Customers.CustomerID = Orders.CustomerID
Group by Customers.CustomerID, CompanyName
Order by Count(OrderID) DESC

--34
--Kq: 89
Select CustomerID, CompanyName, Country
From Customers
Where CustomerID IN 
			(SELECT CustomerID FROM Orders)
Order by Country

--35
--KQ: 2 hàng
Select CustomerID, CompanyName, Country
From Customers
Where CustomerID NOT IN 
			(SELECT CustomerID FROM Orders)
Order by Country
