<h2><a href="https://leetcode.com/problems/next-greater-element-i/description/">496. Next Greater Element I</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>The next greater element of some element <code>x</code> in an array is the first greater element that is to the right of <code>x</code> in the same array.</p>
<p>You are given two distinct 0-indexed integer arrays <code>nums1</code> and <code>nums2</code>, where <code>nums1</code> is a subset of <code>nums2</code>.</p>
<p>For each <code>0 &lt;= i &lt; nums1.length</code>, find the index <code>j</code> such that <code>nums1[i] == nums2[j]</code> and determine the next greater element of <code>nums2[j]</code> in <code>nums2</code>. If there is no next greater element, then the answer for this query is <code>-1</code>.</p>
<p>Return an array <code>ans</code> of length <code>nums1.length</code> such that <code>ans[i]</code> is the next greater element as described above.</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums1 = [4,1,2], nums2 = [1,3,4,2]
<strong>Output:</strong> [-1,3,-1]
<strong>Explanation:</strong>
The next greater element for each value of nums1 is as follows:
- 4 → no next greater element → -1
- 1 → next greater element is 3
- 2 → no next greater element → -1
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums1 = [2,4], nums2 = [1,2,3,4]
<strong>Output:</strong> [3,-1]
<strong>Explanation:</strong>
The next greater element for each value of nums1 is as follows:
- 2 → next greater element is 3
- 4 → no next greater element → -1
</pre>

<h3>Constraints:</h3>
<ul>
  <li>1 &lt;= nums1.length &lt;= nums2.length &lt;= 1000</li>
  <li>0 &lt;= nums1[i], nums2[i] &lt;= 10<sup>4</sup></li>
  <li>All integers in nums1 and nums2 are unique.</li>
  <li>All the integers of nums1 also appear in nums2.</li>
</ul>

<h3>Follow-up:</h3>
<p>Could you find an O(nums1.length + nums2.length) solution?</p>
