-- Based on equality condition data  is combine from multiple tables
-- there should be a common column in both tables with the same data type 

-- IMP-- It only returns the rows where there is a match in both the left and right tables. 
SELECT ename,sal,dept.deptno,dname,loc FROM emp AS e JOIN dept AS d ON (e.deptno=d.deptno); 

-- 2.Display employees who are working in Location Chicago from emp and dept. table
-- here comma (,) means cross product of 2 tables 
SELECT ename,loc FROM emp AS e,dept as d WHERE e.deptno=d.deptno AND loc='Chicago';
SELECT ename, loc FROM emp AS e JOIN dept AS d ON e.deptno = d.deptno WHERE loc = 'Chicago';

-- 3.Display dept name and total salery from each dept
SELECT dname,sal FROM emp AS e JOIN dept as d WHERE  e.deptno=d.deptno GROUP BY dname;
