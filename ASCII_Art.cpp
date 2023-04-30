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

bool comp(pair<int,int>p, pair<int,int>q){
    if(p.first==q.first){
        if(p.second>q.second){
            return true;
        }
        return false;
    }
    if(p.first<q.first){
        return true;
    }
    return false;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        int n,p=0,q;
        string ans="IMPOSSIBLE";
        cin >> n;
        while(26*(p*(p+1)/2)<n){
            p++;
        }
        n-=26*(((p-1)*p)/2);
        q=0;
        while(q*p<n){
            q++;
        }
        // cout << q << endl;
        ans='A'+q-1;
        cout << "Case #" << case_num << ": " << ans << endl;
    }
}
