# Write your MySQL query statement below

# SELECT employee_id, salary * (name NOT LIKE 'M%') * (employee_id % 2 = 1) AS bonus
# FROM Employees
# ORDER BY employee_id;

SELECT e.employee_id,
  CASE WHEN e.employee_id % 2 <> 0 AND e.name NOT LIKE 'M%' THEN e.salary ELSE 0 END AS bonus 
FROM Employees AS e
ORDER BY e.employee_id;
