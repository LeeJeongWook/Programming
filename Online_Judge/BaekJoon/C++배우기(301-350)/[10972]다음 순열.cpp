#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <filesystem>
#include <vector>

#define MAX 10001

using namespace std;

int arr[MAX];
bool check[MAX];
bool flag = false;
vector<int> v;
vector<int> a;

bool Compare(vector<int> a, vector<int> b) {
	bool result = true;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) {
			result = false;
			break;
		}
	}
	return result;
}

void Permutation(int n, int r) {
	if (n == r) {
		if (flag) {
			for (int i = 0; i < v.size(); i++)
				cout << v[i] << " ";
			flag = false;
			return;
		}
		if (Compare(a, v)) {
			flag = true;
		}
		return;
	}

	for (int i = 0; i < r; i++) {
		if (check[i] == true) continue;
		check[i] = true;
		v.push_back(arr[i]);
		Permutation(n + 1, r);
		v.pop_back();
		check[i] = false;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "r", stdin);

	int N, tmp;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> tmp;
		a.push_back(tmp);
		arr[i - 1] = i;
	}

	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;

	Permutation(0, N);

	return 0;
}