# Write your MySQL query statement below
SELECT
    p.product_name,
    s.year,
    s.price
FROM Product p, Sales s
WHERE
    s.product_id = p.product_id;