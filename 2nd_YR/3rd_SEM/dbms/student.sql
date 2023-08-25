create table student2(
	sid int(10) primary key,
	first_name varchar(50),
	last_name varchar(50),
	birthdate date,
	address varchar(50)
	);
insert into student values (1,"m","n",'22-10-1987',"india"),(2,"a","b",'21-10-1987',"india");
select * from student;