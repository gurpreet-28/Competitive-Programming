#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 1, n+1) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
//   cin >> t;
  while (t--){
    int n,k, p=-1, q=0,m , x, y;
    cin >> n >> m >> k;
    map<char,int>f;
    char a[n][m];
    vector<vector<int>>v;
    f(i,0,n){
        f(j,0,m){
            cin >> a[i][j];
            if(a[i][j]=='S'){
                v.push_back({i,j});
                continue;
            }
            f[a[i][j]]++;
            
        }
    }
    cin >> p;
    string s;
    set<char>w;
    cin >> s;
    f(i,0,p){
        if(f[s[i]]==0){
            w.insert(s[i]);
        }
    }
    for(auto i : w){
        if(i>='a' && i<='z'){
            q=1;
            break;
        }
    }
    
    x='a'-'A';
    int c=0;
    map<char,int>f1;
    for(auto i: w){
        if(f[i+x]==0){
            q=1;
            break;
        }
    }
    if(q==1 || (v.size()==0 && w.size()!=0)){
        cout << -1 << endl;
        continue;
    }
    for(auto i: w){
        f1[i]=2;
    }
    for(auto i: w){
        q=0;
        y=0;
        for(int j=0;j<n;j++){
            for(int z=0;z<m;z++){
                if(a[j][z]=='S'){continue;}
                if(a[j][z]==i+x){
                    f(b,0,v.size()){
                        int as=((v[b][0]-j)*(v[b][0]-j))+((v[b][1]-z)*(v[b][1]-z))*1.0;
                        if(as<=(k*k)){
                            q=1;
                            break;
                        }
                    }    
                    if(q==1){
                        y=1;
                        f1[i]=1;
                        break;
                    }
                    else{
                        if(f1[i]!=1){
                            f1[i]=2;
                        }
                    }
                }
            }
            if(y==1){
                break;
            }
        }
    }

    // for(char i='a';i<='z';i++){
    //     int fuck=INT_MAX;
    //     if(f[i]==0){continue;}
    //     f(j,0,n){
    //         f(z,0,m){
    //             if(i==a[j][z]){
    //                 fuck=min(((v[0][0]-j)*(v[0][0]-j))+((v[0][1]-z)*(v[0][1]-z)),fuck);
    //             }
    //         }
    //     }
    //     cout << i << "-->" << fuck << endl;
    // }


    f.clear();
    f(i,0,p){
        f[s[i]]++;
    }
    // cout << f['B'] << f['C'] << f['U'] << f['Y'] << f['Z'] << endl;
    // for(auto i: f){
    //     cout << i.first << " " << i.second << endl;
    // }
    
    for(auto i: f1){
        // cout << i.first << " " << i.second << endl;
        if(i.second==2){
            c+=f[i.first];
        }
    }
    cout << c << endl;
    }
}
