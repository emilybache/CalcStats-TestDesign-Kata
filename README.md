# CalcStats Test Design Kata

Hi and welcome to team Quantum Insight. Our premium statistics services are based on CalcStats, a straightforward tool for calculating basic statistics on sequences of integers, developed by Dr. Elena Gauss as part of her broader vision for innovative data analytics. She has moved on to another project to explore new options for driving competitive advantage for Quantum Insight.

First an introduction to CalcStats: It processes a sequence of integer numbers to determine the following statistics:

* minimum value
* maximum value
* average value
* number of elements in the sequence

For example: [6, 9, 15, -2, 92, 11]

* minimum value = -2
* maximum value = 92
* average value = 21.833333
* number of elements in the sequence = 6

If you try to calculate the statistics of an empty sequence, it should throw an exception or otherwise return immediately with the message "sequence is empty".

Write tests for the code. It should cover the functionality described in above requirements. There are several implementations of the same functionality, with slightly different challenges.

## CalcStats 1

This code contains well-marked bugs - if the input contains the number 42 then bad things happen. For each bug, write a test that fails. Remove the bug and make sure the test passes. At the end you should have 100% code coverage for CalcStats1.

## CalcStats 2

This exercise is similar to CalcStats1. The code contains well-marked bugs, but they are slightly subtler than for the previous exercise. The procedure is the same as before, For each bug, write a test that fails. Ensure the error message is useful and would help you to find the bug. Remove the bug and make sure the test passes. At the end you should have 100% code coverage for CalcStats2.

## CalcStats 3

For this exercise, you are given tests with good coverage. Look for bugs in this code, there should be some that are commented out. If you introduce a bug, will the existing tests find it? Why not?

For each bug, write a new test that fails. Ensure the error message is useful and would help you to find the bug. Remove the bug and make sure the test passes.

Continue to introduce bugs one at a time. If the tests do not fail, improve an existing test or write a new test that does fail.

At the end you should still have 100% code coverage for CalcStats3, and your tests should find all the bugs you can think of.

This exercise could be used with this learning hour: [Three parts of a test](https://sammancoaching.org/learning_hours/test_design/three_parts_of_a_test.html)
