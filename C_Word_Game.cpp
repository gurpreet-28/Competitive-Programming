#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,a=0,b=0,c=0,p,q;
    cin >> n;
    q=3*n;
    string s[q];
    f(i,0,q){
        cin >> s[i];
    }
    unordered_map<string,int>f1;
    for(int i=0;i<q;i++){
        f1[s[i]]++;        
    }
    for(int i=0;i<n;i++){
        if(f1[s[i]]==1){
            a+=3;
            continue;
        }
        if(f1[s[i]]==2){
            a++;
            continue;
        }
        else{
            continue;
        }
    }
    for(int i=n;i<2*n;i++){
        if(f1[s[i]]==1){
            b+=3;
            continue;
        }
        if(f1[s[i]]==2){
            b++;
            continue;
        }
        else{
            continue;
        }
    }
    for(int i=2*n;i<q;i++){
        if(f1[s[i]]==1){
            c+=3;
            continue;
        }
        if(f1[s[i]]==2){
            c++;
            continue;
        }
        else{
            continue;
        }
    }
    cout << a << " " << b << " " << c << endl;
  }
}