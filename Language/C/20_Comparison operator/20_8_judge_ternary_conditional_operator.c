#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    int num1;

    scanf("%d", &num1);

    printf("%d\n", num1 == 7 ? 2 : 1);
 
    return 0;
}