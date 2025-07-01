# Write your MySQL query statement below
select tweet_id as tweet_id
from Tweets
where CHAR_LENGTH(content)>15;