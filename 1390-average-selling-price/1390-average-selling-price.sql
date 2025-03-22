/* Write your T-SQL query statement */

SELECT 
    p.product_id,
    ISNULL(ROUND(SUM(p.price * u.units) * 1.0 / SUM(u.units), 2), 0) AS average_price
FROM Prices p
left JOIN UnitsSold u ON p.product_id = u.product_id and u.purchase_date BETWEEN p.start_date AND p.end_date

GROUP BY p.product_id;



