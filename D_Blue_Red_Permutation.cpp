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
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        string s;
        cin >> s;
        vector<int>b;
        vector<int>r;
        f(i,0,n){
            if(s[i]=='B'){
                b.pb(a[i]);
            }
            else{
                r.pb(a[i]);
            }
        }
        sort(all(b));
        sort(all(r));
     
        p=1;
        int i=0,j=0;
        bool ans=true;
        while(i<b.size() and j<r.size() and ans){
            if(b[i]>=p){
                p++;
                i++;
            }
            else{
                if(r[j]<=p){
                    p++;
                    j++;
                }
                else{
                    ans=false;
                    break;
                }
            }
        }
        while(i<b.size() and ans){
            if(b[i]>=p){
                p++;
                i++;
            }
            else{
                ans=false;
                break;
            }
        }
        while(j<r.size() and ans){
            if(r[j]<=p){
                p++;
                j++;
            }
            else{
                ans=false;
                break;
            }
        }
        if(ans){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}




