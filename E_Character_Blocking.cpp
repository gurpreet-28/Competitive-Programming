#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a,n)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int power(int a, int b, int p){
    if(a==0)
        return 0;
    int res=1;
    a%=p;
    while(b>0){
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}

int lcm(int a, int b){
    if(a==0 || b==0)
        return 0;
    return (a*b)/__gcd(a,b);
}

void solve(){
    int n, m, p=0, q;
    string s1,s2;
    cin >> s1 >> s2;
    n=s1.length();
    int time;
    cin >> time >> q;
    map<int,int>mp;
    set<int>st;
    f(i,0,n){
        if(s1[i]!=s2[i]){
            st.insert(i);
        }
    }
    int blocked=0;
    f(t,0,q){        
        
        if(mp[t]>0){
            blocked-=mp[t];
            mp.erase(t);
        }
        int type;
        cin >> type;

        if(type == 1){
            int pos;
            cin >> pos;
            blocked++;
            mp[t+time]++;
        }

        else if(type == 2){
            int x,y,w,z;
            cin >> x >> y >> w >> z;
            y--;
            z--;
            if(s1[y]!=s2[y]) st.erase(y);
            if(s1[z]!=s2[z]) st.erase(z);
            
            if(x==1 and w==1){
                swap(s1[y],s1[z]);
            }
            if(x==1 and w==2){
                swap(s1[y],s2[z]); 
            }
            if(x==2 and w==1){
                swap(s2[y],s1[z]);   
            }
            if(x==2 and w==2){
                swap(s2[y],s2[z]); 
            }

            if(s1[y]!=s2[y]) st.insert(y);
            if(s1[z]!=s2[z]) st.insert(z);

        }
        
        else{
            
            if(blocked==(int)st.size()){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }



}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}

