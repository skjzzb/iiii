/*

1. Write a basic PL/SQL programme to create two variables and store some default value 
and print them.
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
	SELECT "Hello World";
end;//
delimiter ;

3. Write a simple procedure to print a table of a given number?
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
delimiter ;

4. Write a procedure to print the maximum number of 3 inputted numbers.
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

drop procedure if exists Proc;
delimiter //
create procedure Proc() 
begin 
	declare username varchar (20);
	declare password varchar (20);
	declare email varchar (20);
		create table LOGIN (username varchar(20),password varchar(20),email varchar(20));
			
end;//
delimiter ;

drop procedure if exists ProcI;
delimiter //
create procedure ProcI(in username varchar(20),in password varchar(20),in email varchar(20)) 
begin 
	
		
		insert into LOGIN values(username,password,email);
			
end;//
delimiter ;


drop procedure if exists LOG_G ;
delimiter //
create procedure LOG_G() 
begin 
	
		
		create table LOG_G (id int AUTO_INCREMENT , curr_date date , curr_time time , message varchar(20),primary key (id));
			
end;//
delimiter ;


drop procedure if exists checkUser;
delimiter //
create procedure checkUser(em varchar(20)) 
begin 
	declare x date;
	declare y time;
	declare message varchar(20) default "Not available";
	declare e varchar(20);
	set e := em;
	set x := current_date();
	set y := current_time();
		
		if e in (select LOGIN.email from LOGIN) then
			select username,password from LOGIN where email=e;
		else 
			insert into LOG_G values(default,x,y, message);
		end if;
			
end;//
delimiter ;
/*

drop procedure if exists getQualification;
delimiter //
create procedure getQualification(id int) 
begin 
	
	declare message varchar(20) default "Student not found";
	declare sid int;
	set sid := id;
		
		if sid in (select s.ID from student s,student_qualification sq where s.id=sq.studentID) then
			select s.*,sq.* from student s,student_qualification sq where s.id=sq.studentID and s.ID=sid;
		else 
			select message;
		end if;
			
end;//
delimiter ;

drop procedure if exists addStudent;
delimiter //
create procedure addStudent(id int,namefirst varchar(45),namelast varchar(45),DOB date,emailID varchar(128),studentidp int,numb varchar(45),aid int,id int,address varchar (128)) 
begin 
	
	
	declare message varchar(100) default "Student details entered successfully. ";
	select message;
	insert into student values (id,namefirst,namelast,DOB,emailID);
	insert into student_phone values(pid,id,numb);
	insert into student_address values(aid,id,address);
	
		
			
end;//
delimiter ;


drop procedure if exists addQualification;
delimiter //
create procedure addQualification(sqid int,id int,degree varchar(128),clg varchar(128),
				uni varchar(128),mark varchar(45),yr int, out x varchar(100)) 
begin 
	
	declare sid int;
	set sid := id;
		
		if (select s.ID from student s where s.ID=sid ) then
			insert into student_qualification values(sqid,id,degree,clg,uni,mark,yr);
			set x = "Record inserted";
		else  
			set x = "Student not found";
		end if;
			
end;//
delimiter ;

drop function if exists sumSalary;
delimiter //
create function sumSalary(id int) returns int
begin 
	declare x int;
	
	
		select (((DATEDIFF(current_date(),hiredate)/365)*12)*sal)
				 into x  from emp where empno= id ;
				return (x);

			
end;//
delimiter ;


drop function if exists autoNumber;
delimiter //
create function autoNumber() returns int
begin 
	declare x int;
	declare y int;
	  select max(studentID) into y from student_new;
	
		if y is null then
			 
			set y:=1;
			return (y);
		else
			select max(studentID) + 1  into x from student_new;
			 
			 return (x);
		end if;
		
end;//
delimiter ;
/*
1. Write a trigger (named insertDepartment) that saves the message 
"Record inserted successfully" in LOG table as soon as you insert the record in DEPT table.


drop trigger  if exists insertDepartment;
delimiter //
create trigger insertDepartment after insert on dept for each row
begin 
	
	
		insert into log_g values(default,current_date(),current_time(),"Record inserted successfully");
		
end;//
delimiter ;

2. Write a trigger (named insertDuplicate) on EMP table, 
that as when we INSERT a record in EMPLOYEE table the same record should 
get duplicated (INSERTED) in EMP_LOG table.
(Create EMP_LOG table, having the same structure as EMP table).

drop trigger  if exists deleteDuplicate;
delimiter //
create trigger deleteDuplicate after delete on emp for each row
begin 
		insert into emp_log values(old.empno,old.ename,old.job,old.mgr,
								old.hiredate,old.sal,old.comm,old.deptno,
								old.bonusid,old.uname,old.pwd);	
end;//
delimiter ;
*/

drop trigger if exists tr1;
delimiter $$
create trigger tr1 before insert on emp for each row
begin
	declare x varchar(100);
	set x:= dayname(now());
	if x = 'Sunday'  then
		signal sqlstate '42000' set message_text ="Today is sunday";
	end if;
end $$
delimiter ;