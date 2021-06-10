#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		string s;
		cin >> n >> s;
		bool odd = false;
		bool even = false;
		// basic idea: check if there is an odd/even number in odd/even position correspondingly
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 1) {
				odd |= ((s[i - 1] - '0') % 2 == 1);
			} else {
				even |= ((s[i - 1] - '0') % 2 == 0);
			}
		}
		if (n % 2 == 1) {
			cout << (odd ? 1 : 2) << '\n';
		} else {
			cout << (even ? 2 : 1) << '\n';
		}
	}
	return 0;
}
