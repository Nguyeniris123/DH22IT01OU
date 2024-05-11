--36
--Kq: tạo table 
USE [NORTHWND]
GO
/****** Object:  Table [dbo].[Customers]    Script Date: 11/05/2024 9:25:58 CH ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[Customers1](
	[CustomerID] [nchar](5) NOT NULL,
	[CompanyName] [nvarchar](40) NOT NULL,
	[ContactName] [nvarchar](30) NULL,
	[ContactTitle] [nvarchar](30) NULL,
	[Address] [nvarchar](60) NULL,
	[City] [nvarchar](15) NULL,
	[Region] [nvarchar](15) NULL,
	[PostalCode] [nvarchar](10) NULL,
	[Country] [nvarchar](15) NULL,
	[Phone] [nvarchar](24) NULL,
	[Fax] [nvarchar](24) NULL,
 CONSTRAINT [PK_Customers1] PRIMARY KEY CLUSTERED 
(
	[CustomerID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO

--37
--Kq: 
Use NORTHWND
go
INSERT INTO Customers1
SELECT *
FROM Customers 
Where Country = N'USA' OR Country = N'UK'
go

--xem dữ liệu
Select *
From Customers1
Order by Country

--38
--Kq: 7 hàng ( xoá 13)
Delete from Customers1
where Country = N'USA'

--39
--Kq: thêm 1 hàng
Use NORTHWND
GO
Insert into dbo.Customers1
		([CustomerID]
		,[CompanyName]
		,[ContactName]
		,[ContactTitle]
		,[Address]
		,[City]
		,[Region]
		,[PostalCode]
		,[Country]
		,[Phone]
		,[Fax])
		Values 
		(N'KH001'
		,N'Công ty ABC'
		,N'Hồ Chí Nguyên'
		,N'Giám đốc'
		,N'529 Nguyễn Bình'
		,N'Hồ Chí Minh'
		,N'Đông Nam Á'
		,N'70000'
		,N'Việt Nam'
		,N'0123456789'
		,N'1232132131')
GO
--40
--Kq: 1 hàng update
Update Customers1
	Set Phone = N'0111222333',
	ContactName = N'Lê Thanh Bình',
	City = N'Hà Nội'	
Where CustomerID = N'KH001'

--xem dữ liệu
Select *
From Customers1
Order by Country

--41
--Kq: 
Update Customers1
	Set Country = N'Anh'
Where Country = N'UK'
--42
--Kq: 
Delete from Customers1

--43
--Kq:
Drop Table Customers1

