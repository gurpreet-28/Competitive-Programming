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

vector<int> primeFactors(int n){
    vector<int> v;
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
        int n,p=0,q;
        cin >> n;
        vector<int>temp=primeFactors(n);
        p=temp.size();
        map<int,int>m;
        f(i,0,p){
            m[temp[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto i : m){
            v.pb(mp(i.second,i.first));
        }
        sort(all(v));
        reverse(all(v));
        n=v[0].first;
        int a[n];
        f(i,0,n){
            a[i]=1;
        }
        int j=0;
        int i=0;
        // f(i,0,v.size()){
        //     cout << v[i].second << " " << v[i].first<< endl;
        // }
        cout << n << endl;
        while(i<v.size()){
            f(k,0,v[i].first){
                a[k]*=v[i].second;
            }
            i++;
        }
        reverse(a,a+n);
        printarray(a,n);
    }
}