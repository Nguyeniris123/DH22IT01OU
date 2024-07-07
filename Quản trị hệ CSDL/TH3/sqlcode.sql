USE Northwind
GO  
SELECT Country 'QuocGia',COUNT(CustomerID) 'SoLuongKH'
FROM	Customers
GROUP BY Country
ORDER By 2 DESC
GO  