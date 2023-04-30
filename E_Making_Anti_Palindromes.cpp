#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;



signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, mx=0, p=0, q;
        cin >> n;
        string s;
        cin >> s;
        if(n%2==1){
            cout << -1 << endl;
            continue;
        }
        int freq[26]={0};
        for(auto ch : s){
            freq[ch-'a']++;
            mx=max(freq[ch-'a'],mx);
        }
        if(mx>n/2){
            cout << -1 << endl;
            continue;
        }
        q=0;
        int i=0,j=n-1;
        p=0;
        map<char,int>mp;
        while(i<j){
            if(s[i]==s[j]){
                mp[s[i]]++;
                p++;
            }
            q=max(mp[s[i]],q);
            i++;
            j--;
        }
        if(q==0){
            cout << 0 << endl;
        }        
        else{
            cout << max(q,(p+1)/2) << endl;
        }
    }
}