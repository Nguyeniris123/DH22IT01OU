Use master
Create database CSDL1
Go

use CSDL1
go

create table SinhVien
(
	MaSV char(11) PRIMARY KEY,
	HoSV nvarchar(20),
	TenSv nvarchar(50)
)


Insert into SinhVien
values ('2251050048', 'Hồ Chí','Nguyên')

select * from SinhVien

Backup database CSDL1
to disk = 'D:\CSDLFull2.bak'

Insert into SinhVien
values ('22510500482', 'Hồ','Chí Nguyên')
select * from SinhVien

Backup database CSDL1
to disk = 'D:\CSDLDiff2.bak'
with differential

drop database CSDL1

Restore database CSDL1
from disk = 'D:\CSDLFull2.bak'
with norecovery

Restore database CSDL1
from disk = 'D:\CSDLDiff2.bak'
with recovery

use CSDL1
go
select * from SinhVien

Use Master
go
Backup Database AdventureWorks
to disk ='D:\CSDL1\AdventureWorksStripe1.bak',
	disk = 'D:\CSDL1\AdventureWorksStripe2.bak',
	disk = 'D:\CSDL1\AdventureWorksStripe3.bak'
with description = 'Striped Backup'

Backup Database AdventureWorks
to disk ='D:\CSDL1\AdventureWorksMirrored1.bak'
MIRROR
to disk ='D:\CSDL1\AdventureWorksMirrored2.bak'
with format, Description = 'Mirrored Backup'

Create Master Key
	ENCRYPTION BY PASSWORD = 'dkjuw4r$$#1946kcj$ngJKL95Q'
go

Create CERTIFICATE HRCert
	with SUBJECT = 'HRCert';
Go

Backup database CSDL1
to disk = 'D:\CSDL1.bak'
with 
ENCRYPTION (
	ALGORITHM = AES_256,
	SERVER CERTIFICATE = HRCert
)

drop database CSDL1

Restore database CSDL1
from disk = 'D:\CSDL1.bak'
with recovery

Backup Database CSDL1
to disk ='D:\CSDL1\CSDL15.bak'

Restore database CSDL1
from disk = 'D:\CSDL1\CSDL15.bak'
	with MOVE 'CSDL1' to 'D:\Tam\CSDL1.mdf',
	MOVE 'CSDL1_Log' to 'D:\Tam\CSDL1.ldf', REPLACE