<h2>
  <a href="https://leetcode.com/problems/same-tree/description/">
    100. Same Tree
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
Given the roots of two binary trees <code>p</code> and <code>q</code>, write a function
to check if they are the same or not.
</p>

<p>
Two binary trees are considered the same if:
</p>
<ul>
  <li>They are structurally identical.</li>
  <li>The nodes have the same values.</li>
</ul>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> p = [1,2,3], q = [1,2,3]
<strong>Output:</strong> true
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> p = [1,2], q = [1,null,2]
<strong>Output:</strong> false
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> p = [1,2,1], q = [1,1,2]
<strong>Output:</strong> false
</pre>

<h3>Constraints:</h3>
<ul>
  <li>The number of nodes in both trees is in the range <code>[0, 100]</code>.</li>
  <li><code>-10<sup>4</sup> &le; Node.val &le; 10<sup>4</sup></code></li>
</ul>