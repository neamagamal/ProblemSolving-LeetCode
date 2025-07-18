/* Write your T-SQL query statement below */

select p.project_id,
    round(avg(cast(experience_years as decimal )),2)
as average_years 
from Project p 
inner join employee e on e.employee_id = p.employee_id 
group by project_id;