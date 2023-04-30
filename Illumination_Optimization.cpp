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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    for (auto case_num = 1; case_num <= T; ++case_num){
        int n ,m ,r ,y, ans=0, prevEnd=0;
        cin >> m >> r >> n;
        int a[n];
        inputarray(a, n);
        for(int i=0; i<n and prevEnd<m; i++){
            int idx = upper_bound(a, a + n, prevEnd+r)-a;
            idx--;
            if (prevEnd<a[idx]-r){
                break;
            }
            prevEnd = a[idx] + r;
            ans++;
        }
        if(prevEnd >= m){
            cout << "Case #" << case_num << ": " << ans << endl;
        }
        else{
            cout << "Case #" << case_num << ": "<< "IMPOSSIBLE" << endl;
        }
    }
}
