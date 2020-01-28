select round(S.LAT_N, 4) MEDIAN from STATION S where (select count(LAT_N) from STATION where LAT_N < S.LAT_N) = (select count(LAT_N) from STATION where LAT_N > S.LAT_N)

