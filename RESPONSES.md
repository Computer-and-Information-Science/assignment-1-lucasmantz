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
The recursive function seems to be called first for the amount of letters in the string. Then, it creates permutations after that. Therefore, a formula could be n = string.size() + x, assuming x is the number of permutations able to be made with the string. 

## tower.cpp

- input/parameter impacting number of calls
- 3 specific examples of input/parameter and number of calls
- number of recursive calls when input/parameter is *n*

## fibonacci2.cpp (presented in video lesson)

- input/parameter impacting number of calls
- 3 specific examples of input/parameter and number of calls
- number of recursive calls when input/parameter is *n*
