Create login SQLLogin3 with password = '123'

use AdventureWorks
go
exec sp_adduser 'SQLLogin3', 'SQLLogin3_DBuser1'

grant select, insert
on [HumanResources].[Department]
to SQLLogin3_DBuser1

use master
create server role QLLogin_TaoDB_KhongXemThayTenDB
exec sp_addsrvrolemember 'QLLogin_TaoDB_KhongXemThayTenDB', 'SecurityAdmin'
exec sp_addsrvrolemember 'QLLogin_TaoDB_KhongXemThayTenDB', 'dbCreator'

deny View any database
to QLLogin_TaoDB_KhongXemThayTenDB

create login SQLLogin4  with password = '123'
exec sp_addsrvrolemember 'SQLLogin4', 'QLLogin_TaoDB_KhongXemThayTenDB'

use Northwind
go
create role XemThemKhongSuaXoaNhanVien

use master
create login SQLLogin5  with password = '123'

use Northwind
go
exec sp_adduser 'SQLLogin5', 'SQLLogin5_DBuser'

grant select, insert
on [dbo].[Employees]
to XemThemKhongSuaXoaNhanVien

exec sp_addrolemember 'XemThemKhongSuaXoaNhanVien', 'SQLLogin5_DBuser'

use Northwind
Create application role XemThemKhongSuaXoaKhachHang with password = 'P@ssw0rd'

grant select, insert
on [dbo].[Employees]
to XemThemKhongSuaXoaKhachHang