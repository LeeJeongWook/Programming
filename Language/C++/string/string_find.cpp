#include <iostream>
#include <string>

using namespace std;

void print(string::size_type n, string const& s) {
    if (n == string::npos) {
        std::cout << "not found\n";
    }
    else {
        std::cout << "found: " << s.substr(n) << '\n';
    }
}

int main() {
    string::size_type n;
    string const s = "This is a string";

    // s 의 처음 부터 찾는다.
    n = s.find("is");
    cout << " n : " << n << endl;
    print(n, s);

    // s 의 5번째 문자부터 찾는다.
    n = s.find("is", 5);
    cout << " n : " << n << endl;
    print(n, s);

    // 단일 문자 (a) 를 찾는다.
    n = s.find('a');
    cout << " n : " << n << endl;
    print(n, s);

    // 단일 문자 (q) 를 찾는다.
    n = s.find('q');
    cout << " n : " << n << endl;
    print(n, s);
}