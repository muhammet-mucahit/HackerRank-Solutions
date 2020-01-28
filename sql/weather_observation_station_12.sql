select distinct city from station where city regexp '[^aeoui]$' and city regexp '^[^aeoui]';

