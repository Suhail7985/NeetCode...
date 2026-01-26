
<h2>
  <a href="https://leetcode.com/problems/minimum-absolute-difference/description/">
    1200. Minimum Absolute Difference
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
Given an array of <strong>distinct integers</strong> <code>arr</code>, find all pairs of elements
with the <strong>minimum absolute difference</strong> of any two elements.
</p>

<p>
Return a list of pairs in ascending order (with respect to pairs), where each pair
<code>[a, b]</code> satisfies:
</p>

<ul>
  <li><code>a</code> and <code>b</code> are elements from <code>arr</code></li>
  <li><code>a &lt; b</code></li>
  <li><code>b - a</code> equals the minimum absolute difference in <code>arr</code></li>
</ul>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> arr = [4,2,1,3]
<strong>Output:</strong> [[1,2],[2,3],[3,4]]
<strong>Explanation:</strong>
The minimum absolute difference is 1.
All pairs with difference 1 are returned in ascending order.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> arr = [1,3,6,10,15]
<strong>Output:</strong> [[1,3]]
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> arr = [3,8,-10,23,19,-4,-14,27]
<strong>Output:</strong> [[-14,-10],[19,23],[23,27]]
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>2 &le; arr.length &le; 10<sup>5</sup></code></li>
  <li><code>-10<sup>6</sup> &le; arr[i] &le; 10<sup>6</sup></code></li>
</ul>
