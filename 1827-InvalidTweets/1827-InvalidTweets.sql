-- Last updated: 5/10/2026, 11:46:44 PM
-- Write your PostgreSQL query statement below
SELECT tweet_id FROM Tweets
WHERE LENGTH(content) > 15;