#include <stdio.h>

int main(){
    int i, num, tmp, a = 10, b = 1;
    scanf("%d", &num);

    for(i = 1; i < 6; i++){
        tmp = (num % a) / b;
        printf("%d ", tmp);
        a *= 10;
        b *= 10;
    }

    return 0;
}