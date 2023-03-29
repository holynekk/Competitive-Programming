# Write your MySQL query statement below

SELECT p.product_id, p.product_name
FROM Product p, Sales s
WHERE p.product_id = s.product_id
GROUP BY s.product_id
HAVING MIN(sale_date) >= CAST('2019-01-01' AS DATE) AND
       MAX(sale_date) <= CAST('2019-03-31' AS DATE);
