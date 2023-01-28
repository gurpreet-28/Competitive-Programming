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

#define MAXN   1000001
 
// stores smallest prime factor for every number
int spf[MAXN];
 
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
 

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  sieve();
  int t;
  cin >> t;
  while (t--){
    int n, p=0, q , a, b, x=0, y=0,counter=0;
    double z=0;
    cin >> a >> b;
    vector<int>v1 = getFactorization(a);
    vector<int>v2 = getFactorization(b);
    // printarray(v1,v1.size());
    // printarray(v2,v2.size());
    sort(all(v1));
    sort(all(v2));
    p=v1[0];
    set<int>s;
    f(i,0,v1.size()){
        s.insert(v1[i]);
    }
    f(i,0,v2.size()){
        s.insert(v2[i]);
    }
    vector<double>v;
    // f(i,0,v1.size()){
    //     if(v1[i]==p){
    //         x++;
    //     }
    // }
    // f(i,0,v2.size()){
    //     if(v2[i]==p){
    //         y++;
    //     }
    // }
    // z=(1.0*x)/y;
    for(auto i: s){
        p=i;
        x=0,y=0;
        f(i,0,v1.size()){
        if(v1[i]==p){
            x++;
        }
        }
        f(i,0,v2.size()){
        if(v2[i]==p){
            y++;
        }
        }
        z=(1.0*x)/y;
        v.pb(z);
    }
    sort(all(v));
    if((v[0]==v[v.size()-1])){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
}
