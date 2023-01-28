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

bool powerof2(int n){
    float i = log2(n);
    if (ceil(i) == floor(i)) {
        return 1;
    }
    return 0;
}
signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  cin >> t;
  while (t--){
    int n,k,p=0;
    cin >> n;   
    string s="BAN";
    n--;
    f(i,0,n){
        s+="BAN";
    }
    n++;
    p=0;
    if(n==1){
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
        continue;
    }
    if(n%2==0){
        int i=1,j=3*n;
        while(i<j){
            i+=3;
            j-=3;
            p++;
        }
    }
    else{
        int i=1,j=3*n;
        while(i<j){
            i+=3;
            j-=3;
            p++;
        }
    }
    cout << p << endl;
    if(n%2==0){
        int i=1,j=3*n;
        while(i<j){
            cout << i << " " << j << endl;
            // swap(s[i-1],s[j-1]);
            i+=3;
            j-=3;
        }
    }
    else{
        int i=1,j=3*n;
        while(i<j){
            cout << i << " " << j << endl;
            // swap(s[i-1],s[j-1]);
            i+=3;
            j-=3;
        }
    }
    // cout << s << endl;
    }
}