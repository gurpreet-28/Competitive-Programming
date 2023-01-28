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
  int t=1;
  cin >> t;
  while (t--){
    int n, p=0, q=0, r, j, x, y, o=0,z=0;
    cin >> n;
    string s, w, tmp1, tmp2;
    cin >> s >> w;
    tmp1=s;
    tmp2=w;
    int a[n],b[n],c[n];
    f(i,0,n){
        a[i]=s[i]-'0';
        b[i]=w[i]-'0';
        c[i]=(a[i]^b[i]);
    }
    if(n==1){
        if(b[0]==0){
            cout << "YES" << endl;
            cout << "1 1" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        continue;
    }
    int allzero=0;
    f(i,0,n){
        if(a[i]!=0 || b[i]!=0){
            allzero=1;
            break;
        }
    }
    if(allzero==0){
        cout << "YES" << endl;
        cout << 0 << endl;
        continue;
    }
    p=c[0];
    f(i,0,n){
        if(c[i]!=p){
            q=1;
            break;
        }
    }
    p=0;
    if(q==1){
        cout << "NO" << endl;
        continue;
    }
    if(s==w){
        cout << "YES" << endl;
        vector<pair<int,int>>vx;
        string s1;
        s1+=s[0];
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                s1+=s[i+1];
            }
        }
        int r1=0;
        // cout << s1 << endl;
        f(i,0,n){
            if(s1[i]=='1'){
                r1++;
            }
        }
        int a3=0;
        p=0;
        f(i,0,n){
            if(a[i]==1 && p==0){
                a3=i+1;
                p=1;
            }
            if(a[i]==0 && p==1){
                vx.pb(make_pair(a3,i));
                p=0;
            }
        }
        if(p==1){
            vx.pb(make_pair(a3,n));
        }
        if(r1%2==0){
           cout << vx.size() << endl;
           f(i,0,vx.size()){
            cout << vx[i].first << " " << vx[i].second << endl;
        // for(j=vx[i].first-1;j<vx[i].second;j++){
        //             if(tmp1[j]=='0')
        //             tmp1[j]='1';
        //             else
        //             tmp1[j]='0';
        //         }
        //         for(j=0;j<n;j++){
        //             if(j>=vx[i].first-1&&j<vx[i].second)
        //             continue;
        //             if(tmp2[j]=='0')
        //             tmp2[j]='1';
        //             else
        //         tmp2[j]='0';
        //         }
        }
            // cout << tmp1 << endl << tmp2 << endl;
        //    } 
        }
        else{
            vx.pb(make_pair(1,1));
            vx.pb(make_pair(2,n));
            vx.pb(make_pair(1,n));
            cout << vx.size() << endl;
            f(i,0,vx.size()){
                cout << vx[i].first << " " << vx[i].second << endl;
        // }
                // for(j=vx[i].first-1;j<vx[i].second;j++){
                //     if(tmp1[j]=='0')
                //     tmp1[j]='1';
                //     else
                //     tmp1[j]='0';
                // }
                // for(j=0;j<n;j++){
                //     if(j>=vx[i].first-1&&j<vx[i].second)
                //     continue;
                //     if(tmp2[j]=='0')
                //     tmp2[j]='1';
                //     else
                // tmp2[j]='0';
                // }
        }
            // cout << tmp1 << endl << tmp2 << endl;
        }
        vx.clear();
        continue;
    }
    vector<pair<int,int>>v;
        int ans=0;
        cout << "YES" << endl;
        p=0;
        f(i,0,n){
            if(a[i]==1 && p==0){
                ans++;
                p=1;
            }
            if(a[i]==0 && p==1){
                p=0;
            }
        }
        p=0;
        int temp=0;
        if(c[0]==1){
            if(ans%2==0){
                temp=1;
                ans+=3;
            }
        }
        int a1,a2;
        f(i,0,n){
            if(a[i]==1 && p==0){
                a1=i+1;
                p=1;
            }
            if(a[i]==0 && p==1){
                v.pb(make_pair(a1,i));
                p=0;
            }
        }
        if(p==1){
            v.pb(make_pair(a1,n));
        }
        if(temp==1){
            v.pb(make_pair(1,1));
            v.pb(make_pair(2,n));
            v.pb(make_pair(1,n));
        }
            cout << v.size() << endl;
            f(i,0,v.size()){
                cout << v[i].first << " " << v[i].second << endl;
            // }
                // for(j=v[i].first-1;j<v[i].second;j++){
                //     if(tmp1[j]=='0')
                //     tmp1[j]='1';
                //     else
                //     tmp1[j]='0';
                // }
                // for(j=0;j<n;j++){
                //     if(j>=v[i].first-1&&j<v[i].second)
                //     continue;
                //     if(tmp2[j]=='0')
                //     tmp2[j]='1';
                //     else
                // tmp2[j]='0';
                // }
            }
            // cout << tmp1 << endl << tmp2 << endl;
            v.clear();
        }
}