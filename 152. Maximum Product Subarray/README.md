<h2>
  <a href="https://leetcode.com/problems/maximum-product-subarray/description/">
    152. Maximum Product Subarray
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>
Given an integer array <code>nums</code>, find a <strong>contiguous subarray</strong>
that has the largest product, and return the product.
</p>

<p>
The test cases are generated so that the answer will fit in a 32-bit integer.
</p>

<p>
Note that the product of an array with a single element is the value of that element.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [2,3,-2,4]
<strong>Output:</strong> 6
<strong>Explanation:</strong>
The subarray [2,3] has the largest product 6.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [-2,0,-1]
<strong>Output:</strong> 0
<strong>Explanation:</strong>
The result cannot be 2 because [-2,-1] is not a contiguous subarray.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &le; nums.length &le; 2 * 10<sup>4</sup></code></li>
  <li><code>-10 &le; nums[i] &le; 10</code></li>
  <li>The product of any subarray fits in a 32-bit integer.</li>
</ul>