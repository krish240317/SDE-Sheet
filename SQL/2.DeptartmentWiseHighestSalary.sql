
-- While using group by you can not use any other column in the select statement 
SELECT max(sal),deptno FROM emp GROUP BY deptno

-- sub Q  find number of emp in each dept count(*) means return no of rows in table 
SELECT count(*),deptno FROM emp GROUP BY deptno 