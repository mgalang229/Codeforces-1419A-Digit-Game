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
		if (n & 1) {
			// if 'n' (number of digits) is odd, then check if there is an odd number
			// in an odd position, because Rize can choose this as the last number, since
			// an odd number of digits would always make Rize the last turn
			bool checker = false;
			for (int i = 0; i < n; i++) {
				// check if an odd number exists in an odd position
				if ((s[i] - '0') & 1 && (i + 1) & 1) {
					// if yes, then set 'checker' to true and break the loop
					checker = true;
					break;
				}
			}
			cout << (checker ? 1 : 2);
		} else {
			// otherwise, if 'n' (number of digits) is even, then check if there is an even
			// number in an even position, because Breach can choose this as the last number, since
			// an even number of digits would always make Breach the last turn
			bool checker = false;
			for (int i = 0; i < n; i++) {
				// check if an even number exists in an even position
				if ((s[i] - '0') % 2 == 0 && (i + 1) % 2 == 0) {
					// if yes, then set 'checker' to true and break the loop
					checker = true;
					break;
				}
			}
			cout << (checker ? 2 : 1);
		}
		cout << '\n';
	}
	return 0;
}
