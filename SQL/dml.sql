-- Data Manipulation Language
-- Insert, Update, Delete, Select

-- Insert Values into a table
INSERT INTO table_name VALUES(value1, value2, value3);
INSERT INTO Student VALUES(1, 'John', 20);

-- Update Values in a table
UPDATE table_name SET column1 = value1, column2 = value2, column3 = value3 WHERE condition;
UPDATE Student SET age = 21 WHERE id_no = 1;

-- Delete a row from a table
DELETE FROM table_name WHERE condition;
DELETE FROM Student WHERE id_no = 1;

-- Select
SELECT column1, column2, column3 FROM table_name WHERE condition;
SELECT * FROM Student WHERE age > 20;
