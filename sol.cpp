#include <bits/stdc++.h>

#define ll long long

using namespace std;

void decode() {
	int l, b;
	cin >> l >> b;
	int x, y;
	if(l > b) {
		x = l;
		y = b;
	} 
	else {
		x = b;
		y = l;
	}
	int tmp = 0;
	while((x % y) > 0) {
		tmp = x % y;
		x = y;
		y = tmp;
	}
	int ans = (l * b) / (y * y);
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
