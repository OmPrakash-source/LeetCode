-- Last updated: 5/10/2026, 11:52:48 PM
-- Write your PostgreSQL query statement below
SELECT a.name AS Employee 
FROM Employee AS a
JOIN Employee AS b
ON a.managerId = b.id 
WHERE a.salary > b.salary;