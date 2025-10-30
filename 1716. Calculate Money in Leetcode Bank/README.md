<h2>
  <a href="https://leetcode.com/problems/calculate-money-in-leetcode-bank/description/">
    1716. Calculate Money in Leetcode Bank
  </a>
</h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
Hercy wants to save money for his first car. He puts money in the Leetcode bank every day.<br><br>
He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before.<br>
On every subsequent Monday, he will put in $1 more than the previous Monday.<br><br>
Given <code>n</code>, return the total amount of money he will have in the Leetcode bank at the end of the <code>n<sup>th</sup></code> day.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> 10
<strong>Explanation:</strong> After the 4th day, the total is 1 + 2 + 3 + 4 = 10.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> n = 10
<strong>Output:</strong> 37
<strong>Explanation:</strong> After the 10th day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4) = 37.
Notice that on the 2nd Monday, Hercy only puts in $2.
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> n = 20
<strong>Output:</strong> 96
<strong>Explanation:</strong> After the 20th day, the total is
(1 + 2 + 3 + 4 + 5 + 6 + 7) +
(2 + 3 + 4 + 5 + 6 + 7 + 8) +
(3 + 4 + 5 + 6 + 7 + 8) = 96.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 <= n <= 1000</code></li>
</ul>
