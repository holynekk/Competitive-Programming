# Write your MySQL query statement below

# NOT IN solution
# SELECT employee_id FROM Employees WHERE employee_id NOT IN (SELECT employee_id FROM Salaries)
# UNION
# SELECT employee_id FROM Salaries WHERE employee_id NOT IN (SELECT employee_id FROM Employees)
# ORDER BY 1;

SELECT e.employee_id
FROM Employees e
LEFT JOIN Salaries s ON e.employee_id = s.employee_id
WHERE s.salary IS NULL

UNION
SELECT s.employee_id
FROM Employees e
RIGHT JOIN Salaries s ON e.employee_id = s.employee_id
WHERE e.name IS NULL

ORDER BY 1;

