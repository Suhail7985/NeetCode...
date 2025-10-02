<h2><a href="https://leetcode.com/problems/water-bottles-ii/description/">3100. Water Bottles II</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-yellow" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>You are given two integers <code>numBottles</code> and <code>numExchange</code>.</p>
<p><code>numBottles</code> represents the number of full water bottles that you initially have. In one operation, you can perform one of the following operations:</p>
<ul>
  <li>Drink any number of full water bottles turning them into empty bottles.</li>
  <li>Exchange <code>numExchange</code> empty bottles with one full water bottle. Then, increase <code>numExchange</code> by one.</li>
</ul>
<p><strong>Note:</strong> You cannot exchange multiple batches of empty bottles for the same value of <code>numExchange</code>.  
For example, if <code>numBottles == 3</code> and <code>numExchange == 1</code>, you cannot exchange 3 empty water bottles for 3 full bottles.</p>
<p>Return the maximum number of water bottles you can drink.</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> numBottles = 13, numExchange = 6
<strong>Output:</strong> 15
<strong>Explanation:</strong> The table above shows the number of full water bottles, empty water bottles, 
the value of numExchange, and the number of bottles drunk.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> numBottles = 10, numExchange = 3
<strong>Output:</strong> 13
<strong>Explanation:</strong> The table above shows the number of full water bottles, empty water bottles, 
the value of numExchange, and the number of bottles drunk.
</pre>

<h3>Constraints:</h3>
<ul>
  <li>1 &lt;= numBottles &lt;= 100</li>
  <li>1 &lt;= numExchange &lt;= 100</li>
</ul>
