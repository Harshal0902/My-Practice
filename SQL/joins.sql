-- Inner Join/Join
SELECT table1.column1, table2.column2 FROM table1 INNER JOIN table2 ON table1.common_field = table2.common_field;

-- Left Join/Left Outer Join
SELECT table1.column1, table2.column2 FROM table1 LEFT JOIN table2 ON table1.common_field = table2.common_field;

-- Right Join/Right Outer Join
SELECT table1.column1, table2.column2 FROM table1 RIGHT JOIN table2 ON table1.common_field = table2.common_field;

-- Full Join/Full Outer Join
SELECT table1.column1, table2.column2 FROM table1 FULL JOIN table2 ON table1.common_field = table2.common_field;

-- Cartesian Join
SELECT table1.column1, table1.column2, table2.column1 FROM table1 CROSS JOIN table2;

-- Self Join
SELECT a.coulmn1 , b.column2 FROM table_name a, table_name b WHERE some_condition;
