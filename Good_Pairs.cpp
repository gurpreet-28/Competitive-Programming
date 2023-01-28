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
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,p,b,q=0,r,x=0,y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    map<int,int>f;
    f(i,0,n){
        f[a[i]]++;
    }
    int ans=0;
    f(i,0,n){
        if(f[a[i]]>1){
            ans+=(f[a[i]]*(f[a[i]]-1))/2;
            f[a[i]]=0;
        }
    }
    cout << ans << endl;
  }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         // int size = 100006;

//         unordered_map<int, int> freq;
//         for (int i = 0; i < n; i++)
//             freq[a[i]]++;

//         // for (int i = 0; i < n; i++)
//         //     cout << freq[a[i]] << " ";
//         // cout << endl;

//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             ans+=(freq[a[i]]*(freq[a[i]]-1))/2;
//             freq[a[i]]=0;
//         }

//         cout << ans << endl;
//     }
// }