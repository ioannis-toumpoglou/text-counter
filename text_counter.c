#include <stdio.h>
#define YES 1
#define NO 0

main() {
    int ch;
    int lineCount = 0;
    long charCount = 0L;
    int wordCount = 0;
    int word = NO;

    while ((ch = getchar()) != EOF) {
            charCount++;        /* Count character */
            if (ch == '\n')
                lineCount++;    /* Count line */
            if (ch != ' ' && ch != '\n' && ch != '\t' && word == NO) {
                word = YES;     /* Start of a word */
                wordCount++;    /* Count word */
            }
            if ((ch == ' ' || ch == '\n' || ch == '\t') && word == YES)
                word = NO;      /* End of a word */
    }
    printf("\nWords counted: %d\n", wordCount);
    printf("\nLines counted: %d\n", lineCount);
    printf("\nCharacters counted: %ld\n", charCount);
}
