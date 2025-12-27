<h2>
  <a href="https://leetcode.com/problems/minimum-penalty-for-a-shop/description/">
    2483. Minimum Penalty for a Shop
  </a>
</h2>

<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />

<hr>

<h3>Description</h3>
<p>
You are given the customer visit log of a shop represented by a 0-indexed string
<code>customers</code> consisting only of characters <code>'N'</code> and <code>'Y'</code>:
</p>

<ul>
  <li>If the <code>i<sup>th</sup></code> character is <code>'Y'</code>, customers come at the <code>i<sup>th</sup></code> hour.</li>
  <li>If the <code>i<sup>th</sup></code> character is <code>'N'</code>, no customers come at the <code>i<sup>th</sup></code> hour.</li>
</ul>

<p>
If the shop closes at the <code>j<sup>th</sup></code> hour (<code>0 ≤ j ≤ n</code>), the penalty is calculated as:
</p>

<ul>
  <li>For every hour when the shop is open and no customers come, the penalty increases by 1.</li>
  <li>For every hour when the shop is closed and customers come, the penalty increases by 1.</li>
</ul>

<p>
Return the <strong>earliest hour</strong> at which the shop must be closed to incur the
<strong>minimum penalty</strong>.
</p>

<p>
<b>Note:</b> If a shop closes at the <code>j<sup>th</sup></code> hour, it means the shop is closed at hour <code>j</code>.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> customers = "YYNY"
<strong>Output:</strong> 2
<strong>Explanation:</strong>
Closing at hour 0 → penalty = 3
Closing at hour 1 → penalty = 2
Closing at hour 2 → penalty = 1
Closing at hour 3 → penalty = 2
Closing at hour 4 → penalty = 1
Minimum penalty is 1. Earliest hour is 2.
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> customers = "NNNNN"
<strong>Output:</strong> 0
<strong>Explanation:</strong>
No customers arrive, so closing immediately gives minimum penalty.
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> customers = "YYYY"
<strong>Output:</strong> 4
<strong>Explanation:</strong>
Customers arrive every hour, so closing after the last hour minimizes penalty.
</pre>

<h3>Constraints:</h3>
<ul>
  <li><code>1 ≤ customers.length ≤ 10<sup>5</sup></code></li>
  <li><code>customers</code> consists only of characters <code>'Y'</code> and <code>'N'</code></li>
</ul>
