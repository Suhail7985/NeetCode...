<h2>
  <a href="https://leetcode.com/problems/longest-balanced-subarray-i/description/">
    3719. Longest Balanced Subarray I
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>
You are given an integer array <code>nums</code>.
</p>

<p>
A subarray is called <strong>balanced</strong> if the number of
<strong>distinct even numbers</strong> in the subarray is equal to the number of
<strong>distinct odd numbers</strong>.
</p>

<p>
Return the length of the <strong>longest balanced subarray</strong>.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [2,5,4,3]
<strong>Output:</strong> 4
<strong>Explanation:</strong>
The longest balanced subarray is [2,5,4,3].
It has 2 distinct even numbers [2,4] and
2 distinct odd numbers [5,3].
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [3,2,2,5,4]
<strong>Output:</strong> 5
<strong>Explanation:</strong>
The longest balanced subarray is [3,2,2,5,4].
It has 2 distinct even numbers [2,4] and
2 distinct odd numbers [3,5].
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> nums = [1,2,3,2]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
The longest balanced subarray is [2,3,2].
It has 1 distinct even number [2] and
1 distinct odd number [3].
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &le; nums.length &le; 1500</code></li>
  <li><code>1 &le; nums[i] &le; 10<sup>5</sup></code></li>
</ul>
