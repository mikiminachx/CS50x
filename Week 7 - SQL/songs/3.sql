--In 3.sql, write a SQL query to list the names of the top 5 longest songs, in descending order of length.
--Your query should output a table with a single column for the name of each song.
select name from songs
order by duration_ms DESC
limit 5;