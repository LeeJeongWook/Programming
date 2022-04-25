#include <stdio.h>

int main()
{
    char word;

    scanf("%c", &word);

    if (word == 'a')
        printf("a입니다.\n");
    else
        printf("a가 아닙니다.\n");

    return 0;
}