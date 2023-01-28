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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n,p=0,ans=0,q=0,r;
        cin >> n;
        int a[n];
        inputarray(a,n);
        f(i,0,n){
            a[i]%=3;
        }
        sort(a,a+n);
        int divi[3]={0};
        f(i,0,n){
            divi[a[i]%3]++;
        }
        if(divi[2]<divi[1]){
            swap(divi[2],divi[1]);
        }
        while(abs(divi[2]-divi[1])>2){
            divi[2]-=2;
            divi[1]+=2;
            ans++;
        }
        if(divi[2]<divi[1]){
            swap(divi[2],divi[1]);
        }
        ans+=divi[1];
        if(divi[2]-divi[1]==1){
            if((divi[0]!=0 && divi[1]==1) || divi[1]>1){
                ans+=2;
            }
            else{
                ans+=6;
            }
        }
        else if(divi[2]-divi[1]==2){
            if((divi[0]!=0 && divi[1]==1) || divi[1]>1){
                ans+=4;
            }
            else{
                ans+=5;
            }
        }
        cout << ans << endl;
    }
}