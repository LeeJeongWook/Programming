#include <stdio.h>

int main(){
    int N, M;
    int cards[100];
    int max_sum = 0;

    scanf("%d %d", &N, &M);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &cards[i]);
    }

    for(int i = 0; i < N - 2; i++){
        for(int j = i + 1; j < N - 1; j++){
            for(int k = j + 1; k < N; k++){
                int sum = cards[i] + cards[j] + cards[k];
                if(sum <= M && sum > max_sum){
                    max_sum = sum;
                }
            }
        }
    }

    printf("%d", max_sum);

    return 0;
}