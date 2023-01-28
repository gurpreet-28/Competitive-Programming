#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--){
    int n, m, p=0, r, j, x, y;
    cin >> n >> m;
    string s;
    cin >> s;
    int a[n],q[m];
    f(i,0,n){
        a[i]=s[i]-'0';
    }
    inputarray(q,m);
    int a0[n];
    a0[0]=a[0];
    f(i,1,n){
        a0[i]=a0[i-1]+a[i];
    }
    int a1[n];
    f(i,0,n){
        a1[i]=1-a[i];
    }
    if(a1[0]<0){
        a1[0]=(-1*a1[0]);
    }
    f(i,1,n){
        if(a1[i]<0){
            a1[i]*=(-1);
        }
        a1[i]=a1[i-1]+a1[i];
    }
    int a2[n];
    f(i,0,n){
        a2[i]=2-a[i];
    }
    if(a2[0]<0){
        a2[0]=(-1*a2[0]);
    }
    f(i,1,n){
        if(a2[i]<0){
            a2[i]*=(-1);
        }
        a2[i]=a2[i-1]+a2[i];
    }
    int a3[n];
    f(i,0,n){
        a3[i]=3-a[i];
    }
    if(a3[0]<0){
        a3[0]=(-1*a3[0]);
    }
    f(i,1,n){
        if(a3[i]<0){
            a3[i]*=(-1);
        }
        a3[i]=a3[i-1]+a3[i];
    }
    int a4[n];
    f(i,0,n){
        a4[i]=4-a[i];
    }
    if(a4[0]<0){
        a4[0]=(-1*a4[0]);
    }
    f(i,1,n){
        if(a4[i]<0){
            a4[i]*=(-1);
        }
        a4[i]=a4[i-1]+a4[i];
    }
    int a5[n];
    f(i,0,n){
        a5[i]=5-a[i];
    }
    if(a5[0]<0){
        a5[0]=(-1*a5[0]);
    }
    f(i,1,n){
        if(a5[i]<0){
            a5[i]*=(-1);
        }
        a5[i]=a5[i-1]+a5[i];
    }
    int a6[n];
    f(i,0,n){
        a6[i]=6-a[i];
    }
    if(a6[0]<0){
        a6[0]=(-1*a6[0]);
    }
    f(i,1,n){
        if(a6[i]<0){
            a6[i]*=(-1);
        }
        a6[i]=a6[i-1]+a6[i];
    }
    int a7[n];
    f(i,0,n){
        a7[i]=7-a[i];
    }
    if(a7[0]<0){
        a7[0]=(-1*a7[0]);
    }
    f(i,1,n){
        if(a7[i]<0){
            a7[i]*=(-1);
        }
        a7[i]=a7[i-1]+a7[i];
    }
    int a8[n];
    f(i,0,n){
        a8[i]=8-a[i];
    }
    if(a8[0]<0){
        a8[0]=(-1*a8[0]);
    }
    f(i,1,n){
        if(a8[i]<0){
            a8[i]*=(-1);
        }
        a8[i]=a8[i-1]+a8[i];
    }
    int a9[n];
    f(i,0,n){
        a9[i]=9-a[i];
    }
    if(a9[0]<0){
        a9[0]=(-1*a9[0]);
    }
    f(i,1,n){
        if(a9[i]<0){
            a9[i]*=(-1);
        }
        a9[i]=a9[i-1]+a9[i];
    }
    f(i,0,m){
        if(a[q[i]-1]==0){
            cout << a0[q[i]-1] << endl;
        }
        if(a[q[i]-1]==1){
            cout << a1[q[i]-1] << endl;
        }
        if(a[q[i]-1]==2){
            cout << a2[q[i]-1] << endl;
        }
        if(a[q[i]-1]==3){
            cout << a3[q[i]-1] << endl;
        }
        if(a[q[i]-1]==4){
            cout << a4[q[i]-1] << endl;
        }
        if(a[q[i]-1]==5){
            cout << a5[q[i]-1] << endl;
        }
        if(a[q[i]-1]==6){
            cout << a6[q[i]-1] << endl;
        }
        if(a[q[i]-1]==7){
            cout << a7[q[i]-1] << endl;
        }
    }

  }
}
