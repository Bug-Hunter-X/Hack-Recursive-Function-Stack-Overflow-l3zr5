# Hack Recursive Function Stack Overflow Bug

This repository demonstrates a common error in recursive functions written in Hack: improper handling of negative inputs, leading to a stack overflow. The `foo` function calculates the factorial, but lacks a base case for negative numbers.  The `bar` function calls `foo`, but does not properly handle the negative input resulting in a stack overflow if a negative number is passed.

The `bug.hh` file contains the buggy code, and `bugSolution.hh` provides a corrected version.