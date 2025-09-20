<h2><a href="https://leetcode.com/problems/maximum-matching-of-players-with-trainers/">2410. Maximum Matching of Players With Trainers</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-yellow" alt="Difficulty: Medium" />
<hr>

<p>You are given a 0-indexed integer array <code>players</code>, where <code>players[i]</code> represents the ability of the <code>i<sup>th</sup></code> player. You are also given a 0-indexed integer array <code>trainers</code>, where <code>trainers[j]</code> represents the training capacity of the <code>j<sup>th</sup></code> trainer.</p>

<p>The <code>i<sup>th</sup></code> player can match with the <code>j<sup>th</sup></code> trainer if the player's ability is less than or equal to the trainer's training capacity. Each player and each trainer can be matched at most once.</p>

<p><strong>Return the maximum number of matchings</strong> between players and trainers that satisfy these conditions.</p>

<h3>Example 1:</h3>

<pre>
<strong>Input:</strong> players = [4,7,9], trainers = [8,2,5,8]
<strong>Output:</strong> 2
<strong>Explanation:</strong> 
- players[0] can be matched with trainers[0] since 4 <= 8.
- players[1] can be matched with trainers[3] since 7 <= 8.
It can be proven that 2 is the maximum number of matchings that can be formed.
</pre>

<h3>Example 2:</h3>

<pre>
<strong>Input:</strong> players = [1,1,1], trainers = [10]
<strong>Output:</strong> 1
<strong>Explanation:</strong> 
The trainer can be matched with any of the 3 players.
Each player can only be matched with one trainer, so the maximum answer is 1.
</pre>

<h3>Constraints:</h3>

<ul>
  <li>1 <= players.length, trainers.length <= 10<sup>5</sup></li>
  <li>1 <= players[i], trainers[j] <= 10<sup>9</sup></li>
</ul>

<p><strong>Note:</strong> This problem is the same as <a href="https://leetcode.com/problems/assign-cookies/">455. Assign Cookies</a>.</p>
