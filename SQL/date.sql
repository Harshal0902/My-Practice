-- Now
SELECT NOW();

-- Curdate
SELECT CURDATE();

-- Curtime
SELECT CURTIME();

-- Date
SELECT DATE(column_name);

-- Extract
SELECT EXTRACT(field FROM column_name);
-- field: Day, Year, Month, Hour, Minute, Second, Week, WeekDay

-- Dateadd
SELECT DATEADD(date, INTERVAL expr type) FROM table_name;
-- expr: number of days, number of months, number of years, number of hours, number of minutes, number of seconds
-- type: DAY, MONTH, YEAR, HOUR, MINUTE, SECOND

-- Datediss
SELECT DATEDIFF(date1, date2) FROM table_name;

-- Dateformat
SELECT DATE_FORMAT(column_name,format) FROM table_name;

-- Dayname
SELECT DAYNAME(date);