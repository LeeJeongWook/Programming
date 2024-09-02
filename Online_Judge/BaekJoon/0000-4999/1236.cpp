#include <iostream>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);

    int count = 0, x, y, r;

    for(int i = 0; i < N; i++){
        scanf("%d %d %d", &x, &y, &r);
        if(r > 50){
           count++;
        }
    }

    printf("%d", count);

    return 0;
}