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
    int n, m, p=0;
    cin >> n >> m;
    vector<vector<char>>v(n,vector<char>(m));

    vector<vector<bool>>vis(n,vector<bool>(m,false));
    vector<vector<pair<int,int>>>path(n,vector<pair<int,int>>(m));
    f(i,0,n){
        f(j,0,m){
            cin >> v[i][j];
        }
    }    
    int st_i,st_j;
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
            if(v[i][j]=='B'){
                p=1;
            }
        }
    }
    if(p==0){
        cout << "NO" << endl;
        return;
    }
    path[st_i][st_j]={st_i,st_j};
    queue<pair<int,int>>q;
    int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};
    char dir[]={'R','D','L','U'};
    q.push({st_i,st_j});

    int evi=-1,evj=-1;
    while(!q.empty()){
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
 
        if(v[i][j]=='B'){
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
                q.push({ni,nj});
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