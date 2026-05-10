-- Last updated: 5/10/2026, 11:48:09 PM
-- Write your PostgreSQL query statement below
select author_id as id from views 
where author_id=viewer_id
group by author_id , viewer_id
-- order by author_id