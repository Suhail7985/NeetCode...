sol<h2>
  <a href="https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/">
    81. Search in Rotated Sorted Array II
  </a>
</h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>
There is an integer array <code>nums</code> sorted in non-decreasing order (not necessarily with distinct values).<br><br>
Before being passed to your function, <code>nums</code> is rotated at an unknown pivot index <code>k</code> (<code>0 <= k < nums.length</code>) such that the resulting array is:<br>
<code>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code> (0-indexed).<br>
For example, <code>[0,1,2,4,4,4,5,6,6,7]</code> might be rotated at pivot index 5 and become <code>[4,5,6,6,7,0,1,2,4,4]</code>.
</p>

<p>
Given the array <code>nums</code> after the rotation and an integer <code>target</code>, return <code>true</code> if <code>target</code> is in <code>nums</code>, or <code>false</code> if it is not in <code>nums</code>.<br>
You must decrease the overall operation steps as much as possible.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [2,5,6,0,0,1,2], target = 0
<strong>Output:</strong> true
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [2,5,6,0,0,1,2], target = 3
<strong>Output:</strong> false
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 <= nums.length <= 5000</code></li>
  <li><code>-10<sup>4</sup> <= nums[i] <= 10<sup>4</sup></code></li>
  <li><code>nums</code> is guaranteed to be rotated at some pivot.</li>
  <li><code>-10<sup>4</sup> <= target <= 10<sup>4</sup></code></li>
</ul>

<h3>Follow up:</h3>
<p>
This problem is similar to <a href="https://leetcode.com/problems/search-in-rotated-sorted-array/">Search in Rotated Sorted Array</a>, but <code>nums</code> may contain duplicates.<br>
Would this affect the runtime complexity? How and why?
</p>
