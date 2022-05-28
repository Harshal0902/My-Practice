-- Data Defination Language
-- Alter, Create, Delete

-- Alter Table: ADD
ALTER TABLE table_name ADD column_name datatype;

-- Alter Table: MODIFY
ALTER TABLE table_name MODIFY (column_name1 datatype, column_name2 datatype);

-- Alter Table: DROP
ALTER TABLE table_name DROP column_name;

-- ALter Table: RENAME
ALTER TABLE table_name RENAME TO new_table_name;
ALTER TABLE table_name RENAME column_name TO new_column_name;