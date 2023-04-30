// #include <bits/stdc++.h>
// #define int               long long
// #define f(i,a,b)          for(int i=a;i<b;i++)
// #define mp                make_pair
// #define pb                push_back
// #define rall(a)           a.rbegin(),a.rend()
// #define all(a)            a.begin(),a.end()
// #define arraysort(a)      sort(a,a+n)
// #define endl              "\n"    
// #define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
// #define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
// using namespace std;

// int q=0;
// void dfs_cycle(int u, int p, int color[], int par[],vector<int> graph[], bool& flag){
//     if (color[u] == 2) {
//         return;
//     }

//     if (color[u] == 1) {
//         vector<int> v;
//         vector<pair<int,int>> vp;
        
//         int cur = p;
//         v.push_back(cur);

//         while (cur != u) {
//             vp.pb(mp(cur,par[cur]));
//             cur = par[cur];
//             v.push_back(cur);
//         }
//         vp.pb(mp(cur,p));

//         map<int,int>mp;
//         vector<pair<int,int>>pa;
//         false;
//         f(i,0,v.size()){
//             mp[v[i]]++;
//         }
//         for(auto i: v){
//             int p=0;
//             for(auto g: graph[i]){
//                 if(mp.find(g)==mp.end()){
//                     pa.pb({i,g});
//                     p++;
//                 }
//                 if(p>=2){
//                     flag=true;
//                     break;
//                 }
//             }
//             if(p>=2){
//                 flag=true;
//                 break;
//             }
//             pa.clear();
//             mp.clear();
//         }
//         if(flag and q==0){
//             q++;
//             cout << "YES" << endl;
//             cout << vp.size()+2 << endl;
//             for(int j=0;j<vp.size();j++){
//                 cout << vp[j].second << " " << vp[j].first << endl;
//             }
//             for(auto j: pa){
//                 cout << j.first << " " << j.second << endl;
//             }
//         }
//         return;
//     }
//     par[u] = p;

//     color[u] = 1;

//     for (int v : graph[u]) {
//         if (v == par[u]) {
//             continue;
//         }
//         dfs_cycle(v, u, color, par, graph,flag);
//     }
//     color[u] = 2;
// }

// signed main(){
//     int t=1;
//     cin >> t;
//     while(t--){
//         int n,m;
//         cin >> n >> m;
//         q=0;
//         vector<int> graph[n+1];
//         f(i,0,m){
//             int u,v;
//             cin >> u >> v;
//             graph[u].push_back(v);
//         	graph[v].push_back(u);
//         }
//         int color[n+1];
//         int par[n+1];
//         bool flag=false;
//         dfs_cycle(1,0,color,par,graph,flag);
//         if(q==0){
//             cout << "NO" << endl;
//         }
//     }
// }



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

vector<vector<int>> cycles;

void dfs_cycle(int u, int p, int color[], int par[],vector<int> graph[],vector<vector<pair<int,int>>>& edges){

	if (color[u] == 2) {
		return;
	}

	if (color[u] == 1) {
		vector<int> v;
		vector<pair<int,int>> vp;
		
		int cur = p;
		v.push_back(cur);

		while (cur != u) {
            vp.pb(mp(cur,par[cur]));
			cur = par[cur];
			v.push_back(cur);
		}
        vp.pb(mp(cur,p));
		cycles.push_back(v);
        edges.pb(vp);
		return;
	}
	par[u] = p;

	color[u] = 1;

	for (int v : graph[u]) {
		if (v == par[u]) {
			continue;
		}
		dfs_cycle(v, u, color, par, graph,edges);
	}
	color[u] = 2;
}

signed main(){
    int t=1;
    cin >> t;
    while(t--){
        cycles.clear();
        int n,m;
        cin >> n >> m;
        vector<int> graph[n+1];
        f(i,0,m){
            int u,v;
            cin >> u >> v;
            graph[u].push_back(v);
        	graph[v].push_back(u);
        }
        int color[n+1];
        int par[n+1];
        vector<vector<pair<int,int>>> edges;
        dfs_cycle(1,0,color,par,graph,edges);
        bool flag=false;
        map<int,int>mp;
        vector<pair<int,int>>pa;
        int ans=-1;
        f(j,0,cycles.size()){
            f(i,0,cycles[j].size()){
                mp[cycles[j][i]]++;
            }
            for(auto i: cycles[j]){
                int p=0;
                for(auto g: graph[i]){
                    if(mp.find(g)==mp.end()){
                        pa.pb({i,g});
                        p++;
                    }
                    if(p>=2){
                        ans=j;
                        flag=true;
                        break;
                    }
                }
                if(p>=2){
                    ans=j;
                    flag=true;
                    break;
                }
            }
            if(flag){
                break;
            }
            pa.clear();
            mp.clear();
        }
        if(!flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << edges[ans].size()+2 << endl;
            for(int j=0;j<edges[ans].size();j++){
                cout << edges[ans][j].second << " " << edges[ans][j].first << endl;
            }
            for(auto j: pa){
                cout << j.first << " " << j.second << endl;
            }
        }
        cycles.clear();
    }
}
