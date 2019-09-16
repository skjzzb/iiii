/*

1. Write a basic PL/SQL programme to create two variables and store some default value and print them.
drop procedure if exists ProG1;
delimiter //
create procedure ProG1() 
begin 
	declare a int default 20;
	declare b int default 10;
SELECT a"Default value of a:",b"Default value of b:";
end;//
delimiter ;

2. Write a simple procedure to print ‘Hello World’
delimiter //
create procedure ProG() 
begin 
SELECT * FROM student;
end;//
delimiter ;


drop procedure if exists ProG2;
delimiter //
create procedure ProG2(in n int) 
begin 
declare i int;
declare a int;
	set i :=1;
	set a :=1;
	
	
		label:loop
			if i<=10 then
				set a:= i*n;
				select a ;
				set i :=i+1;
				iterate label;
			else
				leave label;
			end if;
		end loop label;
		
end;//
delimiter ;*/

drop procedure if exists ProG3;
delimiter //
create procedure ProG3(in a int,in b int, in c int) 
begin 
	if a >=b and a >=c then
		select a "Maximum ";
	else
		if b >=a and b>=c then
			select b "Maximum ";
		else 
			select c "Maximum ";
		end if;
	
	end if;
		
end;//
delimiter ;