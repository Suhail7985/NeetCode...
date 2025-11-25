<h2><a href="https://leetcode.com/problems/smallest-integer-divisible-by-k/description/">1015. Smallest Integer Divisible by K</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>
Given a positive integer <code>k</code>, find the length of the smallest positive integer <code>n</code> such that:
<ul>
  <li><code>n</code> is divisible by <code>k</code>, and</li>
  <li><code>n</code> contains only the digit <code>1</code> (in decimal).</li>
</ul>
Return the length of <code>n</code>. If there is no such <code>n</code>, return <code>-1</code>.
<br>
<b>Note:</b> <code>n</code> may not fit in a 64-bit signed integer.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> k = 1
<strong>Output:</strong> 1
<strong>Explanation:</strong> The smallest answer is n = 1, which has length 1.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> k = 2
<strong>Output:</strong> -1
<strong>Explanation:</strong> There is no such positive integer n divisible by 2.
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> k = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> The smallest answer is n = 111, which has length 3.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &lt;= k &lt;= 10^5</code></li>
</ul>
