<h2><a href="https://leetcode.com/problems/missing-number/description/">268. Missing Number</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>Given an array <code>nums</code> containing <code>n</code> distinct numbers in the range <code>[0, n]</code>, return the only number in the range that is missing from the array.</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [3,0,1]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 
2 is the missing number in the range since it does not appear in nums.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [0,1]
<strong>Output:</strong> 2
<strong>Explanation:</strong>
n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 
2 is the missing number in the range since it does not appear in nums.
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> nums = [9,6,4,2,3,5,7,0,1]
<strong>Output:</strong> 8
<strong>Explanation:</strong>
n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 
8 is the missing number in the range since it does not appear in nums.
</pre>

<h3>Constraints:</h3>
<ul>
  <li>n == nums.length</li>
  <li>1 &lt;= n &lt;= 10<sup>4</sup></li>
  <li>0 &lt;= nums[i] &lt;= n</li>
  <li>All the numbers of nums are unique.</li>
</ul>

<h3>Follow up:</h3>
<p>Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?</p>
