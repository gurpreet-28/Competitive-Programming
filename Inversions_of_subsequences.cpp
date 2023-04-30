#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int power(int a, int b, int p){
    if(a==0)
    return 0;
    int res=1;
    a%=p;
    while(b>0)
    {
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}     

vector<int> nextsmaller(int a[], int n) { 
    vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty()){
            if(a[i]>s.top()){
                v.push_back(s.top());
                s.push(a[i]);
                break;
            }
            else{
                s.pop();
            }
        }
        if(s.empty()){
            v.push_back(-1);
        }
        s.push(a[i]);
    }
    reverse(v.begin(),v.end());
    return v;
} 
vector<int> prevGreater(int arr[], int n){
    // Create a stack and push index of first element
    // to it
    vector<int>v;
    v.pb(-1);
    stack<int> s;
    s.push(arr[0]);
     
    for (int i = 1; i < n; i++) {
        while (s.empty() == false && s.top() < arr[i])
            s.pop();
 
        if(s.empty())
            v.pb(-1);
        else{
            v.pb(s.top());
        }
        s.push(arr[i]);
    }
    
    return v;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q,mod=998244353;
        cin >> n;
        set<int>s;
        int a[n];
        inputarray(a,n);
        int b[n]={0};
        vector<int>v=nextsmaller(a,n);
        vector<int>v1=prevGreater(a,n);
        q=0;
        f(i,0,n){
            if(v[i]==-1 and v1[i]==-1)
                q++;
        }
        p=0;
        if(q==n){
            p=1;
        }
        cout << (power(2,q,mod)-p+mod)%mod << endl;
    }
}
