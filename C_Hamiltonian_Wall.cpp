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

int func(int i,int j,int n,vector<vector<int>>a){
    while(i<n){
        a[i][j]=0;
        if(j==0){
            if(a[i][1]==1){
                j=1;
                continue;
            }
            else if(i<n-1 and a[i+1][0]==1){
                i++;
                j=0;
                continue;
            }
            else{
                break;
            }
        }
        else{
            if(a[i][0]==1){
                j=0;
                continue;
            }
            else if(i<n-1 and a[i+1][1]==1){
                i++;
                j=1;
                continue;
            }
            else{
                break;
            }
        }
    }
    int p=0;
    f(i,0,2){
        f(j,0,n){
            p+=a[j][i];
        }
    }
    return p;
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
        string s1,s2;
        cin >> s1 >> s2;
        vector<vector<int>>a(n,vector<int>(2));
        f(i,0,n){
            if(s1[i]=='W'){
                a[i][0]=0;
            }
            else{
                a[i][0]=1;
            }
        }        
        f(i,0,n){
            if(s2[i]=='W'){
                a[i][1]=0;
            }
            else{
                a[i][1]=1;
            }
        }       
        // p=1; 
        // f(i,0,2){
        //     f(j,0,n){
        //         if(a[j][i]==1){
        //             a[j][i]=p;
        //             p++;
        //         }
        //         cout << a[j][i] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << p << endl;
        // vector<int>adj[p];
        // f(i,0,n){
        //     if(a[i][0]!=0){
        //         if(a[i][1]!=0){
        //             adj[a[i][1]].pb(a[i][0]);
        //             adj[a[i][0]].pb(a[i][1]);
        //         }
        //         if(i<n-1 and a[i+1][0]!=0){
        //             // adj[a[i+1][0]].pb(a[i][0]);
        //             adj[a[i][0]].pb(a[i+1][0]);
        //         }
        //     }
        // }
        // f(i,0,n){
        //     if(a[i][1]!=0){
        //         if(i<n-1 and a[i+1][1]!=0){
        //             // adj[a[i+1][1]].pb(a[i][1]);
        //             adj[a[i][1]].pb(a[i+1][1]);
        //         }
        //     }
        // }
        // cout << endl;
        // f(i,0,p){
        //     cout << i << " -> ";
        //     for(auto j: adj[i]){
        //         cout << j << " ";
        //     }
        //     cout << endl;
        // }
        p=-1;
        if(a[0][0]==1){
            p=func(0,0,n,a);
        }
        if(p==0){
            cout << "YES" << endl;
        }
        else{
            if(a[0][1]==1){
                p=func(0,1,n,a);
            }
            if(p==0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}

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

void dfs(){
    vis[node]=1;
    for(auto i: adj[node]){
        if(!vis[i]){
            dfs(i,adj);
            return;
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
        int n, m, p=0, q;
        cin >> n;
        //int a[n];
        //inputarray(a,n);
        
    }
}