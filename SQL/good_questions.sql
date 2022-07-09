-- 1. Select regnum and the related total marks in all subjects from the table examscore where the total marks is more tham 170.
SELECT regnum, SUM(marks) AS total FROM examscore GROUP BY regnum HAVING total > 170;

-- 2. To increment the mark2 by 20 for the first tow rous which the studentid as 103.
UPDATE student SET mark2 = mark2 + 20 WHERE studentid = 103 LIMIT 2;

-- 3. Delete the rows which contain countrycode as 60 or 61 in the table country.
DELETE FROM country WHERE countrycode IN(60, 31);

-- 4. To delete the row from the table library where bookname is 'Forget Your Future'and authorname is not 'Abdul Kalam'.
DELETE FROM library WHERE bookname = 'Forget Your Future' AND authorname <> 'Abdul Kalam';