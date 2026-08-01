# Write your MySQL query statement below
SELECT c.name as Customers FROM Customers as c
left join Orders as o
on o.customerId = c.id
where o.customerId IS NULL;