<h2><a href="https://leetcode.com/problems/search-in-rotated-sorted-array/description/">33. Search in Rotated Sorted Array</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>
There is an integer array <code>nums</code> sorted in ascending order (with distinct values).<br>
Prior to being passed to your function, <code>nums</code> is possibly left rotated at an unknown index <code>k</code> (<code>1 <= k < nums.length</code>) such that the resulting array is:<br>
<code>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code> (0-indexed).<br>
For example, <code>[0,1,2,4,5,6,7]</code> might be left rotated by <code>3</code> indices and become <code>[4,5,6,7,0,1,2]</code>.
</p>
<p>
Given the array <code>nums</code> after the possible rotation and an integer <code>target</code>, return the index of <code>target</code> if it is in <code>nums</code>, or <code>-1</code> if it is not in <code>nums</code>.
</p>
<p>
You must write an algorithm with <code>O(log n)</code> runtime complexity.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 0
<strong>Output:</strong> 4
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 3
<strong>Output:</strong> -1
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> nums = [1], target = 0
<strong>Output:</strong> -1
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 <= nums.length <= 5000</code></li>
  <li><code>-10^4 <= nums[i] <= 10^4</code></li>
  <li>All values of <code>nums</code> are unique.</li>
  <li><code>nums</code> is an ascending array that is possibly rotated.</li>
  <li><code>-10^4 <= target <= 10^4</code></li>
</ul>
