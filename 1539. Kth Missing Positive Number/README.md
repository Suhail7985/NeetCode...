<h2>
  <a href="https://leetcode.com/problems/kth-missing-positive-number/description/">
    1539. Kth Missing Positive Number
  </a>
</h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
  Given an array <code>arr</code> of positive integers sorted in a strictly increasing order,
  and an integer <code>k</code>, return the <strong>kth positive integer</strong> that is missing from this array.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> arr = [2,3,4,7,11], k = 5
<strong>Output:</strong> 9
<strong>Explanation:</strong>
The missing positive integers are [1, 5, 6, 8, 9, 10, 12, 13, ...].
The 5th missing positive integer is 9.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> arr = [1,2,3,4], k = 2
<strong>Output:</strong> 6
<strong>Explanation:</strong>
The missing positive integers are [5, 6, 7, ...].
The 2nd missing positive integer is 6.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 <= arr.length <= 1000</code></li>
  <li><code>1 <= arr[i] <= 1000</code></li>
  <li><code>1 <= k <= 1000</code></li>
  <li><code>arr[i] &lt; arr[j]</code> for <code>1 <= i &lt; j <= arr.length</code></li>
</ul>

<h3>Follow up:</h3>
<p>Could you solve this problem in less than O(n) time complexity?</p>
