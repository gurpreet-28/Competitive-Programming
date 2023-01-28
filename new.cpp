// // #include <bits/stdc++.h>
// // using namespace std;
// // int main (){
// //     int n;
// //     string s;
// //     cin >> s;
// //     n=s.length();
// //     int freq[26]={0};
// //     for(int i=0;i<n;i++){
// //         freq[s[i]-'a']++;
// //     }
// //     int m=0;
// //     for(int i=0;i<n;i++){
// //         m=max(m,freq[s[i]-'a']);
// //     }
// //     for(int i=0;i<n;i++){
// //         if(freq[s[i]-'a']==m){
// //             cout << s[i];
// //             freq[s[i]-'a']--;
// //         }
// //     }cout << endl;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// bool isPrime(int n){
//     if (n <= 1){
//         return false;
//     }
//     for (int i = 2; i <= sqrt(n); i++){
//         if (n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n,p,q,c=0;
//     cin >> n;
//     for(int i=2;i<=n/2;i++){
//         p=i;
//         q=n-i;
//         if(isPrime(p) && isPrime(q)){
//             c=1;
//             break;
//         }
//     }
//     if(c==1){
//         cout << "True" << endl;
//     }
//     else{
//         cout << "False" << endl;
//     }
// }



// #include <bits/stdc++.h>
// #define int               long long
// #define f(i,a,b)          for(int i = a; i < b; i++)
// #define pb                push_back
// #define all(a)            a.begin(), a.end()
// #define arraysort(a)      sort(a, a + n)
// #define endl              "\n"
// #define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
// #define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
// using namespace std;

// signed main(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);
//   int t;
//   cin >> t;
//   while (t--){
//     int n, p, q, r, x, y;
//     cin >> n;
//     int a[n];
//     inputarray(a,n);
//     // sort(a,a+n);
//     // do{
//     //     f(i,0,n){
//     //         cout << a[i] << " ";
//     //     }
//     //     cout << endl;
//     // }while(next_permutation(a,a+n));   
//     int sum = accumulate(a,a+n,0);
//     int it = find(a,a+n,4)-a;
//     cout << sum << "  " << it << endl; 
//   }
// }




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

void printallsubs(int i, int a[], int n, vector<int>&v){
  if(i>=n){
    for(auto i : v){
      cout << i <<" " ;
    }
    cout << endl;
    return ;
  }
  v.pb(a[i]);
  printallsubs(i+1,a,n,v);
  v.pop_back();
  printallsubs(i+1,a,n,v);
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--){
    int n, p, q, r, x, y;
    cin >> n;
    vector<int>v;
    int a[] = {1, 2, 3};
    printallsubs(0,a,n,v);
    
    
    
  }
}