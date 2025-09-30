<h2><a href="https://leetcode.com/problems/merge-sorted-array/description/">
88. Merge Sorted Array
</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
You are given two integer arrays <code>nums1</code> and <code>nums2</code>, sorted in non-decreasing order, 
and two integers <code>m</code> and <code>n</code>, representing the number of elements in <code>nums1</code> and <code>nums2</code> respectively.
</p>

<p>
Merge <code>nums1</code> and <code>nums2</code> into a single array sorted in non-decreasing order.
</p>

<p>
The final sorted array should not be returned by the function, but instead be stored inside the array <code>nums1</code>. 
To accommodate this, <code>nums1</code> has a length of <code>m + n</code>, where the first <code>m</code> elements denote the elements that should be merged, 
and the last <code>n</code> elements are set to <code>0</code> and should be ignored. <code>nums2</code> has a length of <code>n</code>.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
<strong>Output:</strong> [1,2,2,3,5,6]
<strong>Explanation:</strong> The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums1 = [1], m = 1, nums2 = [], n = 0
<strong>Output:</strong> [1]
<strong>Explanation:</strong> The arrays we are merging are [1] and [].
The result of the merge is [1].
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> nums1 = [0], m = 0, nums2 = [1], n = 1
<strong>Output:</strong> [1]
<strong>Explanation:</strong> The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1.
The 0 is only there to ensure the merge result can fit in nums1.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>nums1.length == m + n</code></li>
  <li><code>nums2.length == n</code></li>
  <li>0 &lt;= m, n &lt;= 200</li>
  <li>1 &lt;= m + n &lt;= 200</li>
  <li>-10<sup>9</sup> &lt;= nums1[i], nums2[j] &lt;= 10<sup>9</sup></li>
</ul>

<h3>Follow up:</h3>
<p>Can you come up with an algorithm that runs in O(m + n) time?</p>
