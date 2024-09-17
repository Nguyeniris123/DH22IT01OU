use master
Create database QLSV

use QLSV
create table SinhVien 
(
	MaSV char(11) Primary key,
	HoSV nvarchar(20),
	TenSV nvarchar(50)
)

insert into SinhVien
values ('2251050048', 'Ho Chi', 'Nguyen')

select * from SinhVien

Backup database QLSV 
to disk = 'C:\OnTap\QLSV.bak'

insert into SinhVien
values ('SV2', 'Lê Văn', 'Bình')

Backup database QLSV 
to disk = 'C:\OnTap\QLSV.bak'
with differential

insert into SinhVien
values ('SV1', 'Nguyễn Thị', 'Ánh')
select * from SinhVien

UPDATE SinhVien
SET HoSV = N'Nguyễn Thị', TenSV = N'Ánh'
WHERE MaSV = 'SV1';

Backup Log QLSV 
to disk = 'C:\OnTap\QLSV.bak'
with no_truncate

use master
drop database QLSV

restore database QLSV
from disk = 'C:\OnTap\QLSV.bak'
with file = 1, norecovery

restore database QLSV
from disk = 'C:\OnTap\QLSV.bak'
with file = 2, norecovery

restore Log QLSV
from disk = 'C:\OnTap\QLSV.bak'
with file = 3, recovery

use QLSV
select * from SinhVien

Create database QLNV 
ON PRIMARY
( NAME = 'QLNV'
, FILENAME = 'C:\OnTap\QLNV.mdf'
, SIZE = 10MB
, MAXSIZE = Unlimited
, FILEGROWTH = 20%),

( NAME = 'QLNV2'
, FILENAME = 'C:\OnTap\QLNV2.ndf'
, SIZE = 10MB
, MAXSIZE = Unlimited
, FILEGROWTH = 30%)

 LOG ON
( NAME = 'QLNV_log'
, FILENAME = 'C:\OnTap\QLNV_log.ldf'
, SIZE = 10MB
, MAXSIZE = Unlimited
, FILEGROWTH = 40%);
GO

Alter database QLNV add Filegroup FileGroup1

ALTER DATABASE QLNV
ADD FILE (
    NAME = QLNV3,
    FILENAME = 'C:\OnTap\QLNV3.ndf',
    SIZE = 10MB,
    MAXSIZE = UNLIMITED,
    FILEGROWTH = 10%
) TO FILEGROUP FileGroup1;

ALTER DATABASE QLNV MODIFY FILEGROUP FileGroup1 READONLY;

ALTER DATABASE QLNV
MODIFY FILEGROUP FileGroup1 READWRITE;

use QLNV
Create table NhanVien
(
	MaNV char(11) Primary key,
	HoNV nvarchar(20),
	TenNV nvarchar(50)
) ON FileGroup1

Use Master
backup database Northwnd
to disk = 'C:\OnTap\Northwind.bak'

use master 
Create synonym SanPham
for Northwnd.dbo.Products

Select * from dbo.SanPham

USE Northwnd;
GO

CREATE SYNONYM dbo.SanPham
FOR AdventureWorks.Production.Products;
GO

-- Tạo login MSSV với SQL Server authentication
CREATE LOGIN MSSV WITH PASSWORD = 'YourPasswordHere';
GO

-- Gán quyền ALTER ANY LOGIN cho MSSV (cho phép tạo, sửa, xóa login)
GRANT ALTER ANY LOGIN TO MSSV;

-- Gán quyền VIEW ANY LOGIN cho MSSV (cho phép xem các login)
GRANT VIEW ANY LOGIN TO MSSV;

-- Gỡ quyền VIEW ANY DATABASE để MSSV không xem được các CSDL khác
DENY VIEW ANY DATABASE TO MSSV;
GO

-- Chuyển sang cơ sở dữ liệu AdventureWorks
USE AdventureWorks;
GO

-- Tạo user cho MSSV trong CSDL AdventureWorks
CREATE USER MSSV_User FOR LOGIN MSSV;
GO

-- Gán quyền SELECT cụ thể cho các cột [ContactID], [Title], [FirstName], [LastName] của bảng [Person].[Contact]
GRANT SELECT (ContactID, Title, FirstName, LastName)
ON Person.Contact
TO MSSV_User;
GO

-- Truy vấn các cột được cấp quyền từ bảng Person.Contact
SELECT ContactID, Title, FirstName, LastName 
FROM Person.Contact;
GO