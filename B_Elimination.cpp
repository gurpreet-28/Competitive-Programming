#include <iostream>

using namespace std;

int smallest_cutoff_score(int a, int b, int c, int d) {
  return max(a + b, c + d);
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << smallest_cutoff_score(a, b, c, d) << endl;
  }

  return 0;
}
