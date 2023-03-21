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


void func(int& i,int& j,int& n,int& m, string& d, int& ans){
    if(i==1 and j==1 and d=="UL"){
        d="DR";
        ans++;
        return;
    }
    if(i==1 and j==m and d=="UR"){
        d="DL";
        ans++;
        return;
    }
    if(i==n and j==1 and d=="DL"){
        d="UR";
        ans++;
        return;
    }
    if(i==n and j==m and d=="DR"){
        d="UL";
        ans++;
        return;
    }
    if(i==1 and d[0]=='U'){
        d[0]='D';
        ans++;
        return;
    }
    
    if(i==n and d[0]=='D'){
        d[0]='U';
        ans++;
        return;
    }
    
    if(j==1 and d[1]=='L'){
        d[1]='R';
        ans++; 
        return;
    }
    if(j==m and d[1]=='R'){
        d[1]='L';
        ans++; 
        return;
    }
    if(d=="DR"){
        i++;
        j++;
    }
    if(d=="DL"){
        i++;
        j--;
    }
    if(d=="UR"){
        i--;
        j++;
    }
    if(d=="UL"){
        i--;
        j--;
    }
}


signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q;
        int i,i2,j,j2;
        string d;
        cin >> n >> m >> i >> j >> i2 >> j2 >> d;
        map<string,int>mp;
        int st=i,en=j;
        mp[d]=1;
        int ans = 0;
        bool flag = false;
        if(i==i2 and j==j2){
            flag = true;
        }
        while(!flag){
            func(i,j,n,m,d,ans);
            if(i==i2 and j==j2){
                flag = true;
                break;
            }
            if(i==st and j==en){
                if(mp[d]==1)
                    break;
                mp[d]=1;
            }
        }
        if(flag){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}