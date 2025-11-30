<h2><a href="https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/description/">
3512. Minimum Operations to Make Array Sum Divisible by K
</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
You are given an integer array <code>nums</code> and an integer <code>k</code>.  
You can perform the following operation any number of times:
</p>

<p>
<b>Operation:</b>  
Select an index <code>i</code> and replace <code>nums[i]</code> with <code>nums[i] - 1</code>.
</p>

<p>
Return <b>the minimum number of operations</b> required to make the sum of the array divisible by <code>k</code>.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [3,9,7], k = 5
<strong>Output:</strong> 4
<strong>Explanation:</strong>
Perform 4 operations on nums[1] = 9. Now nums = [3, 5, 7].
The sum is 15, which is divisible by 5.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [4,1,3], k = 4
<strong>Output:</strong> 0
<strong>Explanation:</strong>
The sum is 8, which is already divisible by 4.
Hence, no operations are needed.
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> nums = [3,2], k = 6
<strong>Output:</strong> 5
<strong>Explanation:</strong>
Perform 3 operations on nums[0] = 3 and 2 operations on nums[1] = 2.  
Now nums = [0, 0]. The sum is 0, which is divisible by 6.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &lt;= nums.length &lt;= 1000</code></li>
  <li><code>1 &lt;= nums[i] &lt;= 1000</code></li>
  <li><code>1 &lt;= k &lt;= 100</code></li>
</ul>
