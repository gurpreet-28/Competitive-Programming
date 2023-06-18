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
 
void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>>v(n,vector<char>(m));

    vector<vector<bool>>vis(n,vector<bool>(m,false));
    vector<vector<pair<int,int>>>path(n,vector<pair<int,int>>(m));
    int st_i=0,st_j=0;
    f(i,0,n){
        f(j,0,m){
            cin >> v[i][j];
            if(v[i][j]=='A'){
                st_i=i;
                st_j=j;
            }
        }
    }    
    path[st_i][st_j]={st_i,st_j};
    queue<pair<pair<int,int>,int>>q;
    f(i,0,n){
        f(j,0,m){
            if(v[i][j]=='A'){
                st_i=i;
                st_j=j;
                vis[i][j]=true;
            }
            if(v[i][j]=='#'){
                vis[i][j]=true;
            }
            if(v[i][j]=='M'){
                q.push({{i,j},1});
                vis[i][j]=true;
            }
        }
    }
    q.push({{st_i,st_j},0});
    int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};

    int evi=-1,evj=-1;
    while(!q.empty()){
        int i=q.front().first.first;
        int j=q.front().first.second;
        int t=q.front().second;
        q.pop();
 
        if((i==0 || i==n-1 || j==0 || j==m-1 ) and t==0){
            evi=i;
            evj=j;
            break;
        }

        f(k,0,4){
            int ni=i+dx[k];
            int nj=j+dy[k];
            if(ni>=0 and ni<n and nj>=0 and nj<m and !vis[ni][nj]){
                vis[ni][nj]=true;
                path[ni][nj]={i,j};
                q.push({{ni,nj},t});
            }
        }
    }
    if(evi!=-1){
        cout << "YES" << endl;
        string ans="";
        while(1){
            if(evi==path[evi][evj].first and evj!=path[evi][evj].second){
                if(evj>path[evi][evj].second){
                    ans+='R';
                }
                else{
                    ans+='L';
                }
            }
            else if(evi!=path[evi][evj].first and evj==path[evi][evj].second){
                if(evi>path[evi][evj].first){
                    ans+='D';
                }
                else{
                    ans+='U';
                }
            }
            int x=path[evi][evj].first;
            int y=path[evi][evj].second;
            evi=x;
            evj=y; 
            if(evi==path[evi][evj].first and evj==path[evi][evj].second){
                break;
            }
        }
        reverse(all(ans));
        cout << ans.length() << endl;
        cout << ans << endl;
    }
    else{
        cout << "NO" << endl;
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