
<h2>
  <a href="https://leetcode.com/problems/n-repeated-element-in-size-2n-array/description/">
    961. N-Repeated Element in Size 2N Array
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
You are given an integer array <code>nums</code> with the following properties:
</p>
<ul>
  <li><code>nums.length == 2 * n</code></li>
  <li><code>nums</code> contains <code>n + 1</code> unique elements</li>
  <li>Exactly one element of <code>nums</code> is repeated <code>n</code> times</li>
</ul>
<p>
Return the element that is repeated <code>n</code> times.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [1,2,3,3]
<strong>Output:</strong> 3
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [2,1,2,5,3,2]
<strong>Output:</strong> 2
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> nums = [5,1,5,2,5,3,5,4]
<strong>Output:</strong> 5
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>2 &le; n &le; 5000</code></li>
  <li><code>nums.length == 2 * n</code></li>
  <li><code>0 &le; nums[i] &le; 10<sup>4</sup></code></li>
  <li>
    <code>nums</code> contains <code>n + 1</code> unique elements and one of them
    is repeated exactly <code>n</code> times
  </li>
</ul>
