<h2>
  <a href="https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/">
    2220. Minimum Bit Flips to Convert Number
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<h3>Description</h3>
<p>
A bit flip of a number <code>x</code> is choosing a bit in the binary representation
of <code>x</code> and flipping it from either <code>0</code> to <code>1</code> or
<code>1</code> to <code>0</code>.
</p>

<p>
For example, for <code>x = 7</code>, the binary representation is <code>111</code>.
We may choose any bit (including any leading zeros not shown) and flip it.
</p>

<p>
Given two integers <code>start</code> and <code>goal</code>, return the minimum number
of bit flips to convert <code>start</code> to <code>goal</code>.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> start = 10, goal = 7
<strong>Output:</strong> 3
<strong>Explanation:</strong>
The binary representation of 10 and 7 are 1010 and 0111 respectively.
We can convert 10 to 7 in 3 steps:
- Flip the first bit from the right: 1010 -> 1011
- Flip the third bit from the right: 1011 -> 1111
- Flip the fourth bit from the right: 1111 -> 0111
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> start = 3, goal = 4
<strong>Output:</strong> 3
<strong>Explanation:</strong>
The binary representation of 3 and 4 are 011 and 100 respectively.
We can convert 3 to 4 in 3 steps.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>0 &le; start, goal &le; 10<sup>9</sup></code></li>
</ul>
