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

#define MAXN 1000001
int spf[MAXN];

void sieve(){
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
 
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++){
        if (spf[i] == i){
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
void getFactorization(int x,map<int,int>&mp){
    while (x != 1){
        mp[spf[x]]=1;
        int t=spf[x];
        while(spf[x]==t)
            x = x / spf[x];
    }
    return;
}



signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    int testcases=1;
    cin >> testcases;
    vector<int>prime;
    for(int i=2;i<=1000000;i++){
        if(spf[i]==i)
            prime.pb(i);
    }
    while (testcases--){
        int n, m, p=0, q;
        cin >> n >> m;
        int a[n];
        inputarray(a,n);
        arraysort(a);
        if(a[0]==a[n-1]){
            cout << 0 << endl;
            continue;
        }
        p=0;
        map<int,int>mp;
        f(i,0,n){
            getFactorization(a[i],mp);
        }
        for(auto i: prime){
            if(i>m){
                break;
            }
            if(!binary_search(a,a+n,i) and mp.find(i)==mp.end()){
                p=i;
                break;
            }
        }
        if(p!=0){
            cout << 1 << endl << p << endl;
        }
        else{
            cout << 2 << endl << 2 << endl << 3 << endl;
        }
    }
}