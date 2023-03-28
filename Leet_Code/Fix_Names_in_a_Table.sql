# Write your MySQL query statement below


# This is the update statement
# UPDATE Users
# SET name=UPPER(LEFT(name, 1))+LOWER(SUBSTRING(name, 2, LENGTH(name)));

SELECT user_id, CONCAT(UPPER(LEFT(name, 1)), LOWER(SUBSTRING(name, 2, LENGTH(name)))) AS name
FROM Users
ORDER BY user_id;
