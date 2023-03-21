#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int sumofdig(int n){
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int dig(int n){
    string s= to_string(n);
    return s.length();
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q;
        cin >> n;

        string num=to_string(n),s1="",s2="";
        while(n!=0){
            q=n%10;
            if(q%2==0){
                s1+=to_string(q/2);
                s2+=to_string(q/2);
            }
            else{
                if(p){
                    int r=q;
                    s1+=to_string(q/2);
                    s2+=to_string(r-(q/2));
                    p=0;
                }
                else{
                    int r=q;
                    s1+=to_string(r-(q/2));
                    s2+=to_string(q/2);
                    p=1;
                }
            }
            n/=10;
        }
        reverse(all(s1));
        reverse(all(s2));
        cout << stol(s1) << " " << stol(s2)<< endl;
    }
}

