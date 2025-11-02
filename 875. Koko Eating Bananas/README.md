<h2>
  <a href="https://leetcode.com/problems/koko-eating-bananas/description/">
    875. Koko Eating Bananas
  </a>
</h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<h3>Description</h3>
<p>
  Koko loves to eat bananas. There are <code>n</code> piles of bananas, and the <code>i<sup>th</sup></code> pile has <code>piles[i]</code> bananas.
  The guards have gone and will come back in <code>h</code> hours.
  <br><br>
  Koko can decide her eating speed of <code>k</code> bananas per hour.
  Each hour, she chooses one pile and eats <code>k</code> bananas from it.
  If the pile has fewer than <code>k</code> bananas, she eats all of them and does not eat any more during that hour.
  <br><br>
  Koko likes to eat slowly but still wants to finish all the bananas before the guards return.
  <br><br>
  Return the <strong>minimum integer k</strong> such that she can eat all the bananas within <code>h</code> hours.
</p>

<h3>Example 1:</h3>
<pre>
<strong>Input:</strong> piles = [3,6,7,11], h = 8
<strong>Output:</strong> 4
</pre>

<h3>Example 2:</h3>
<pre>
<strong>Input:</strong> piles = [30,11,23,4,20], h = 5
<strong>Output:</strong> 30
</pre>

<h3>Example 3:</h3>
<pre>
<strong>Input:</strong> piles = [30,11,23,4,20], h = 6
<strong>Output:</strong> 23
</pre>

<h3>Constraints:</h3>
<ul>
  <li>1 <= piles.length <= 10<sup>4</sup></li>
  <li>piles.length <= h <= 10<sup>9</sup></li>
  <li>1 <= piles[i] <= 10<sup>9</sup></li>
</ul>
