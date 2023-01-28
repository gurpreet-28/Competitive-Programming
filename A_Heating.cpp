#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,c,sum,k,p,q;
    cin >> c >> sum;
    p=sum/c;
    vector<int>v(c,0);
    f(i,0,c){
        v[i]=p;
    }
    int i=0;
    q=sum-(p*c);
    k=q/c;
    f(i,0,c){
        v[i]-=k;
    }
    q=q%c;
    while(q!=0){
        v[i%c]++;
        q--;
        i++;
    }
    // int j=c-1;
    // i=0;
    // while(i<=j){
    //     if(v[j]==0){
    //         v[j]=v[i]/2;
    //         v[i]=v[i]-v[j];
    //         j--;
    //         i++;
    //         continue;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // sort(all(v));
    // i=0,j=c-1;
    // while(i<=j){
    //     int x=v[i]+v[j];
    //     v[j]=x/2;
    //     v[i]=x-v[j];
    //     j--;
    //     i++;
    // }
    int s=0;
    for(int i=0;i<c;i++){
        // cout << v[i] << " ";
        s+=(v[i]*v[i]);
    }
    // cout << endl;
    // printarray(v,n);
    cout << s << endl;
  }
}