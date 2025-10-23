<h2><a href="https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/">
34. Find First and Last Position of Element in Sorted Array
</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>Given an array of integers <code>nums</code> sorted in non-decreasing order, 
find the starting and ending position of a given <code>target</code> value.</p>

<p>If <code>target</code> is not found in the array, return <code>[-1, -1]</code>.</p>

<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [5,7,7,8,8,10], target = 8
<strong>Output:</strong> [3,4]
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [5,7,7,8,8,10], target = 6
<strong>Output:</strong> [-1,-1]
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> nums = [], target = 0
<strong>Output:</strong> [-1,-1]
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>0 <= nums.length <= 10^5</code></li>
  <li><code>-10^9 <= nums[i] <= 10^9</code></li>
  <li><code>nums</code> is a non-decreasing array.</li>
  <li><code>-10^9 <= target <= 10^9</code></li>
</ul>
