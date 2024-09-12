create database BaoMat
go

use BaoMat
go

create table DangNhap
(
	ID nvarchar(50) primary key,
	MK nvarchar(50),
	MaHoa varbinary(8000)
)

declare @ID varchar(50)
declare @MK varchar(50)

set @ID = 'User1'
set @MK = 'MaK1'
select EncryptedData = EncryptByPassPhrase (@ID, @MK)

select convert (varchar(100), DecryptByPassPhrase('User1', 0x02000000E854CE251C59EF1CBC05A4B3EFEE8869E5152EDFEEE64AF7163C9C30791E669B))

insert into DangNhap
values ('2251050048', 'MaK1', EncryptByPassPhrase('2251050048', 'MaK1'))
select *
from DangNhap

use BaoMat
Create Master Key
	ENCRYPTION BY PASSWORD = 'dkjuw4r$$#1946kcj$ngJKL95Q'
go

select name,is_master_key_encrypted_by_server from sys.databases

Create CERTIFICATE HRCert
	with SUBJECT = 'HRCert';
Go

--Ma hoa doi xung: ma hoa va giai ma cung dung 1 key
Create Symmetric Key commentKey
	with ALGORITHM = AES_128
	ENCRYPTION By CERTIFICATE HRCert;

--insert
OPEN SYMMETRIC KEY commentKey
DECRYPTION BY CERTIFICATE HRCert

insert into DangNhap
values ('2210500482', 'MaK2', EncryptByKey(Key_GUID('commentKey'), 'MaK2'))

Select * from DangNhap

--Giai ma
select ID, convert (varchar, decryptByKey (mahoa)) as 'mahoa' from DangNhap

--Khoa key ma khoa
CLOSE SYMMETRIC KEY commentKey

--Ma hoa bat doi xung
Create ASYMMETRIC KEY AsymKeyTest1 --public
	With ALGORITHM = RSA_2048
	ENCRYPTION BY PASSWORD = 'MK123' --private

Insert into DangNhap
values ('2210500483', 'MaK3', ENCRYPTBYASYMKEY(ASYMKEY_ID('AsymKeyTest1'),'MaK3'))

Select * from DangNhap

Select *,
GiaiMa = Convert(char(11), DECRYPTBYASYMKEY(ASYMKEY_ID('AsymKeyTest1'),mahoa,N'MK123'))
From DangNhap
Go

