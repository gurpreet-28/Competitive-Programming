#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int a,b,c,x,y,z,m=INT_MIN;
    cin >> a >> b >> c;
	y=max({0, a - b + 1, c - b + 1});
	x=max({0, b - a + 1, c - a + 1});
	z=max({0, a - c + 1, b - c + 1});
    cout << x << " " << y << " " << z << endl;
    }
}