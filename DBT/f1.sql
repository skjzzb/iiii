/*drop procedure if exists pro1;
delimiter $

create procedure pro1()
begin
	declare x varchar(20) default "Hello ";
	declare y varchar(10);
	set y = 'Saleel';
	select concat(x,y) as "Message";
end $
delimiter ;


drop procedure if exists pro2;
delimiter $

create procedure pro2(in a int, in b int)
begin
	declare x int;
	set x = a + b;
	select concat("Addition is ", x);
end $
delimiter ;


drop procedure if exists pro3;
delimiter $

create procedure pro3(in a int, in b int, out x int)
begin
	set x = a + b;
	
end $
delimiter ;



drop procedure if exists pro4;
delimiter $

create procedure pro4(v_deptno int, v_dname varchar(20), v_loc varchar(20), v_pwd varchar(20))
begin
	
	insert into dept values(v_deptno, v_dname, v_loc, v_pwd);
end $
delimiter ;


drop procedure if exists pro5;
delimiter $

create procedure pro5(in x int)
begin
   select ename, deptno from emp where deptno = x;
	
end $
delimiter ;




drop procedure if exists pro6;
delimiter $

create procedure pro6(in x int, out msg varchar(20))
begin
   declare a1 int;
   select deptno into a1 from dept where deptno = x;
   
   if a1 is not null then
	call pro5(x);
   else
	set msg = "Record Not Found!";
   end if;
 	
end $
delimiter ;



drop procedure if exists pro7;
delimiter $

create procedure pro7(in jb varchar(20), out a varchar(20), out b int)
begin
 select job, sum(Sal) into a, b from emp where job = jb;
 	
end $
delimiter ;



drop procedure pl1;
delimiter $$
create procedure pl1()
begin
declare x int default 1;
	lbl:loop
		select x;
		set x = x+1;
		if x > 10 then
			leave lbl;
		end if;
	end loop lbl;
end $$
delimiter ;




drop function if exists fn1;
delimiter $$
create function fn1() returns varchar(20)
begin
	declare x varchar(20);
	declare y varchar(20);
	select "Hello", "World" into x, y;
	return (concat(x," ", y));
end $$

delimiter ;


drop function if exists fn1;
delimiter $$
create function fn1() returns int
begin
	declare x int default 0;
	select max(deptno) + 1 into x from dept;
	
	return (x);
end $$

delimiter ;




drop function if exists fn2;
delimiter $$
create function fn2(a int, b int) returns int
begin
	return (ifnull(a, 0) + ifnull(b, 0));
end $$

delimiter ;


drop function if exists  fn3;
delimiter $$
create function fn3() returns int
begin
declare x int default 1;
	lbl:loop
		set x = x+1;
		if x > 10 then
			leave lbl;
		end if;
		return (x);
	end loop lbl;
	
end $$
delimiter ;




drop procedure if exists pro1;
delimiter $

create procedure pro1(out x varchar(20))
begin
	select "hello" into x;
end $
delimiter ;


drop function if exists fn1;
delimiter $$
create function fn1() returns varchar(20)
begin
	declare x1 varchar(20);
	call pro1(x1);
	return (concat(x1, " Saleel"));
end $$

delimiter ;



drop trigger if exists tr1;
delimiter $$
create trigger tr1 after insert on dept for each row
begin
 select "Record Inserted... Done" into @x1;
end $$
delimiter ;


drop trigger if exists tr1;
delimiter $$
create trigger tr1 after insert on dept for each row
begin
  insert into d1 values(new.deptno, new.dname, new.loc, new.pwd);
 select "Record Transfered" into @x1;
end $$
delimiter ;


drop trigger if exists tr1;
delimiter $$
create trigger tr1 after insert on dept for each row
begin
  insert into d1 values(new.deptno, new.dname, new.loc, new.pwd, curdate(), curtime(), user());
 select "Record Transfered" into @x1;
end $$
delimiter ;


drop trigger if exists tr1;
delimiter $$
create trigger tr1 before insert on dept for each row
begin
	insert into dept values(1,1,1,1);
	update dept set loc='abc' where deptno=10;*
 select "Record Transfered" into @x1;
end $$
delimiter ;




drop trigger if exists tr1;
delimiter $$
create trigger tr1 before insert on dept for each row
begin
	set new.dname = ucase(new.dname);
end $$
delimiter ;


drop trigger if exists tr1;
delimiter $$
create trigger tr1 before insert on dept for each row
begin
	if new.pwd is null then
		set new.pwd = 'Invalid Password';
	end if;
end $$
delimiter ;





drop trigger if exists tr1;
delimiter $$
create trigger tr1 before insert on dept for each row
begin
	if new.loc  <> 'Pune'  then
		signal sqlstate '42000' set message_text ="Invalid City";
	end if;
end $$
delimiter ;

*/


drop trigger if exists tr1;
delimiter $$
create trigger tr1 before insert on dept for each row
begin
	if new.dname  not like 'A__%'  then
		signal sqlstate '42000' set message_text ="Invalid City";
	end if;
end $$
delimiter ;












