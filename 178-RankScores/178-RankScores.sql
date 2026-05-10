-- Last updated: 5/10/2026, 11:52:53 PM
-- Write your PostgreSQL query statement below
-- Write your PostgreSQL query statement below
SELECT s1.score , COUNT(DISTINCT s2.score) AS rank FROM Scores AS s1
JOIN Scores AS s2
ON s1.score <= s2.score
GROUP BY s1.id, s1.score
ORDER BY COUNT(DISTINCT s2.score)