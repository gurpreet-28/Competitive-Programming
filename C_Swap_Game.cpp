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

bool powerof2(int n){
    float i = log2(n);
    if (ceil(i) == floor(i)) {
        return 1;
    }
    return 0;
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t=1;
cin >> t;
while (t--){
    int n,k,p=0;
    cin >> n;   
    int a[n];
    inputarray(a,n);
    int sum=0,mini1=0,mini2=INT_MAX;
    mini1=*min_element(a+1,a+n);
    f(i,0,n){
        if(a[i]==mini1 && p==0){
            p=1;
            continue;
        }
        else{
            mini2=min(a[i],mini2);
        }
    }
    if(mini2==a[0]){
        if(min(mini1,mini2)==a[0]){
            sum=2*a[0]+1;
        }
        else{
            sum=2*a[0]+2;
        }
    }
    else{
        sum++;
        sum+=2*min(mini1,mini2)+1;
    }
    if(sum%2==1){
        cout << "Bob" << endl;
    }
    else{
       cout << "Alice" << endl;
    }
}
}