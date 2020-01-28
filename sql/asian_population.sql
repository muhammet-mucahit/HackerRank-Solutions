select sum(CITY.Population) from CITY inner join COUNTRY where CITY.CountryCode = COUNTRY.Code and COUNTRY.Continent = 'Asia';

