<h2>
  <a href="https://leetcode.com/problems/binary-tree-maximum-path-sum/description/">
    124. Binary Tree Maximum Path Sum
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Hard-red" alt="Difficulty: Hard" />
<hr>

<h3>Description</h3>
<p>
A <strong>path</strong> in a binary tree is a sequence of nodes where each pair of adjacent
nodes in the sequence has an edge connecting them.
A node can appear in the sequence at most once.
</p>

<p>
Note that the path does not need to pass through the root.
</p>

<p>
The <strong>path sum</strong> is the sum of the node values along the path.
</p>

<p>
Given the <code>root</code> of a binary tree, return the <strong>maximum path sum</strong>
of any non-empty path.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> root = [1,2,3]
<strong>Output:</strong> 6
<strong>Explanation:</strong>
The optimal path is 2 -> 1 -> 3 with sum = 6.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> root = [-10,9,20,null,null,15,7]
<strong>Output:</strong> 42
<strong>Explanation:</strong>
The optimal path is 15 -> 20 -> 7 with sum = 42.
</pre>

<h3>Constraints:</h3>
<ul>
  <li>The number of nodes in the tree is in the range <code>[1, 3 * 10<sup>4</sup>]</code>.</li>
  <li><code>-1000 &le; Node.val &le; 1000</code></li>
</ul>