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

vector<int> nextLargerElement(string arr, int n){
    vector <int> ans;
    stack<char>s;
    ans.push_back(-1);
    s.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(s.top()>arr[i]){
            ans.push_back(1);
            s.push(arr[i]);
        }
        else{
            char temp;
            while(!s.empty()){
                temp=s.top();
                if(temp>arr[i]){
                    ans.push_back(1);
                    s.push(arr[i]);
                        break;
                }
                s.pop();
            }
            if(s.empty()){
                ans.push_back(-1);
                s.push(arr[i]);
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

void solve(){
    int n, m, p=0, q;
    string s;    
    cin >> s;
    n=s.length();
    map<char,int>mp;
    mp['A']=1;
    mp['B']=10;
    mp['C']=100;
    mp['D']=1000;
    mp['E']=10000;
    int ans=0;
    vector<int>temp;
    temp=nextLargerElement(s,n);
    f(i,0,n){
        if(temp[i]==-1){
            ans+=mp[s[i]];
        }
        else{
            ans-=mp[s[i]];
        }
    }
    vector<vector<int>>pref(n+1,vector<int>(5,0));
    f(i,0,n){
        for(char c='A';c<='E';c++){
            pref[i+1][c-'A']=pref[i][c-'A'];
            if(temp[i]==-1 and s[i]<c){
                pref[i+1][c-'A']+=mp[s[i]];
            }
        }
    }
    q=ans;
    f(i,0,n){
        p=q;
        if(temp[i]==-1){
            p-=mp[s[i]];
        }
        else{
            p+=mp[s[i]];
        }
        int t=p;
        for(char c='A';c<='E';c++){
            p-=2*pref[i][c-'A'];
            ans=max(ans,p+mp[c]);
            p=t;
        }
    }
    cout << ans << endl;
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
