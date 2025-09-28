-- select EmployeeUNI.unique_id, Employees.name
-- from EmployeeUNI
-- left join Employees
-- on EmployeeUNI.id = Employees.id

SELECT euni.unique_id, e.name
FROM Employees e
LEFT JOIN EmployeeUNI euni
ON e.id = euni.id;
