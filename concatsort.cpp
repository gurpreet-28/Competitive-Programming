// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     int n,i;
//     cin >> n;
//     int a[n],b[n];
//     // vector <int,int> v;
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//         b[i]=a[i];
//     }
//     sort(b,b+n);
//     int p,q=0,r=0;
//     p=b[r];
    
//     for(i=0;i<n;i++){
//         if(a[i]==p){
//             // cout << p << endl;
//             r++;
//             if(r==n){
//                 break;
//             }
//             p=b[r];
//         }

//     }
//     if(r==n){
//         cout << "YES" << endl;
//     }
//     else{
//     // cout << p << endl;
//     for(i=0;i<n;i++){
//         if(a[i]==p){
//             r++;
//             if(r==n){
//                 break;
//             }
//             p=b[r];
//             // cout << p << endl;
//             continue;
//         }
//         if(a[i]>p){
//             q=1;
//             break;
//         }
//     }
//     if(q==1){
//         cout << "NO" << endl;
//     }
//     else{
//         cout << "YES" << endl;
//     }
//     }
// }
// }
#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long int n;
    map <ll int,ll int> g1;

    cin>>n;
    int count=0;
    long long int a[n],x;
    for (long long int i = 0; i < n; ++i)
    {
      cin>>a[i];
    }

    vector<pair<long long int,long long int>> v;
    for (long long int i = 0; i < n; ++i)
    {
      v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(),v.end());
    x=v[0].second;
    for (long long int i = 1; i <= n-1; ++i)
    {
        if(g1[v[i].first]==1)
        continue;
      if(v[i].second<x){
        g1[v[i].first]=1;
        count++;
      }
      x=v[i].second;
    }
      if(count<=1) cout<<"YES";
      else cout<<"NO";
      cout<<endl;

    }
}