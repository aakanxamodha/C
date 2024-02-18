//You have to print the character, ch, in the first line. Then print s in next line. In the last line print the sentence, sen.
//Constraints:-
//Strings for s and sen will have fewer than 100 characters, including the newline.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%99s", s);
    scanf(" ");
    scanf("%99[^\n]", sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}
