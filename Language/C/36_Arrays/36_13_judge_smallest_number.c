#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int numArr[5];
    int smallestNumber;

    scanf("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);

    int i, *numPtr = numArr;
    smallestNumber = 2147483647;
    for(i = 0; i < sizeof(numArr)/sizeof(int); i++){
        if(numPtr[i] < smallestNumber)
            smallestNumber = numPtr[i];
    }

    printf("%d\n", smallestNumber);

    return 0;
}