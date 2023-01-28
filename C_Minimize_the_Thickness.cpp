#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q=0,ans=0,k=0,prevEnd=0;
        cin >> n;
        int a[n];
        inputarray(a,n);
        p=a[0];
        vector<int>v;
        while(k<n){
            prevEnd=k;
            ans=k+1;
            q=0;
            int temp=0;
            f(i,k+1,n){
                temp+=a[i];
                if(temp==p){
                    temp=0;
                    ans=max(ans,i-prevEnd);
                    prevEnd=i;
                    if(i==n-1){
                        q=1;
                        break;
                    }
                }
                if(temp>p){
                    break;
                }
            }
            if(q==1){
                v.push_back(ans);
            }
            k++;
            p+=a[k];
        }
        if(!v.empty()){
            cout << *min_element(all(v)) << endl;
        }
        else{
            cout << n << endl;
        }
    }
}