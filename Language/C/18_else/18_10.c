#include <stdio.h>

int main(){
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((a < 0 || 100 < a) || (b < 0 || 100 < b) || (c < 0 || 100 < c) || (d < 0 || 100 < d)){
        printf("잘못된 점수");
    }
    else{
        if((a+b+c+d)/4 < 85){
           printf("불합격");
        }
        else{
            printf("합격");
        }
    }
    return 0;
}