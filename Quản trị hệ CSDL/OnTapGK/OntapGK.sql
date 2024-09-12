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