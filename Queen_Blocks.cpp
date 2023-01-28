#include <bits/stdc++.h>
#define int long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define arraysort(a) sort(a,a+n)
#define sci(n) scanf("%lld",&n);
#define pf(n) printf("%lld\n",n);
#define scc(ch) scanf("%s",&ch);
#define pfc(ch) printf("%s\n",&ch);
#define newline printf("\n");
#define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
using namespace std;

signed main (){
    int t;
    sci(t);
    while (t--){
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    int chess[8][8];
    f(i,0,8){
        f(j,0,8){
            chess[i][j]=0;
        }
    }
    chess[a][b]=1;
    int p,q,r,y,z;
    if(a==0){
        if(b==0){
            chess[a+1][b+2]=2;
        f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
        }
        if(b==7){
            chess[a+1][b-2]=2;
            f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
        }
        else{
            chess[a+2][b-1]=2;
            chess[a+2][b+1]=2;
            f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
        }
    }
    else if(a==7){
        if(b==0){
            chess[a-2][b+1]=2;
            f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
        }
        if(b==7){
            chess[a-2][b-1]=2;
            f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
        }
        else{
            chess[a-2][b-1]=2;
            chess[a-2][b+1]=2;
           f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
        }
    }
    else if(b==0){
            // if(a==0){
            //     continue;
            // }
            chess[a-1][b+2]=2;
            chess[a+1][b+2]=2;
            f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
    }
    else if(b==7){
            chess[a-1][b-2]=2;
            chess[a+1][b-2]=2;
            f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
    }
    else if(a==1 && b==1){
        chess[a-1][b+3]=2;
        chess[a+2][b-1]=2;
        f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
    }
    else if(a==6 && b==1){
        chess[a-3][b-1]=2;
        chess[a+1][b+2]=2;
        f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
    }
    else if(a==1 && b==6){
        chess[0][3]=2;
        chess[3][7]=2;
        f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
    cout << endl;
        continue;
    }
    else if(a==6 && b==6){
        chess[7][4]=2;
        chess[3][7]=2;
        f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
        cout << endl;
        continue;
    }
    else{
        if(b<6 && b>1){
        p=a-1;
        q=b-2;
        y=a+1;
        z=b+2;
        }
        else{
        p=a-2;
        q=b+1;
        y=a+2;
        z=b-1;
        }
        chess[p][q]=2;
        chess[y][z]=2;

        f(i,0,8){
            f(j,0,8){
            cout << chess[i][j] <<" ";
        }
        cout << endl;
        }
        cout << endl;
        continue;
    }
  }
}







