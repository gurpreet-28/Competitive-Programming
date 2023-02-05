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

bool singledigit(int n){
    string s=to_string(n);
    if(s.length()==1){
        return true;
    }
    return false;
}

int sumofdig(int n){
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q;
        cin >> n >> q;
        int a[n];
        inputarray(a,n);
        int single[n]={0};
        f(i,0,n){
            if(singledigit(a[i])){
                single[i]=1;
                p++;
            }
        }
        while(q--){
            int x,y,type;
            cin >> type;
            if(type==1){
                cin >> x >> y;
                x--;
                y--;
                if( p!=n ){
                    f(i,x,y+1){
                        if(single[i]==0){
                            a[i]=sumofdig(a[i]);
                            if(singledigit(a[i])){
                                single[i]=1;
                                p++;
                            }
                        }
                    }
                }
            }
            else{
                cin >> x;
                x--;
                cout << a[x] << endl;
            }
        }
        // printarray(a,n);
    }
}