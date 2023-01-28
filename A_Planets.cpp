#include <bits/stdc++.h>
#include <vector>
#include <string>

#define f(i,a,b)          for(int i = a; i < b; i++)
using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--){
    long long int n, p, c, y;
    cin >> n >> c;
    int a[n];
    f(i,0,n){
        cin >> a[i];
    }
    // if(n==149){
    //     cout << 0 << endl;
    //     continue;
    // }
    map<int,int>freq;
    f(i,0,n){
        freq[a[i]]++;
    }
    p=0;
    f(i,0,n){
    if(freq[a[i]]>1){
    if(freq[a[i]]>c){
    p+=c;
    }
    else{
    p+=freq[a[i]];
    }
    freq[a[i]]=0;
    }
    }
    int q=0;
    f(i,0,n){
    if(freq[a[i]]==1){
    q++;
    freq[a[i]]=0;
    }
    }
    cout << q+p << endl;
  }
}
