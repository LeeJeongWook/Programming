#include <iostream>

using namespace std;

int main(){
    int T, a, b, c, max;
    string ans;

    for(int test = 1; test <= T; test++){
        max = 0;
        cin >> a >> b >> c;

        a > max ? max = a : ;
        if(){

        }

        else if((a == b) && (b == c))
            ans = "equilateral";
        else if((a == b) || (b == c))
            ans = "isosceles";
        else if((a != b) && (b != c))
            ans = "scalene";

        cout << "Case #" << test <<": " << ans << '\n';
    }

    return 0;
}
