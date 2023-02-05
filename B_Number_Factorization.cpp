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

vector<int> primeFactors(int n)
{
    vector<int>v;
    while (n % 2 == 0){
        v.pb(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2){
        while (n % i == 0){
            v.pb(i);
            n = n/i;
        }
    }
 
    if (n > 2)
        v.pb(n);
    return v;    
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, p=0, q;
        cin >> n;
        vector<int>v=primeFactors(n);
        map<int,int>m;
        f(i,0,v.size()){
            m[v[i]]++;
        }
        int mx=0;
        for(auto i: m){
            mx=max(i.second,mx);
        }
        int a[mx];
        f(i,0,mx){
            a[i]=1;
        }
        int i=0;
        for(auto ele: m){
            int i=0;
            while(ele.second){
                a[i]*=ele.first;
                ele.second--;
                i++;
            }
        }
        int sum=0;
        f(i,0,mx){
            sum+=a[i];
        }
        cout << sum << endl;

    }
}