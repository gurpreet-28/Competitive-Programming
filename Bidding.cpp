// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     int a,b,c;
//     cin >> a >> b >> c;
//     if(a > b && a > c){
//         cout << "Alice" << endl;
//     }
//     if(a < b && b > c){
//         cout << "Bob" << endl;
//     }
//     if(c > b && a < c){
//         cout << "Charlie" << endl;
//     }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     long long int x,y,n,r;
//     cin >> x >> y >> n >> r;
//     if(x*n>r){
//         cout << -1 << endl;
//     }
//     else if((r-x*n)/y>=n){
//         cout << 0 << " " << n << endl;
//     }
//     else{
//         long long int p;
//         p=(r-(x*n))/(y-x);
//         cout << n - p << " " << p << endl;
//     }
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     int a,b,n;
//     cin >> a >> b >> n;
//     int i=ceil(n/a);
//     if(n%a==0){
//         i=n;
//     }
//     else{
//         i=(n/a+1)*a;
//     }
//     // cout << i << endl;
//     if(a%b==0){
//         cout << -1 << endl;
//     }
//     else{
//     while(1){
//         if(i%b!=0){
//             cout << i << endl;
//             break;
//         }
//         i=i+a;
//     }
//     }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     long long int n,m,p,q,a,b,maxi=INT_MIN;
//     cin >> n >> m ;
//     a=n;
//     b=n;
//     if(m<1000000){
//     while(n<=m){
//         b=m/n;
//         a=b*n;
//         // cout << a << " " << n <<endl;
//         if(maxi<a-n){
//             maxi=a-n;
//             p=a;
//             q=n;
//         }
//         n++;
//     }
//     n--;
//     cout << q << " " << p << endl;
//     // cout << maxi << endl;
//     }
//     else{
//         while(n<=1000000){
//         b=m/n;
//         a=b*n;
//         // cout << a << " " << n <<endl;
//         if(maxi<a-n){
//             maxi=a-n;
//             p=a;
//             q=n;
//         }
//         n++;
//     }
//     n--;
//     cout << q << " " << p << endl;
//     // cout << maxi << endl;
//     }
//     }
// }


