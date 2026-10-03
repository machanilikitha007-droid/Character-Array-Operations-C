#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    int length;

    printf("Enter a word: ");
    scanf("%49s", word);

    length = strlen(word);

    printf("Character array: %s\n", word);
    printf("Length: %d\n", length);

    printf("Characters:\n");

    for (int i = 0; i < length; i++)
    {
        printf("%c\n", word[i]);
    }

    return 0;
}
