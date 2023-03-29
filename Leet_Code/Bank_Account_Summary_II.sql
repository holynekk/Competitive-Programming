# Write your MySQL query statement below

SELECT u.name AS NAME, SUM(amount) AS BALANCE
FROM Transactions t, Users u
WHERE t.account = u.account
GROUP BY u.account
HAVING BALANCE > 10000;
