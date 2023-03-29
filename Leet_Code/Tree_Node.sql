# Write your MySQL query statement below

# For root
SELECT id, "Root" AS type
FROM Tree
WHERE p_id IS NULL

UNION

# For Leaf
SELECT t1.id, "Leaf" AS type
FROM Tree t1
WHERE NOT EXISTS(
  SELECT t2.id
  FROM Tree t2
  WHERE t1.id = t2.p_id
) AND t1.p_id IS NOT NULL

UNION

# For Inner
SELECT t1.id, "Inner" AS type
FROM Tree t1
WHERE t1.id IN (
  SELECT DISTINCT t2.p_id
  FROM Tree t2
  WHERE t2.p_id IS NOT NULL
) AND t1.p_id IS NOT NULL;
