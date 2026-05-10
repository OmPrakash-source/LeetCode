-- Last updated: 5/10/2026, 11:52:55 PM
# Write your MySQL query statement below
SELECT (
    SELECT salary
    FROM employee
    group by salary
    ORDER BY salary DESC
    LIMIT 1 OFFSET 1
) AS secondHighestSalary;
