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

