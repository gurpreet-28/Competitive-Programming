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

int check(string& s, int n, int x, int y, int mid,int p, int r){
    int ans=0;
    if(s[mid]=='+'){
        ans=ans+((mid+1)*x);
        ans=ans+((p-mid-1)*y);
        ans=ans-(r*y);
    }
    else{
        ans=ans+(p*x);
        ans=ans-((mid+1-p)*x);
        ans=ans-((n-mid-1)*y);
    }
    return ans;
}

void solve(){
    int n, m, p=0, r=0,q;
    cin >> n;
    string s;
    cin >> s;
    cin >> q;
    sort(all(s));
    f(i,0,n){
        if(s[i]=='+'){
            p++;
        }
        else{
            r++;
        }
    }
    s="";
    m=p;
    while(m--){
        s+='+';
    }
    m=r;
    while(m--){
        s+='-';
    }
    while(q--){
        int x,y;
        cin >> x >> y;
        if(p==r){
            cout << "YES" << endl;
            continue;
        }
        int lj=0,rj=n-1;
        int ans=0;
        while(lj<=rj){
            int mid=(lj+rj)/2;
            int cal=check(s,n,x,y,mid,p,r);
            if(cal==0){
                ans=1;
                break;
            }
            if(cal<0){
                if(s[mid]=='-'){
                    if(x>y){
                        rj=mid-1;
                    }
                    else{
                        lj=mid+1;
                    }
                }
                else{
                    if(x>y){
                        lj=mid+1;
                    }
                    else{
                        rj=mid-1;
                    }
                }
            }
            else{
                if(s[mid]=='-'){
                    if(x>y){
                        lj=mid+1;
                    }
                    else{
                        rj=mid-1;
                    }
                }
                else{
                    if(x>y){
                        rj=mid-1;
                    }
                    else{
                        lj=mid+1;
                    }
                }
            }
        }
        if(ans==1){
            cout << "YES" << endl;
        }
        else{
            swap(x,y);
            lj=0,rj=n-1;
            while(lj<=rj){
                int mid=(lj+rj)/2;
                int cal=check(s,n,x,y,mid,p,r);
                if(cal==0){
                    ans=1;
                    break;
                }
                if(cal<0){
                    if(s[mid]=='-'){
                        if(x>y){
                            rj=mid-1;
                        }
                        else{
                            lj=mid+1;
                        }
                    }
                    else{
                        if(x>y){
                            lj=mid+1;
                        }
                        else{
                            rj=mid-1;
                        }
                    }
                }
                else{
                    if(s[mid]=='-'){
                        if(x>y){
                            lj=mid+1;
                        }
                        else{
                            rj=mid-1;
                        }
                    }
                    else{
                        if(x>y){
                            rj=mid-1;
                        }
                        else{
                            lj=mid+1;
                        }
                    }
                }
            }
            if(ans==1){
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
    // cin >> testcases;
    while (testcases--){
        solve();
    }
}