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

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q, t1, t2;
        cin >> n >> t1 >> t2;
        int a[n];
        inputarray(a,n);
        vector<pair<int,int>>v;
        f(i,0,n){
            v.pb({a[i],i+1});
        }
        sort(rall(v));
        vector<int>v1,v2;
        int s1=0,s2=0;
        int i=0;
        while(i<n){
            int search_time_1 = (s1+1)*t1;
            int search_time_2 = (s2+1)*t2;
            if(search_time_1<search_time_2){
                v1.pb(v[i].second);
                s1++;
            }
            else{
                v2.pb(v[i].second);
                s2++;
            }
            i++;
        }
        cout << s1 << " ";
        printarray(v1,s1);
        
        cout << s2 << " ";
        printarray(v2,s2);
        cout << nearbyint(5.6);
    }
}