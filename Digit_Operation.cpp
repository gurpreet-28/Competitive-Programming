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
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, k, q;
        cin >> n >> k;
        vector<string>a(n);
        vector<string>b(n);
        inputarray(a,n);
        inputarray(b,n);
        p=0;
        f(i,0,n){
            if(a[i].length()!=b[i].length()){
                p=1;
                break;
            }
        }        
        if(p==1){
            cout << "NO" << endl;
        }
        else{
            map<char,int>mp;
            f(i,0,n){
                f(j,0,a[i].length()){
                    mp[a[i][j]]++;
                }
            }
            int ans=0;
            f(i,0,n){
                f(j,0,a[i].length()){
                    if(a[i][j]==b[i][j]){
                        mp[a[i][j]]--;
                        continue;
                    }
                    else{
                        if(mp[b[i][j]]>0){
                            mp[b[i][j]]--;
                        }
                        else{
                            ans++;
                        }
                    }
                }
            }
            if(ans<=k){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            
        }
    }
}