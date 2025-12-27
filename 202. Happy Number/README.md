<h2>
  <a href="https://leetcode.com/problems/happy-number/description/">
    202. Happy Number
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />

<hr>

<h3>Description</h3>
<p>
Write an algorithm to determine if a number <code>n</code> is happy.
</p>

<p>
A <strong>happy number</strong> is defined by the following process:
</p>
<ul>
  <li>Starting with any positive integer, replace the number by the sum of the squares of its digits.</li>
  <li>Repeat the process until the number equals <code>1</code> (where it will stay), or it loops endlessly in a cycle which does not include <code>1</code>.</li>
</ul>

<p>
Those numbers for which this process ends in <code>1</code> are happy.
</p>

<p>
Return <code>true</code> if <code>n</code> is a happy number, and <code>false</code> if not.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> n = 19
<strong>Output:</strong> true
<strong>Explanation:</strong>
1² + 9² = 82
8² + 2² = 68
6² + 8² = 100
1² + 0² + 0² = 1
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> n = 2
<strong>Output:</strong> false
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
