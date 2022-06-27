-- Distinct
SELECT DISTINCT column1, column2, column3 FROM table_name;

-- Select Top
SELECT TOP value column1,column2 FROM table_name;
SELECT TOP value PERCENT column1,column2 FROM table_name;

-- Between  operator
SELECT column1,column2 FROM table_name WHERE column_name BETWEEN value1 AND value2;

-- In operator
SELECT column1,column2 FROM table_name WHERE column_name IN (value1,value2,..);
