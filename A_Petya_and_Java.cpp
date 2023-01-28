#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 1, n+1) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
//   cin >> t;
  while (t--){
    int n,k, p=0, q=0, x, y;
    string s;
    cin >> s;
    // cout << s << endl;
    n=s.length();
    string r="-9223372036854775808";
    if(s==r){
        cout << "long" << endl;
        continue;
    }
    if(s[0]=='-'){
        n--;
    }
    if(s[0]=='-'){
        s=s.substr(1,n);
        if(n>19){
            cout << "BigInteger" << endl;
            continue;
        }
        if(n==19){
            if(s>to_string(INT64_MAX)){
                cout << "BigInteger" << endl;
            }
            else{
                cout << "long" << endl;
            }
            continue;
        }
        p=0;
        for(int i=n-1;i>=0;i--){
            p+=((s[i]-'0')*pow(10,n-i-1));
        }
        p*=(-1);
        // cout << p << endl;
        if(p>=-128){
            cout << "byte" << endl;
        }
        else if(p>=-32768){
            cout << "short" << endl;
        }
        else if(p>=-2147483648){
            cout << "int" << endl;
        }
        else{
            cout << "long" << endl;
        }
    }
    else{
        if(n>19){
            cout << "BigInteger" << endl;
            continue;
        }
        if(n==19){
            if(s>to_string(INT64_MAX)){
                cout << "BigInteger" << endl;
            }
            else{
                cout << "long" << endl;
            }
            continue;
        }
        p=0;
        for(int i=n-1;i>=0;i--){
            p+=((s[i]-'0')*pow(10,n-1-i));
        }
        // cout << p << endl;
        if(p<128){
            cout << "byte" << endl;
        }
        else if(p<32768){
            cout << "short" << endl;
        }
        else if(p<2147483648){
            cout << "int" << endl;
        }
        else{
            cout << "long" << endl;
        }
    }
  }
}
