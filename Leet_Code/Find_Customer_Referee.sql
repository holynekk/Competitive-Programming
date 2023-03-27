# Write your MySQL query statement below

SELECT name
FROM Customer AS c
WHERE c.referee_id IS NULL OR c.referee_id != 2;
