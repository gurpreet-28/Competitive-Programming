// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     int n,c=0;
//     cin >> n;
//     vector <int> v (n);
//     for(int i=0;i<n;i++){
//         cin >> v.at(i);
//     }
//     sort(v.begin(),v.end());
//     vector <int> f (v.at(n-1));
//     for(int i=0;i<n;i++){
//         f.at(v.at(i))++;
//     }
//     for(int i=1;i<v.at(n-1);i++){
//         if(f.at(i)>1){
//             c=c+2;
//         }
//         else{
//             c=c+1;
//         }
//     }
//     if(f.at(0)>0){
//         c=c+1;
//     }
//     cout << c << endl;

// }
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,c=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]<0){
            a[i]=a[i]*(-1);
        }
    }
    sort(a,a+n);
    int p=a[n-1];
    int f[p+1]={0};
    for(int i=0;i<n;i++){
        f[a[i]]++;
    }
    for(int i=1;i<p+1;i++){
        if(f[i]>1){
            c=c+2;
        }
        else{
            c=c+f[i];
        }
    }
    if(f[0]>0){
        c=c+1;
    }
    cout << c << endl;
}
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     int n,c=0;
//     cin >> n;
//     int a[n];
//     unordered_map<int,int>f;
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//         if(a[i]<0){
//             a[i]=a[i]*(-1);
//         }
//     }
//     sort(a,a+n);
//     for(int i=0;i<n;i++){
//         f[a[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(f[a[i]]>1){
//             c=c+2;
//         }
//         else{
//             c=c+f[a[i]];
//         }
//     }
//     if(f[0]>0){
//         c=c+1;
//     }
//     cout << c << endl;
// }
// }