select (salary * months) as earnings ,count(*) from employee group by 1 order by earnings desc limit 1;

