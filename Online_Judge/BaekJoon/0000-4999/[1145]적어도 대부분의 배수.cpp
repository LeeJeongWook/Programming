#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// freopen("input.txt", "r", stdin);

    int num = 1, flag;
    int v[5];
    
    for(int i = 0; i < 5; i++) cin >> v[i];

    while(1){
        flag = 0;
        for(int i = 0; i < 5; i++){
            if(num % v[i] == 0)
                flag++;
        }
        if(flag >= 3)
            break;
        num++;
    }

    cout << num;

    return 0;
}