#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, p=0, q, r=0,m ,k , j, x, y;
        string s,w;
        cin >> s >> w;
        n=s.length();
        m=w.length();
        if(s==w){
            cout << "=" << endl;
            continue;
        }
        if(s[n-1]=='L'){
            if(w[m-1]=='S'){
                cout << ">" << endl;
                continue;
            }
            if(w=="M"){
                cout << ">" << endl;
                continue;
            }
            else{
                if(n>m){
                    cout << ">" << endl;
                }
                else{
                    cout << "<" << endl;
                }
            }
            continue;
        }
        if(s[n-1]=='S'){
            if(w[m-1]=='L'){
                cout << "<" << endl;
                continue;
            }
            if(w=="M"){
                cout << "<" << endl;
                continue;
            }
            else{
                if(n>m){
                    cout << "<" << endl;
                    continue;
                }
                else{
                    cout << ">" << endl;
                    continue;
                }
            }
            continue;
        }
        if(s=="M"){
            if(w[m-1]=='S'){
                cout << ">" << endl;
                continue;
            }
            if(w[m-1]=='L'){
                cout << "<" << endl;
                continue;
            }
        }

    }
}