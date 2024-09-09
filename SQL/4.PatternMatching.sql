--1. Starting with name M
-- This means start with M rest can be anything 
SELECT ename FROM emp WHERE ename LIKE 'M%';

-- 2.Display the emp names whoes name end with N
-- Small and capital letters are treated as different 
SELECT ename FROM emp WHERE ename LIKE '%N';

-- 3.Display the name of the employs who has M in name at any position 
SELECT ename FROM emp WHERE ename LIKE '%M%';

-- 4.Display the name of the employs who not has M in name at any position 
SELECT ename FROM emp WHERE ename NOT LIKE '%M%';