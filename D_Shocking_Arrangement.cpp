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
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        vector<int>pos,neg;
        int k = *max_element(a,a+n)-*min_element(a,a+n);
        arraysort(a);
        if(a[0]==0 and a[n-1]==0){
            cout << "No" << endl;
            continue;
        }
        if(n==1){
            cout << "No" << endl;
            continue;
        }
        f(i,0,n){
            if(a[i]>=0)
                pos.pb(a[i]);
            else
                neg.pb(a[i]);
        }
        int sum=0;
        sort(all(pos));
        sort(all(neg));
        reverse(all(neg));
        int m1=pos.size();
        int m2=pos.size();
        vector<int>ans;
        int i=0;
        int j=0,z=0;
        while(i<n){
            if(sum+pos[j]<k and j<m1){
                sum+=pos[j];
                ans.pb(pos[j]);
                j++;
            }
            else{
                sum+=neg[z];
                ans.pb(neg[z]);
                z++;
            }
            i++;
        }
        cout << "YES" << endl;
        printarray(ans,n);
    }
}





