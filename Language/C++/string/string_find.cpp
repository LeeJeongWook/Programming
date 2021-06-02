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

    // s �� ó�� ���� ã�´�.
    n = s.find("is");
    cout << " n : " << n << endl;
    print(n, s);

    // s �� 5��° ���ں��� ã�´�.
    n = s.find("is", 5);
    cout << " n : " << n << endl;
    print(n, s);

    // ���� ���� (a) �� ã�´�.
    n = s.find('a');
    cout << " n : " << n << endl;
    print(n, s);

    // ���� ���� (q) �� ã�´�.
    n = s.find('q');
    cout << " n : " << n << endl;
    print(n, s);
}