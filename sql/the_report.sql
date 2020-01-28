select if(GRADES.Grade < 8, concat('NULL'), STUDENTS.Name), GRADES.Grade, STUDENTS.Marks from STUDENTS inner join GRADES on Students.Marks between Grades.Min_Mark and Grades.Max_Mark order by GRADES.Grade desc, Students.Name; 




