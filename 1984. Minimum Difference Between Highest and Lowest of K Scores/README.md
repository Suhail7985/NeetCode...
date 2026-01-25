<h2>
  <a href="https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/description/">
    1984. Minimum Difference Between Highest and Lowest of K Scores
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
You are given a 0-indexed integer array <code>nums</code>, where <code>nums[i]</code>
represents the score of the <code>i<sup>th</sup></code> student.
You are also given an integer <code>k</code>.
</p>

<p>
Pick the scores of any <code>k</code> students from the array such that the difference
between the highest and the lowest of the <code>k</code> scores is minimized.
</p>

<p>
Return the minimum possible difference.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [90], k = 1
<strong>Output:</strong> 0
<strong>Explanation:</strong>
There is only one way to pick the score of one student: [90].
The difference between the highest and lowest score is 90 - 90 = 0.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [9,4,1,7], k = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong>
Possible selections and differences:
- [9,4] → 5
- [9,1] → 8
- [9,7] → 2
- [4,1] → 3
- [4,7] → 3
- [7,1] → 6
The minimum possible difference is 2.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &le; k &le; nums.length &le; 1000</code></li>
  <li><code>0 &le; nums[i] &le; 10<sup>5</sup></code></li>
</ul>
