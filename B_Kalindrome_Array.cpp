#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
using namespace std;

signed main (){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin >> t;
      while (t--){
        int n,p=0;
        cin >> n;
        vector<int>a(n),b,c;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int i=0,j=n-1,x=-1,y=-1,q=0;
        // cout << a[i] << " " << a[j] << endl;
        while(i<=j){
            if(a[i]!=a[j]){
                x=a[i];
                y=a[j];
                break;
            }
            i++;
            j--;
        }
        // cout << x << endl;
        if(x==-1){
            cout << "YES" << endl;
        }
        else{
        for(int i=0;i<n;i++){
            if(a[i]!=x){
                b.pb(a[i]);
            }
        }
        int s=b.size();
        i=0,j=s-1;
        while(i<=j){
            if(b[i]!=b[j]){
                p=1;
                break;
            }
            i++;
            j--;
        }
	    if(p==0){
	        cout << "YES" << endl;
	    } 
	    else{
	        for(int i=0;i<n;i++){
            if(a[i]!=y){
                c.pb(a[i]);
            }
            }
            int s=c.size();
            i=0,j=s-1;
            while(i<=j){
            if(c[i]!=c[j]){
                q=1;
                break;
            }
            i++;
            j--;
            }
            if(q==1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
	    }
	}
}
}