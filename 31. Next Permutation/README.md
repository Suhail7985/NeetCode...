<h2>
  <a href="https://leetcode.com/problems/next-permutation/description/">
    31. Next Permutation
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
</p>

<p>
For example, for <code>arr = [1,2,3]</code>, the permutations are:
<code>[1,2,3]</code>, <code>[1,3,2]</code>, <code>[2,1,3]</code>, <code>[2,3,1]</code>, <code>[3,1,2]</code>, <code>[3,2,1]</code>.
</p>

<p>
The <strong>next permutation</strong> of an array is the next lexicographically greater permutation.
If no such permutation exists, rearrange the array into the lowest possible order
(i.e., sorted in ascending order).
</p>

<p>
Given an array of integers <code>nums</code>, find the next permutation.
The replacement must be done <strong>in-place</strong> and use only <strong>constant extra memory</strong>.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> [1,3,2]
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [3,2,1]
<strong>Output:</strong> [1,2,3]
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> nums = [1,1,5]
<strong>Output:</strong> [1,5,1]
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &le; nums.length &le; 100</code></li>
  <li><code>0 &le; nums[i] &le; 100</code></li>
</ul>
