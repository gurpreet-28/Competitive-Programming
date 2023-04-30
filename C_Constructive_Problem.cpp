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

int mex(int arr[], int N){
    int b[N];
    f(i,0,N){
        b[i]=arr[i];
    }
    sort(b,b+N);
    int mex = 0;
    for (int idx = 0; idx < N; idx++){
        if (b[idx] == mex){
            mex += 1;
        }
    }
    return mex;
}


signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        p=mex(a,n);
        if(p==0){
            cout << "Yes" << endl;
            continue;
        }
        if(p==n){
            cout << "No" << endl;
            continue;
        }
        p++;
        int x=-1,y=-1;
        f(i,0,n){
            if(a[i]==p){
                x=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]==p){
                y=i;
                break;
            }
        }
        int ans=1;
        f(i,x,y+1){
            a[i]=p-1;
        }
        if(x==-1 || y==-1){
            if(p-1<n){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
            continue;
        }
        ans=mex(a,n);
        if(ans!=p){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
        
    }
}