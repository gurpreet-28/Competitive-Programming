#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
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
    int t=1;
    cin >> t;
    while (t--){
        int n, p=0, q;
        cin >> n;
        string s;
        cin >> s;
        f(i,0,n-1){
            if(s[i]==s[i+1]){
                p=1;
                break;
            }
        }      
        map<char,int>m;
        f(i,0,n){
            if(m[s[i]]==0){
                m[s[i]]=i+1;
            }
            else{
                if(m[s[i]]%2==(i+1)%2){
                    continue;
                }
                else{
                    p=1;
                    break;
                }
            }
        }
        if(p==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}