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
        string s,w;
        cin >> s >> w;
        if(n==1){
            if(s==w){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            continue;
        }
        string t1="",t2="";
        f(i,0,n){
            if(s[i]!='b'){
                t1+=s[i];
            }
            if(w[i]!='b'){
                t2+=w[i];
            }
        }
        if(t1!=t2){
            cout << "NO" << endl;
        }
        else{
            bool flag=false;
            int p=0,q=0;
            for(int i=n-1;i>=0;i--){
                if(s[i]=='a'){
                    p++;
                }
                if(w[i]=='a'){
                    q++;
                }
                if(p>q){
                    flag=true;
                    break;
                }
                // cout << p << " " << q << endl;
            }
            p=0,q=0;
            if(!flag){
                for(int i=n-1;i>=0;i--){
                    if(s[i]=='c'){
                        p++;
                    }
                    if(w[i]=='c'){
                        q++;
                    }
                    if(p<q){
                        flag=true;
                        break;
                    }
                    // cout << p << " " << q << endl;
                }
            }
            if(flag){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}