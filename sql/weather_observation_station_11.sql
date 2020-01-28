select distinct city from station where city regexp '[^aeoui]$' or city regexp '^[^aeoui]';

