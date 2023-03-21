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
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        set<int>s;
        f(i,0,n){
            s.insert(a[i]);
        }
        int i=0,j=n-1;
        while(i<j){
            if(a[i]==*s.begin()){
                s.erase(*s.begin());
                i++;
                continue;
            }
            if(a[i]==*s.rbegin()){
                s.erase(*s.rbegin());
                i++;
                continue;
            }
            if(a[j]==*s.rbegin()){
                s.erase(*s.rbegin());
                j--;
                continue;
            }
            if(a[j]==*s.begin()){
                s.erase(*s.begin());
                j--;
                continue;
            }
            break;
        }
        if(i<j){
            cout << i+1 << " " << j+1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}