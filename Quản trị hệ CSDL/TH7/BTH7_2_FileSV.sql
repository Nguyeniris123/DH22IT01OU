

--Buoi 2

--Tao database CSDL2
Create Database CSDL2 on Primary
(
	Name = N'CSDL2',
	FileName = N'D:\QTHCSDL\CSDL2.mdf'
)

Log on 
(
	Name = N'CSDL2_Log',
	FileName = N'D:\QTHCSDL\CSDL2.ldf'
)

--Tạo bảng SinhVien
use CSDL2
create table SinhVien
(
	MaSV char(11) Primary key,
	HoSV nvarchar(20),
	TenSV nvarchar(50)
)

--Sao luu CSDL2 Full và D:\QTCSDL\CSDL2_Backup.bak
	Backup Database CSDL2
	to disk = 'D:\QTHCSDL\CSDL2_Backup.bak'
	with format

--them du lieu
	Insert into SinhVien
	values ('2251050048', 'Hồ Chí','Nguyên')

--Sao luu CSDl2 Differential, cũng sao lưu vào file D:\QTCSDL\CSDL2_Backup.bak
	Backup Database CSDL2
	to disk = 'D:\QTHCSDL\CSDL2_Backup.bak'
	with differential

--Nhap them hang thu 2 vao SV
	Insert into SinhVien
	values ('22510500482', 'Hồ Chí','Nguyên dep trai')

--Sao luu CSDl2 taillog, cũng sao lưu vào file D:\QTCSDL\CSDl2_Backup.bak
	Backup Log CSDL2
	to disk = 'D:\QTHCSDL\CSDL2_Backup.bak'

--Phuc hoi CSDL 1 từ 3 phần trên
	--Xoa CSDl2
		drop database CSDL2
	--Phuc hoi Full tu phan 1
		Restore database CSDL2
		from disk = 'D:\QTHCSDL\CSDL2_Backup.bak'
		with file = 1, norecovery
	--Phuc hoi Diff tu phan 2
		Restore database CSDL2
		from disk = 'D:\QTHCSDL\CSDL2_Backup.bak'
		with file = 2, norecovery
	--Phuc hoi taillog tu phan 3
		Restore Log CSDL2
		from disk = 'D:\QTHCSDL\CSDL2_Backup.bak'
		with file = 3, recovery
	--Truy xuat Dl
		use CSDL2
		select * from SinhVien

--Cau 17
--Viết lệnh phục hồi CSDL4, lùi CSDL4 lại thời điểm ngay sau khi tạo CSDL4(lúc chưa nhập thông tin SV)

--Tao database CSDL4
Create Database CSDL4 on Primary
(
	Name = N'CSDL4',
	FileName = N'D:\QTHCSDL\CSDL4.mdf'
)

Log on 
(
	Name = N'CSDL4_Log',
	FileName = N'D:\QTHCSDL\CSDL4.ldf'
)
--Ghi lại thời gian 2:04

--Tạo bảng SinhVien 
use CSDL4
create table SinhVien
(
	MaSV char(11) Primary key,
	HoSV nvarchar(20),
	TenSV nvarchar(50)
)

--Sao luu CSDL4 vao 'D:\QTCSDL\CSDL4.bak' 
	Backup Database CSDL4
	to disk = 'D:\QTHCSDL\CSDL4.bak'

--Nhap dl vao SV
	Insert into SinhVien
	values ('1', 'Hồ Chí','Nguyên')
--xem giờ 2:06
	
--Nhap dl vao SV
	Insert into SinhVien
	values ('2', 'Le Thanh','Dan')
--xem giờ 2:07
--cho khoang 3p	

--Nhap dl vao SV
	Insert into SinhVien
	values ('3', 'Vu','Tin')
--xem giờ  2:10

--Sao luu CSDL4 taillog, cũng sao lưu vào file D:\QTCSDL\CSDL4_Backup.bak
	Backup Log CSDL4
	to disk = 'D:\QTHCSDL\CSDL4_Backup.bak'
	with format, no_truncate
--Thoi gian: 2:18

--Xoa CSDL4
	use master
	drop database CSDL4

--Phục hồi CSDL về thời diểm chưa có bảng SV
set dateformat DMY

		Restore database CSDL4
		from disk = 'D:\QTHCSDL\CSDL4.bak'
		with stopat = '08/09/2024 14:48:30', replace, norecovery
		
		Restore Log CSDL4
		from disk = 'D:\QTHCSDL\CSDL4_Backup.bak'
		with stopat = '08/09/2024 14:48:30', replace, recovery

		use CSDL2
		select * from SinhVien


--Cau 18: Su dung SNAPSHOT
create database AdventureWorksSnapShot
on
(
	name = 'AdventureWorks_data',
	filename = 'D:\AdventureWorksSnapShot.mdf'
)
as SNAPSHOT OF AdventureWorks

use master
go


RESTORE DATABASE AdventureWorks
FROM DATABASE_SNAPSHOT = 'AdventureWorksSnapShot'

--Tao database snapshot

