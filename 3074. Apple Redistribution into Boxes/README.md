<h2>
  <a href="https://leetcode.com/problems/apple-redistribution-into-boxes/description/">
    3074. Apple Redistribution into Boxes
  </a>
</h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
You are given an array <code>apple</code> of size <code>n</code> and an array <code>capacity</code> of size <code>m</code>.
</p>

<p>
There are <code>n</code> packs where the <code>i<sup>th</sup></code> pack contains <code>apple[i]</code> apples.
There are also <code>m</code> boxes, and the <code>i<sup>th</sup></code> box has a capacity of <code>capacity[i]</code> apples.
</p>

<p>
Return the <strong>minimum number of boxes</strong> you need to select to redistribute these <code>n</code> packs of apples into boxes.
</p>

<p>
<b>Note:</b> Apples from the same pack can be distributed into different boxes.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> apple = [1,3,2], capacity = [4,3,1,5,2]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
We will use boxes with capacities 4 and 5.
The total capacity is greater than or equal to the total number of apples.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> apple = [5,5,5], capacity = [2,4,2,7]
<strong>Output:</strong> 4
<strong>Explanation:</strong>
We will need to use all the boxes.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &lt;= n == apple.length &lt;= 50</code></li>
  <li><code>1 &lt;= m == capacity.length &lt;= 50</code></li>
  <li><code>1 &lt;= apple[i], capacity[i] &lt;= 50</code></li>
  <li>The input is generated such that it's possible to redistribute packs of apples into boxes.</li>
</ul>
