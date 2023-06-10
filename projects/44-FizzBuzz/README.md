---
title: FizzBuzz
date: 2023-06-07
time: 20:52
difficulty: Easy
tags: algorithmic,
---

# Notes

## Problem Statement

Given an integer `n`, return a string array `answer` (1-indexed) where:

- answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
- answer[i] == "Fizz" if i is divisible by 3.
- answer[i] == "Buzz" if i is divisible by 5.
- answer[i] == i (as a string) if none of the above conditions are true.


## Idea

- as far as `1-indexing` the array goes, I'll just make a new pointer point to the first element in the array. My reference is [this](https://code.whatever.social/questions/19711246/how-do-you-shift-the-starting-index-of-an-array-in-c) Stack Overflow Thread.

- the rest of FizzBuzz is pretty standard.

## References

- [FizzBuzz : optimization techniques](https://www.paulbarrick.com/programming/fizzbuzz/)
- [Enjoy Algorithms](https://www.enjoyalgorithms.com/blog/fizz-buzz-problem)
- [55Gb/s FizzBuzz](https://news.ycombinator.com/item?id=29031488)
- [The Fastest FizzBuzz Implementation](https://tech.marksblogg.com/fastest-fizz-buzz.html)

## Comments

I think i have a real problem in my method of problem solving. I've noticed this for a while now, i try to get the perfect solution the first time. and in that endeavour, I end up taking comically more time to solve the problem than it deserves. Even in this problem. I hadn't even written a basic FB program when i started to think about multithreaing, and how i can do away with so many if-else clauses. i believe a rework of my problem solving roadmap is required.

## TODO

- [ ] multithreaing
- [ ] FB in asm
