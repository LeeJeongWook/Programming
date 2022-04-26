#include <stdio.h>

int main(){
    unsigned long long num;

    scanf("%lld", &num);

    printf("%llu\n", num << 20 >> 4);
    return 0;
}