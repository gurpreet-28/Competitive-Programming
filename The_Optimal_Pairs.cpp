#include <bits/stdc++.h>
using namespace std;

int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;
            else 
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main(){
    int t;
    cin >> t;
while(t--){
    long long int n,count=0;
    cin >> n;
    count = countDivisors(n);
    if(n%2==0){
        cout << 2*(count-1)-1 << endl;
    }
    else{
        cout << 2*(count-1) << endl;
    }
    }
}