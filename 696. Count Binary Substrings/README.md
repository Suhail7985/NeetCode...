<h2>
  <a href="https://leetcode.com/problems/count-binary-substrings/description/">
    696. Count Binary Substrings
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
Given a binary string <code>s</code>, return the number of non-empty substrings that:
</p>

<ul>
  <li>Have the same number of <code>0</code>'s and <code>1</code>'s.</li>
  <li>All the <code>0</code>'s and all the <code>1</code>'s in the substring are grouped consecutively.</li>
</ul>

<p>
Substrings that occur multiple times are counted as many times as they occur.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> s = "00110011"
<strong>Output:</strong> 6
<strong>Explanation:</strong>
The valid substrings are:
"0011", "01", "1100", "10", "0011", and "01".
Some substrings repeat and are counted multiple times.
"00110011" is not valid because the 0's and 1's are not grouped together.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> s = "10101"
<strong>Output:</strong> 4
<strong>Explanation:</strong>
The valid substrings are:
"10", "01", "10", "01".
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 &le; s.length &le; 10<sup>5</sup></code></li>
  <li><code>s[i]</code> is either <code>'0'</code> or <code>'1'</code></li>
</ul>
