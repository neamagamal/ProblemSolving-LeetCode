/* Write your T-SQL query statement below */
select e.name
 from employee e join employee m on
e.id =m.managerId group by
e.id,e.name  having 
count ( m.managerId) >= 5


  


