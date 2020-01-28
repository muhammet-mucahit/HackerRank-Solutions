select COUNTRY.Continent, floor(avg(CITY.Population)) from COUNTRY inner join CITY where CITY.CountryCode = COUNTRY.Code group by COUNTRY.Continent;

