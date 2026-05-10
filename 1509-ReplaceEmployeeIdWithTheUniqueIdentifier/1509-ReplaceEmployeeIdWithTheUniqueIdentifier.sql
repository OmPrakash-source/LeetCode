-- Last updated: 5/10/2026, 11:47:37 PM

SELECT unique_id, name
FROM EmployeeUNI RIGHT JOIN Employees ON EmployeeUNI.id = Employees.id;