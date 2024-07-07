Create database Nguyen_2251050048
use Nguyen_2251050048
go

sp_changedbowner 'sa'
go

sp_changedbowner '804\Admin'
go

sp_helpdb

Create Schema MySchema
go

Create Table MySchema.SinhVien
(MaSV char(10) primary key
, HoSV nvarchar(100)
, TenSV nvarchar(50))
go

Alter Schema dbo TRANSFER MySchema.SinhVien
go
drop table dbo.SinhVien