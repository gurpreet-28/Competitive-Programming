#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<pair<int, int> > cont;
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		cont.push_back(make_pair(b, a));
	}
	sort(cont.begin(), cont.end());
	int r = 0;
	for (int i = m - 1; i >= 0; i--) {
		if (cont[i].second >= n) {
			r += cont[i].first * n;
			break;
		}
		r += cont[i].first * cont[i].second;
		n -= cont[i].second;
	}
	cout << r << endl;
}
