# CISC230 - Lucas Mantz

## factorial2.cpp

1. 
The number that affects number of calls is the int you input, which is the factorial you are trying to find.

2. 
input = 7, count = 8
input = 10, count = 11
input = 15, count = 16

3. 
Function is n + 1

## ireverse2.cpp

1. 
The number that affects the number of calls is the number of digits in your input. Therefore, if your number is in the hundreds (ex. 123), then the recursive function will be called three times.

2. 
input = 456 (output = 654), count = 3
input = 1234 (output = 4321), count = 4
input = 45678 (output = 87654), count = 5

3. 
Assuming n = the number of digits in the number, function is n.

## sreverse2.cpp

1. 
The number that affects the number of calls is the amount of characters in the string.

2. 
input = string, count = 6
input = programming, count = 11
input = computer, count = 8

3. 
Assuming n = the amount of characters in the string, function is n. A coding version of the formula could be n = string.size();

## permute.cpp

1. 
The number that affects the number of calls is the amount of characters in the string, which affects the amount of permutations able to be made.
2. 
input = at, count = 3
input = hat, count = 10
input = past, count = 41
3. 
The recursive function seems to be called first for the amount of letters in the string. Then, it creates permutations after that. Using a graphing calculator, to find the slope using the input and counts as points (input, count), the line y = 19x - 35 is created. This is pretty accurate for the points, but not perfect.

## tower.cpp
1. The number that affects the number of calls is the amount of disk on the tower that you are trying to move from A to C

2. 
input = 3, count = 7
input = 5, count = 31
input = 7, count = 127

3. 

The count is firstly the amount of disks on the tower, like the amount of characters in the string for the permutation program. Then it moves on to the moves it has to make to completely move the disks from tower A to C. Using a graphing calculator to find the slope using the input and counts as points (input, count), the line y = 30x - 83 fits somewhat nicely to the points.

## fibonacci2.cpp (presented in video lesson)

1. The number that affects the number of calls is the amount of Fibonacci numbers in the seequence you want to find, denoted as N in the program.

2. 
input = 20, count = 56
input = 50, count = 146
input = 70, count = 206

3. 







- input/parameter impacting number of calls
- 3 specific examples of input/parameter and number of calls
- number of recursive calls when input/parameter is *n*
