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

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q,c;
        cin >> n >> c;
        int a[n];
        vector<pair<int,int>>right(n),left(n);
        inputarray(a,n);
        f(i,0,n){
            right[i]={a[i]+i+1,i};
            left[i]={a[i]+n-i,i};
        }
        sort(all(right));
        sort(all(left));


        // f(i,0,n){
        //     cout << right[i].first << " "; 
        // }cout << endl;
        // f(i,0,n){
        //     cout << right[i].second << " "; 
        // }cout << endl;
        // cout << endl;
        // f(i,0,n){
        //     cout << left[i].first << " "; 
        // }cout << endl;
        // f(i,0,n){
        //     cout << left[i].second << " "; 
        // }cout << endl;
        // cout << endl;



        int i=0,j=0;
        vector<int>vis(n,0);
        // vis[right[0].second]=1;
        p=0;
        // c-=right[0].first;
        // i=1;
        while(c>0){
            if(vis[right[i].second]){
                i++;
                continue;
            }
            if(vis[left[j].second]){
                j++;
                continue;
            }
            if(i<n && j<n){
                if(right[i].first<=left[j].second){
                    if(right[i].first<=c){
                        p++;
                        c-=right[i].first;
                        vis[right[i].second]=1;
                        i++;
                    }
                    else{
                        break;
                    }
                }
                else{
                    if(left[j].first<=c){
                        p++;
                        c-=left[j].first;
                        vis[left[j].second]=1;
                        j++;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        while(c>0 && j<n){
            if(vis[left[j].second]){
                j++;
                continue;
            }
            if(left[j].first<=c){
                p++;
                c-=left[j].first;
                vis[left[j].second]=1;
                j++;
            }
            else{
                break;
            }
        }
        while(c>0 && i<n){
            if(vis[right[i].second]){
                i++;
                continue;
            }
            if(right[j].first<=c){
                p++;
                c-=right[j].first;
                vis[right[j].second]=1;
                i++;
            }
            else{
                break;
            }
        }

        // cout << c << endl;
        // cout << i << " " << j << endl;


        cout << p << endl;
    }
}