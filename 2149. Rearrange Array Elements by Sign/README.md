<h2>
  <a href="https://leetcode.com/problems/rearrange-array-elements-by-sign/description/">
    2149. Rearrange Array Elements by Sign
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>
You are given a 0-indexed integer array <code>nums</code> of even length consisting of
an equal number of positive and negative integers.
</p>

<p>
Return the array after rearranging the elements such that:
</p>

<ul>
  <li>Every consecutive pair of integers have opposite signs.</li>
  <li>For integers with the same sign, their relative order from <code>nums</code> is preserved.</li>
  <li>The rearranged array begins with a positive integer.</li>
</ul>

<p>
It is <strong>not required</strong> to perform the rearrangement in-place.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [3,1,-2,-5,2,-4]
<strong>Output:</strong> [3,-2,1,-5,2,-4]
<strong>Explanation:</strong>
Positive integers: [3,1,2]
Negative integers: [-2,-5,-4]
Rearranging them alternately while preserving order gives
[3,-2,1,-5,2,-4].
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [-1,1]
<strong>Output:</strong> [1,-1]
<strong>Explanation:</strong>
1 is the only positive integer and -1 is the only negative integer.
So the result is [1,-1].
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>2 &le; nums.length &le; 2 * 10<sup>5</sup></code></li>
  <li><code>nums.length</code> is even</li>
  <li><code>1 &le; |nums[i]| &le; 10<sup>5</sup></code></li>
  <li><code>nums</code> contains equal number of positive and negative integers</li>
</ul>
