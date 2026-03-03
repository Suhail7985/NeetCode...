<h2>
  <a href="https://leetcode.com/problems/product-of-array-except-self/description/">
    238. Product of Array Except Self
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>
Given an integer array <code>nums</code>, return an array <code>answer</code>
such that <code>answer[i]</code> is equal to the product of all the elements
of <code>nums</code> except <code>nums[i]</code>.
</p>

<p>
The product of any prefix or suffix of <code>nums</code> is guaranteed
to fit in a 32-bit integer.
</p>

<p>
You must write an algorithm that runs in <code>O(n)</code> time
and <strong>without using the division operation</strong>.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> [24,12,8,6]
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [-1,1,0,-3,3]
<strong>Output:</strong> [0,0,9,0,0]
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>2 &le; nums.length &le; 10<sup>5</sup></code></li>
  <li><code>-30 &le; nums[i] &le; 30</code></li>
  <li>The answer is guaranteed to fit in a 32-bit integer.</li>
</ul>

<h3>Follow up:</h3>
<p>
Can you solve the problem in <code>O(1)</code> extra space complexity?
(The output array does not count as extra space.)
</p>