# Write your MySQL query statement below
Select E.name,B.bonus from Employee as E LEFT JOIN Bonus as B on E.empId=B.empId where bonus<1000 or bonus is NULL;