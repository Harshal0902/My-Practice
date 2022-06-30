-- Ucase
SELECT UCASE(column_name) FROM table_name;

-- Lcase
SELECT LCASE(column_name) FROM table_name;

-- Mid
SELECT MID(column_name,start,length) FROM table_name;

-- Len
SELECT LENGTH(column_name) FROM table_name;

-- Round
SELECT ROUND(column_name,decimals) FROM table_name;

-- Now
SELECT NOW() FROM table_name;

-- Format
SELECT FORMAT(column_name,format) FROM table_name; 
-- format for date can be: YYYY-MM-DD