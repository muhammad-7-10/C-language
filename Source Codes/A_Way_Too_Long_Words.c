/*Sometimes we get a word which is very large. Let's try a new thing. If a word is higher than 10 character, 
let's say the first & last character & display remaining in Integer
Example:
Input: Hello Watermelon
Output: Hello W10*/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);  // Reading the number of words

    char word[101];  // Buffer to store each word (max length 100)
    for (int i = 0; i < n; i++) {
        scanf("%s", word);  // Reading a word
        int length = strlen(word);

        if (length > 10) {
            // Print abbreviation: first letter + length-2 + last letter
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        } else {
            // Print the word as is
            printf("%s\n", word);
        }
    }

    return 0;
}
