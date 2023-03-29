# Write your MySQL query statement below

SELECT user_id, MAX(time_stamp) AS last_stamp
FROM Logins
WHERE YEAR(time_stamp) < 2021 AND YEAR(time_stamp) > 2019
GROUP BY user_id;
