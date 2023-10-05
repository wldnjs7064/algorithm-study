-- 코드를 입력하세요
SELECT A.PRODUCT_ID,A.PRODUCT_NAME, SUM(A.PRICE*B.AMOUNT) AS TOTAL_SALES
FROM FOOD_PRODUCT A
JOIN FOOD_ORDER B ON A.PRODUCT_ID = B.PRODUCT_ID
WHERE DATE_FORMAT(B.PRODUCE_DATE,'%Y-%m') LIKE '2022-05'
GROUP BY A.PRODUCT_NAME
ORDER BY 3 DESC, 1;