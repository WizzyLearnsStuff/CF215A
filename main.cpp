#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[50];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// cout<<1;
	int m;
	cin >> m;
	int c[50] = {0};

	int max = 0;

	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;

		c[i] = b;

		for (int j = 0; j < n; j++) {
			if ((b % a[j]) == 0) {
				// cout << 2;
				max = (max < b / a[j]) ? (b / a[j]) : max;
				break;
			}
		}
	}

	int d = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if ((c[i] % a[j]) == 0) {
				d += (c[i] / a[j] == max);
			}
		}
 	}

	cout << d;
}
