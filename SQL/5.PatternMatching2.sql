-- 1.Display name of employ who has exactly 4 letters in name
SELECT ename  FROM emp WHERE ename LIKE '____';

-- 2. Display the names of employees whose name contains 
-- the (i)second Letter as 'L '(ii)fourth Letter as 'M'
SELECT ename FROM emp WHERE ename LIKE '_L_M%';

-- 3.DispLay the employee names and hire dates for the employees joined in the month of December
SELECT hdate,ename FROM emp WHERE hdate LIKE 'DEC';

--4
SELECT ename FROM EMP WHERE ename like '%LL%';