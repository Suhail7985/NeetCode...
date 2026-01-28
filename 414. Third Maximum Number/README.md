<h2>
  <a href="https://leetcode.com/problems/third-maximum-number/description/">
    414. Third Maximum Number
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
Given an integer array <code>nums</code>, return the <strong>third distinct maximum</strong>
number in this array.
</p>

<p>
If the third maximum does not exist, return the <strong>maximum number</strong>.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [3,2,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
The first distinct maximum is 3.
The second distinct maximum is 2.
The third distinct maximum is 1.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [1,2]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
The first distinct maximum is 2.
The second distinct maximum is 1.
The third distinct maximum does not exist,
so the maximum (2) is returned.
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> nums = [2,2,3,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong>
The first distinct maximum is 3.
The second distinct maximum is 2
(both 2's are counted together).
The third distinct maximum is 1.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &le; nums.length &le; 10<sup>4</sup></code></li>
  <li><code>-2<sup>31</sup> &le; nums[i] &le; 2<sup>31</sup> - 1</code></li>
</ul>
