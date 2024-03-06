// in this code all letters of sentence excludibg space will be counted
#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[100];
    int number_of_letters = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence); // %[^\n]s reads until newline

    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] != ' ') {
            number_of_letters++;
        }
    }

    printf("\nThe number of letters in the given sentence is: %d\n", number_of_letters);

    return 0;
}
/* case1: Enter a sentence: Harshita Relangi

The number of letters in the given sentence is: 15
case2: Enter a sentence: Harshita Relangi is a girl

The number of letters in the given sentence is: 22
*/
