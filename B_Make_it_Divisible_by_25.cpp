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
  int t=1;
  cin >> t;
  while (t--){
    int n,digits=0,count=0,x=0,i,p=0,a;
    cin >> n;
    a=n;
    while (a!=0)
    {
        digits++;
        a=a/10;
    }
        a=digits;
        int arr[a];
        for (int i=a-1; i >= 0; i--)
        {
            arr[i]=(n%10);
            n=n/10;
        }
        for (int i = a-1; i >= 0; i--)
        {
            if(arr[i]==5){
                p=1;
            }
            if(p==1){
            if(arr[i-1]==2 || arr[i-1]==7){
                    break;
            }
        }
          if(arr[i]==0){
                x=1;
            }
            if(x==1){
            if(arr[i-1]==0 || arr[i-1]==5){
                    break;
            }
        }
            count++;
        }
        cout << count << endl;
    }
    }