#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string str;

	cin >> n;
	cout << n << endl;

	/*
	cin�� '\n'�� ������ ���� �ʴ´�. (�Է¹��ۿ� ���ܵд�)
	getline�� '\n'�� ������ ��´�.
	*/

	cin.ignore();
	getline(cin, str);
	cout << str << endl;

	/*
	cin.ignore();�� ���� ��ü�� ���� ���� �ƴ϶� �� ���� ���� �ϳ��� �����.
	getline(�о�� �Է½�Ʈ��, ������ ���ڿ�����)
	*/

	return 0;
}