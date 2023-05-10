---
title: Highest Prime Factor Calculator
date: 2023-05-09
time: 11:37
difficulty: Easy
tags: algorithmic,
---

# Notes

a program to give the highest prime factor of an inputted number.

## Idea

1.

- The highest prime factor of a number is either the number itself (the number of prime), or somewhere below number/2 (if the number is composite).

  > 48 -> (1, 2, 4, 6, 8, 12, 24, 48): Factors -> (2): Prime Factor

  > 15 -> (1, 3, 5, 15): Factors -> (3, 5): Prime Factors

  > 29 -> (1, 29): Factors -> (29): Prime Factor

- Sieve of Eratosthenes from (1 -> number).
- for prime in sieve_list: if (number/prime) also in sieve_list {it is also a prime}, which means that it is the biggest prime factor. if i start sieve from 1 instead of 2, i can also account for the fact that the number might be a prime, and so it is its own biggest prime factor

2.

- Hold up... Binary Trees????? for factors??

## References

1. [Sieve of Eratosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes) - Sieve of Erasthothenes to calculate prime numbers upto N
2. [Discussion on Python Forum](https://discuss.python.org/t/sieve-of-eratosthenes-in-python/17130/6)
3. [Paper on SoE implemented right](https://www.cs.hmc.edu/~oneill/papers/Sieve-JFP.pdf)
4.
