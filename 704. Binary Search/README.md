<h2><a href="https://leetcode.com/problems/binary-search/description/">704. Binary Search</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>Given an array of integers <code>nums</code> which is sorted in ascending order, and an integer <code>target</code>, write a function to search <code>target</code> in <code>nums</code>. If <code>target</code> exists, then return its index. Otherwise, return <code>-1</code>.</p>
<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [-1,0,3,5,9,12], target = 9
<strong>Output:</strong> 4
<strong>Explanation:</strong> 9 exists in nums and its index is 4.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [-1,0,3,5,9,12], target = 2
<strong>Output:</strong> -1
<strong>Explanation:</strong> 2 does not exist in nums so return -1.
</pre>

<h3>Constraints:</h3>
<ul>
  <li>1 &lt;= nums.length &lt;= 10<sup>4</sup></li>
  <li>-10<sup>4</sup> &lt; nums[i], target &lt; 10<sup>4</sup></li>
  <li>All the integers in <code>nums</code> are unique.</li>
  <li><code>nums</code> is sorted in ascending order.</li>
</ul>
