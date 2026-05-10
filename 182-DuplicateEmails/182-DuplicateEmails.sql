-- Last updated: 5/10/2026, 11:52:47 PM
SELECT email from Person group by email having count(*) >= 2;