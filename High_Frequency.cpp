#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    unordered_map<int,int> f;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        f[a[i]]++;
	    }
	    sort(a,a+n);
	    int p=0,q=0;
	    for(int i=0;i<n;i++){
	        p=max(p,f[a[i]]);
	    }
	    int r=p,count=0;
	    for(int i=0;i<n;i++){
	        if(f[a[i]]==p){
	            count++;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(f[a[i]]==p){
	            continue;
	        }
	        q=max(q,f[a[i]]);
	    }
	   // cout << p << " " << q << endl;
	    if(count>p){
	        cout << p << endl;
	    }
	    else{
	        if(p%2==0){
	            cout << max(p/2,q) << endl;
	        }
	        else{
	            cout << max(p/2 +1,q) << endl;
	        }
	    }
	}
}
