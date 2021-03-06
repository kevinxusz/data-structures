#include "test.h"

#define MAXLINE 100 /* for testing, restrict input line length to 100 */
#define DELIMITERS " \n\t"

int main(void) {
    char str[MAXLINE], *token;

    /* read input line from STDIN, tokenize it and process each token */
    while (fgets(str, MAXLINE, stdin) != NULL) {
        for (token = strtok(str, DELIMITERS);
             token != NULL;
             token = strtok(NULL, DELIMITERS))
        {
            printf("%s", compressString(token));
        }
        printf("\n");
    }
}
