#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int p=0;
        string s, w;
        cin >> s >> w;
        sort(all(s));
        int n = w.length();
        int m = s.length();
        for (int i = 0; i < n - m + 1; ++i)
        {
            string temp;
            for (int j = 0; j < m; j++){
                temp.push_back(w[i + j]);
            }
            sort(all(temp));
            if (temp == s){
                p=1;
            }
        }
        if(p==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}