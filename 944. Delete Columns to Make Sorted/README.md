<h2>
  <a href="https://leetcode.com/problems/delete-columns-to-make-sorted/description/">
    944. Delete Columns to Make Sorted
  </a>
</h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
You are given an array of <code>n</code> strings <code>strs</code>, all of the same length.
The strings can be arranged such that there is one string per line, forming a grid.
</p>

<p>
For example, <code>strs = ["abc","bce","cae"]</code> can be arranged as:
</p>

<pre>
abc
bce
cae
</pre>

<p>
You want to delete the columns that are <strong>not sorted lexicographically</strong>.
In the example above (0-indexed):
</p>

<ul>
  <li>Column 0: ('a','b','c') → sorted</li>
  <li>Column 1: ('b','c','a') → not sorted</li>
  <li>Column 2: ('c','e','e') → sorted</li>
</ul>

<p>
So, you would delete column <code>1</code>.
Return the <strong>number of columns</strong> that you will delete.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> strs = ["cba","daf","ghi"]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
The grid looks like:
cba
daf
ghi
Columns 0 and 2 are sorted, but column 1 is not.
So, you need to delete 1 column.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> strs = ["a","b"]
<strong>Output:</strong> 0
<strong>Explanation:</strong>
The grid looks like:
a
b
Column 0 is sorted, so no columns are deleted.
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> strs = ["zyx","wvu","tsr"]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
The grid looks like:
zyx
wvu
tsr
All columns are not sorted, so all 3 columns are deleted.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>n == strs.length</code></li>
  <li><code>1 <= n <= 100</code></li>
  <li><code>1 <= strs[i].length <= 1000</code></li>
  <li><code>strs[i]</code> consists of lowercase English letters.</li>
</ul>
