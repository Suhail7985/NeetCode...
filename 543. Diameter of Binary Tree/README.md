<h2>
  <a href="https://leetcode.com/problems/diameter-of-binary-tree/description/">
    543. Diameter of Binary Tree
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
Given the <code>root</code> of a binary tree, return the length of the <strong>diameter</strong> of the tree.
</p>

<p>
The diameter of a binary tree is the length of the longest path between any two nodes in the tree.
This path may or may not pass through the root.
</p>

<p>
The length of a path between two nodes is represented by the number of edges between them.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> root = [1,2,3,4,5]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
The longest path is [4,2,1,3] or [5,2,1,3], which has length 3.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> root = [1,2]
<strong>Output:</strong> 1
</pre>

<h3>Constraints:</h3>
<ul>
  <li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
  <li><code>-100 &le; Node.val &le; 100</code></li>
</ul>