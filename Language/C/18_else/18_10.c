#include <stdio.h>

int main(){
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((a < 0 || 100 < a) || (b < 0 || 100 < b) || (c < 0 || 100 < c) || (d < 0 || 100 < d)){
        printf("�߸��� ����");
    }
    else{
        if((a+b+c+d)/4 < 85){
           printf("���հ�");
        }
        else{
            printf("�հ�");
        }
    }
    return 0;
}