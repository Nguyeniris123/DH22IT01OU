use master
go
create login SQLLogin1 with password = 'Nguyen'
exec sp_addlogin 'SQLLogin2','Nguyen'

exec sp_addsrvrolemember 'SQLLogin1', 'dbcreator'

exec sp_addsrvrolemember 'SQLLogin2', 'securityadmin'

