-- Union combine two columns of different table and remove duplicate values
-- number of column and its data should be same in both queries 
SELECT city FROM sample1
UNION
SELECT city FROM sample2

-- UNION ALL 
-- It also smobine duplicate values 
SELECT country,city FROM sample1
UNION ALL 
SELECT country,city FROM sample2