-- Views
-- Create a View
CREATE VIEW view_name AS SELECT column1, column2, column3 FROM table_name;

-- Create a View with multiple tables
CREATE VIEW view_name AS SELECT column1, column2, column3 FROM table_name1, table_name2;

-- Create a View with selected columns
CREATE OR REPLACE VIEW view_name AS SELECT column1, column2, column3 FROM table_name;

-- Drop a View
DROP VIEW view_name;

-- Updating a View
UPDATE view_name SET column1 = value1, column2 = value2, column3 = value3;

-- Inserting into a View
INSERT INTO view_name VALUES(value1, value2, value3);

-- Deleting from a View
DELETE FROM view_name WHERE condition;

-- Create a View with WITH CHECK OPTION = prevents a view from updating or inserting rows that are not visible through it. Check if codition is true.
CREATE OR REPLACE VIEW view_name AS SELECT column1, column2, column3 FROM  table_name WHERE condition WITH CHECK OPTION;
-- condition => column1 IS NOT NULL