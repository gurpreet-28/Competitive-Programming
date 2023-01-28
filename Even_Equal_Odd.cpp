#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,count_even=0,count_odd=0;
    cin >> n;
    int b=2*n;
    int a[b];
    for(int i=0;i<b;i++){
        cin >> a[i];
        if(a[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    if(count_even==count_odd){
        cout << 0 << endl;
    }
    else if(count_even<count_odd){
        cout << count_odd-n << endl;
    }
    else{
        cout << endl;
    }
    }
}