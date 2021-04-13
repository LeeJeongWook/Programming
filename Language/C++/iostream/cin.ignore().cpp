#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string str;

	cin >> n;
	cout << n << endl;

	/*
	cin은 '\n'를 변수에 담지 않는다. (입력버퍼에 남겨둔다)
	getline은 '\n'를 변수에 담는다.
	*/

	cin.ignore();
	getline(cin, str);
	cout << str << endl;

	/*
	cin.ignore();은 버퍼 전체를 비우는 것이 아니라 맨 앞의 문자 하나를 지운다.
	getline(읽어올 입력스트림, 저장할 문자열변수)
	*/

	return 0;
}