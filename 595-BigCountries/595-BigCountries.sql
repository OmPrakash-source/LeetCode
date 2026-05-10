-- Last updated: 5/10/2026, 11:50:34 PM
-- Write your PostgreSQL query statement below
SELECT name , population , area FROM World 
WHERE population >= 25000000 OR area >= 3000000;