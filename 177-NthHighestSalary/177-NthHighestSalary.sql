-- Last updated: 5/10/2026, 11:52:54 PM
CREATE OR REPLACE FUNCTION NthHighestSalary(N INT)
RETURNS TABLE (Salary INT)
LANGUAGE plpgsql
AS $$
BEGIN
  IF N < 1 THEN
    RETURN;
  END IF;

  RETURN QUERY(
    SELECT DISTINCT e.salary
    FROM Employee e
    ORDER BY e.salary DESC
    LIMIT 1 OFFSET N - 1
  );
END;
$$;
