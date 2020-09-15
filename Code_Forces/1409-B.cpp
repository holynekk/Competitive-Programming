#include <iostream>

using namespace std;

int main(void){
    int t;
	cin >> t;
	for (int k = 0; k < t; k++) {
		int a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		long long ans = 1e18;
		for (int i = 0; i < 2; ++i) {
			int a1 = min(n, a - x);
			int b1 = min(n - a1, b - y);
			ans = min(ans, (a - a1) * 1ll * (b - b1));
			swap(a, b);
			swap(x, y);
		}cout << ans << endl;
	}return 0;
}