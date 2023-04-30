#include <bits/stdc++.h>
// #define int               long long
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

// int v[10000];
int p=sqrt(1e7)+1;
vector<int>v;
void calc(){
    f(i,0,p){
        if(i*i>1e7){
            break;
        }
        v.pb(i*i);
    }
}

vector<int>val;
vector<int>freq(10000001,0);
void value(){
    f(i,0,p){
        if(v[i]+v[i]>1e7){
            break;
        }
        f(j,i,p){
            if(v[i]+v[j]<=1e7){
                if(freq[v[i]+v[j]]==0){
                    freq[v[i]+v[j]]=1;
                    val.pb(v[i]+v[j]);
                }
            }
        }
    }
}
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    calc();
    value();
    sort(all(val));
    while (testcases--){
        int n, p=0, q;
        cin >> n;
        int ans=0;
        int idx = upper_bound(val.begin(),val.end(),n)-val.begin();
        cout << idx << endl;
    }
}