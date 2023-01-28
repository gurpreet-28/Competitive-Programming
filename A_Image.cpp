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
    int t;
    cin >> t;
    while (t--){
    int n,p,q,c=0,m=0;
    string s1,s2;
    cin >> s1 >> s2;
    int freq[26]={0};
    // unordered_map<char,int>f;
    freq[s1[0]-'a']++;
    freq[s2[0]-'a']++;
    freq[s1[1]-'a']++;
    freq[s2[1]-'a']++;
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            m=max(m,freq[i]);
            c++;
        }
    }
    if(c==m){
        cout << 1 << endl;
        continue;
    }
    cout << 4-m << endl;


  }
}