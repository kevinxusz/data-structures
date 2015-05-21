Problem
-------
Print all integers 1..N (N: integer) that follow these rules:
* if it is a multiple of 3, print 'fizz' instead
* if it is a multiple of 5, print 'buzz' instead
* if it is a multiple of 3 and 5, print 'fizzbuzz' instead
* in all other cases, simply print the number.

Example
-------
    16 =>   1
            2
            fizz
            4
            buzz
            fizz
            7
            8
            fizz
            buzz
            11
            fizz
            13
            14
            fizzbuzz
            16

Complexity
----------
- Time : O(N)
- Space: O(1)

Instructions
------------
1. Complete the required APIs in `question.c` to attempt this question.
2. Please don't edit the function prototype provided in `question.c`, your
 . solution might not compile if you do.
3. If you need hints to solve the problem, look at `hints.c` instead.
4. When you're done, compile your changes by running: `make all`
5. Test your code using: `./question < input.txt` or `./hints < input.txt`.
6. The solution is available in `answer.c` (compile using: `make answer`)
7. Get the expected output using: `./answer < input.txt`
8. Feel free to include any additional header files or define additional
  functions.

Help us make CodePrepper better
-------------------------------
If you have an alternative solution to any of the solutions we've posted that
is more optimal or uses a different approach, please email it to us at 
<codeprepper@gmail.com>. If it compiles and passes our unit-tests, we will
feature your solution and give you credit for it.