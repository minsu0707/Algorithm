  SELECT DATE_Format(SALES_DATE, '%Y-%m-%d') as SALES_DATE,
           PRODUCT_ID, -- 제품 ID
           USER_ID,  -- 회원 ID
           SALES_AMOUNT -- 판매량
        from ONLINE_SALE -- 온라인 고객
        where Month(SALES_DATE) = 3
union
    SELECT DATE_Format(SALES_DATE, '%Y-%m-%d') as SALES_DATE,
           PRODUCT_ID, 
           Null as USER_ID,
           SALES_AMOUNT
        from OFFLINE_SALE
        where Month(SALES_DATE) = 3
order by SALES_DATE, PRODUCT_ID, USER_ID