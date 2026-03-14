<h2>
  <a href="https://leetcode.com/problems/binary-tree-preorder-traversal/description/">
    144. Binary Tree Preorder Traversal
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
Given the <code>root</code> of a binary tree, return the <strong>preorder traversal</strong>
of its nodes' values.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> root = [1,null,2,3]
<strong>Output:</strong> [1,2,3]
<strong>Explanation:</strong>
The preorder traversal visits nodes in the order: root → left → right.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> root = [1,2,3,4,5,null,8,null,null,6,7,9]
<strong>Output:</strong> [1,2,4,5,6,7,3,8,9]
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> root = []
<strong>Output:</strong> []
</pre>

<h3>Example 4:</h3>
<pre>
<strong>Input:</strong> root = [1]
<strong>Output:</strong> [1]
</pre>

<h3>Constraints:</h3>
<ul>
  <li>The number of nodes in the tree is in the range <code>[0, 100]</code>.</li>
  <li><code>-100 ≤ Node.val ≤ 100</code></li>
</ul>

<h3>Follow up:</h3>
<p>
Recursive solution is trivial. Could you implement it <strong>iteratively</strong>?
</p>