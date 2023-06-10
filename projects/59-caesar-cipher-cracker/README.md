---
title: Caesar Cipher Cracker
date: 2023-06-09
time: 02:12
difficulty: Easy
tags: algorithmic,
---

# Notes

## Problem Statement

- Level 1: 

> Given an encrypted string and its shift (`+` for right shift and `-` for left). decode the string.

- Level 2:

> Given an encrypted string. decode the string. (shift is not given.)

- *Optional*

> Give the option to encrypt strings.


## Idea

- Use ASCII for level 1. ignore non alphabet characters (optionally rotate the numbers also? ignore `_,/{}()[]` etc. though),

- for Level 2, just bruteforce, and let the user choose what makes the most sense. OR

> Use Markov Chain Sentence Generators somehow (haven't really read a lot about them, but it's the 4th challenge). to find most probabl decoded string by analysing what words make the most sense. (Do i mean Markov Chains or do i mean Spellchecker/????)

- encrypting part is easy. (*Optional*)


## References

**Caesar Cipher**

- [dcode.fr - Caesar Cipher](https://www.dcode.fr/caesar-cipher)

**Markov Chains**

- [Text Generation with Markov Chains: An Introduction to using Markovify](https://scribe.froth.zone/text-generation-with-markov-chains-an-introduction-to-using-markovify-742e6680dc33)
- [dcode.fr - Text Generator (Markov Chain)](https://www.dcode.fr/markov-chain-text)
- [Markov Chain Sentence Generator (with Shitposting capabilities)](https://scribe.privacydev.net/markov-chain-sentence-generator-with-sh-tposting-capabilities-a0bd5a184173)
- [Using a Markov chain sentence generator in Python to generate ‘real fake news’.](https://scribe.privacydev.net/using-a-markov-chain-sentence-generator-in-python-to-generate-real-fake-news-e9c904e967e)


## Comments


## TODO

- [ ] Level 1
- [ ] Level 2
- [ ] *Optional*
