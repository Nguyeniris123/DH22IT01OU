Use Master 
go
Create database HoChiNguyen_2251050048

Select name "Database Name", recovery_model_desc
From sys.databases

Use master
Alter database HoChiNguyen_2251050048 Set recovery FULL

Alter database HoChiNguyen_2251050048 add FILEGROUP F1
Alter database HoChiNguyen_2251050048 Modify Filegroup F1 ReadOnly;
Alter database HoChiNguyen_2251050048 add FILEGROUP F2
Alter database HoChiNguyen_2251050048 Modify Filegroup F2 Default;

Alter database HoChiNguyen_2251050048 add file (Name = 'NDF1', Filename = 'D:\NDF1.ndf')
To filegroup F1
Alter database HoChiNguyen_2251050048 add file (Name = 'NDF2', Filename = 'D:\NDF2.ndf')
To filegroup F2
Alter database HoChiNguyen_2251050048 add log file (Name = 'log1', Filename = 'D:\log.ldf')

USE Master;
CREATE DATABASE SmallWorks ON  PRIMARY
( NAME = 'SmallWorksPrimary'
, FILENAME = 'C:\SmallWorks.mdf'
, SIZE = 10MB
, FILEGROWTH = 20%
, MAXSIZE = 50MB)
, FILEGROUP FileGroup1
( NAME = 'SmallWorksData1'
, FILENAME = 'C:\SmallWorksData1.ndf'
, SIZE = 10MB
, FILEGROWTH = 20%
, MAXSIZE = 50MB)
, FILEGROUP FileGroup2
( NAME = 'SmallWorksData2'
, FILENAME = 'D:\SmallWorksData2.ndf'
, SIZE = 10MB
, FILEGROWTH = 20%
, MAXSIZE = 50MB)
 LOG ON
( NAME = 'SmallWorks_log'
, FILENAME = 'C:\SmallWorks_log.ldf'
, SIZE = 10MB
, FILEGROWTH = 10%
, MAXSIZE = 20MB);
GO
USE SmallWorks;
GO
ALTER DATABASE SmallWorks
MODIFY FILEGROUP FileGroup1 DEFAULT;
GO

CREATE TABLE dbo.Contact(
  ContactID int NOT NULL
, FirstName varchar(75) NOT NULL
, LastName varchar(75) NOT NULL
, EmailAddress varchar(255) NULL
, Phone varchar(25) NULL
) ON FileGroup1;

CREATE TABLE dbo.Product(
  ProductID int NOT NULL
, ProductName varchar(75) NOT NULL
, ProductNumber nvarchar(25) NOT NULL
, StandardCost money NOT NULL
, ListPrice money NOT NULL
) ON FileGroup2;

INSERT dbo.Contact
(ContactID, FirstName, LastName, EmailAddress, Phone)
SELECT ContactID, FirstName, LastName, EmailAddress, Phone
FROM AdventureWorks.Person.Contact
WHERE ContactID < 5000;

INSERT dbo.Product
(ProductID, ProductName, ProductNumber, StandardCost, ListPrice)
SELECT ProductID, Name, ProductNumber, StandardCost, ListPrice
FROM AdventureWorks.Production.Product;

ALTER DATABASE SmallWorks MODIFY FILEGROUP FileGroup2 READONLY; 

USE SmallWorks
DELETE FROM dbo.Contact WHERE ContactID<500;

Select *
From dbo.Contact 

USE SmallWorks
DELETE FROM dbo.Product WHERE ProductID<500; 
--Vì bảng Product đang ở trong filegroup2 có trạng thái là readOnly nên ko thể chỉnh sửa
-- ==> Chỉnh readonly của fiolegroup2 thành ReadWrite

ALTER DATABASE SmallWorks
MODIFY FILEGROUP FileGroup2 ReadWrite;

Select *
From dbo.Product 

Use Northwind
Select * from Employees

Use Master
Select *
From Northwind.dbo.Employees

Create Synonym NhanVien for Northwind.dbo.Employees
Select * From NhanVien

use AdventureWorks
Create Synonym NhanVien for AdventureWorks.dbo.HumanResources.Employee
Select * From NhanVien

