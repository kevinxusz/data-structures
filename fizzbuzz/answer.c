/**
 * problem:
 *   Print all integers starting from 1 to a given integer limit N with the
 *   following exceptions:
 *     1. If the number is a multiple of 3, print 'fizz' instead of the number
 *     2. If the number is a multiple of 5, print 'buzz' instead of the number
 *     3. If the number is a multiple of 3 and 5, print 'fizzbuzz' instead of
 *     the number.
 *     4. In all other cases, simply print the number.
 *
 * examples:
 *  N=27
 *
 * input: 
 *  an integer value
 *
 * output: For N=16, the output is as follows:
 *   1
 *   2
 *   fizz
 *   4
 *   buzz
 *   fizz
 *   7
 *   8
 *   fizz
 *   buzz
 *   11
 *   fizz
 *   13
 *   14
 *   fizzbuzz
 *   16
 *
 * complexity:
 *      time = O(N)
 *      space = O(1)
**/

/* do not remove this line */
#include "test.h"

void fizzbuzz(int N) {

    /* Use a loop to iterate from 1 through N. Test if the number is divisible
     * by 3 and/or 5 and print the appropriate output
    **/

    for (int i=1; i <= N; i++) {
        if (i%3 == 0 && i%5 ==0) printf("fizzbuzz");
        else if (i%3 == 0) printf("fizz");
        else if (i%5 == 0) printf("buzz");
        else printf("%d", i);
        printf("\n");
    }
}
