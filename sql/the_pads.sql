SELECT name || '(' || SUBSTR(occupation, 0, 1) || ')' FROM Occupations order by name asc;

SELECT 'There are a total of ' || count(*) || ' ' || LOWER(occupation) || 's.' FROM Occupations group by occupation order by count(*) asc, occupation asc;

