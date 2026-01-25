<h2>
  <a href="https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/">
    1877. Minimize Maximum Pair Sum in Array
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>
The pair sum of a pair <code>(a, b)</code> is equal to <code>a + b</code>.
The maximum pair sum is the largest pair sum in a list of pairs.
</p>

<p>
For example, if we have pairs <code>(1,5)</code>, <code>(2,3)</code>, and <code>(4,4)</code>,
the maximum pair sum would be:
<code>max(1+5, 2+3, 4+4) = 8</code>.
</p>

<p>
Given an array <code>nums</code> of even length <code>n</code>,
pair up the elements of <code>nums</code> into <code>n / 2</code> pairs such that:
</p>

<ul>
  <li>Each element of <code>nums</code> is used in exactly one pair.</li>
  <li>The maximum pair sum is minimized.</li>
</ul>

<p>
Return the minimized maximum pair sum after optimally pairing the elements.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> nums = [3,5,2,3]
<strong>Output:</strong> 7
<strong>Explanation:</strong>
Pairs: (3,3) and (5,2)
Maximum pair sum = max(3+3, 5+2) = 7
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> nums = [3,5,4,2,4,6]
<strong>Output:</strong> 8
<strong>Explanation:</strong>
Pairs: (3,5), (4,4), and (6,2)
Maximum pair sum = max(3+5, 4+4, 6+2) = 8
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>n == nums.length</code></li>
  <li><code>2 &le; n &le; 10<sup>5</sup></code></li>
  <li><code>n</code> is even</li>
  <li><code>1 &le; nums[i] &le; 10<sup>5</sup></code></li>
</ul>
