-- 코드를 입력하세요
SELECT MCDP_CD AS 진료과코드, COUNT(APNT_YMD) AS 5월예약건수
FROM APPOINTMENT
WHERE APNT_YMD LIKE '2022-05%'
GROUP BY 1
ORDER BY 2,1;
