#include <bits/stdc++.h>

using namespace std;

void decode() {
	int h, m, nh;
	cin >> h >> m;
	nh=abs(h-24);
	nh*=60;
	nh-=m;
	cout << nh << "\n";
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
