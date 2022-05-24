-- Create a database
CREATE DATABASE DatabaseName;

-- Drop a database
DROP DATABASE DatabaseName;

-- Use a database
USE DatabaseName;

-- Create a Table
CREATE TABLE table_name(column1 datatype, column2 datatype, column3 datatype, PRIMARY KEY(one or more columns) );
CREATE TABLE Student(id_no NUMBER, name VARCHAR2(20), age NUMBER, PRIMARY KEY(id_no));

-- Drop a table
DROP TABLE table_name;
DROP TABLE Student;

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

-- Where clause
SELECT column1, column2, column3 FROM table_name WHERE condition;
