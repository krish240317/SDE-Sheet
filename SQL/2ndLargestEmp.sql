-- finding maximun first then execuliding it and finding max again 
SELECT max(sal) FROM emp WHERE sal NOT IN (SELECT max(sal) FROM emp);
-- or 
SELECT max(sal) FROM emp WHERE sal <(SELECT max(sal) FROM emp);