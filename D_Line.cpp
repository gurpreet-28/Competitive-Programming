#include <bits/stdc++.h>
#define int long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define pb push_back
#define all(a) a.begin(), a.end()
#define arraysort(a) sort(a, a + n)
#define endl "\n"
#define inputarray(a, n) \
    f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)                \
    f(i, 0, n) { cout << a[i] << " "; } \
    cout << endl;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, x,sum=0,p,q,r;
        cin >> n;
        string s;
        cin >> s;
        x = n;
        int a[n];
        for (int i = 0; i < n; i++){
            if (s[i] == 'L'){
                a[i] = i;
            }
            else{
                a[i] = n - 1 - i;
            }
            sum+=a[i];
        }
    //     while (x--){
    //         int i = 0, j = n - 1, p, q, c = 0, sum = 0,r=0;
    //         // for(int a=0;a<n/2;a++){
    //         //     if(s[i]=='L'){
    //         //         p=i;
    //         //         break;
    //         //     }
    //         // }
    //         // for(int a=n-1;a>=n/2;a--){
    //         //     if(s[i]=='R'){
    //         //         q=n-1-i;
    //         //         break;
    //         //     }
    //         // }
    //         // if(p>q){
    //         //     r=1;
    //         // }
    //         // else{
    //         //     r=0;
    //         // }
    //         // if(r==1){
    //         while (i < n / 2){
    //             if (s[i] == 'L')
    //             {
    //                 s[i] = 'R';
    //                 a[i] = n - 1 - i;
    //                 break;
    //                 i++;
    //                 // goto arrsum;
    //             }
    //             i++;
    //             c++;
    //         }
    //         // }
    //         // else{
    //         while (j >= n/2){
    //             if (s[j] == 'R'){
    //                 s[j] = 'L';
    //                 a[j] = j;
    //                 break;
    //                 j--;
    //                 // goto arrsum;
    //             }
    //             j--;
    //         }
    //         // }
    //     // arrsum:
    //     if(a[j]>a[i]){
    //         s[i]='L';
    //         a[i]=i;
    //     }
    //     else{
    //         s[j]='R';
    //         a[j]=n-1-j;
    //     }

    //         for (int k = 0; k < n; k++){
    //             sum += a[k];
    //         }
    //         cout << sum << " ";
    //     }
    //     cout << s << endl;
    //     // printarray(a,n);
    //     cout << endl;


    // int b[n]={0};
    // for(int i=0;i<n/2;i++){
    //     b[i]=n-1-i;
    // }
    // for(int i=n-1;i>=n/2;i--){
    //     b[i]=b[n-1-i];
    // }

    // printarray(b,n);

    vector<int>v;
    for(int i=0;i<n/2;i++){
        if(s[i]=='L'){
            v.pb(i);
        }
    }
    for(int i=n-1;i>=n/2;i--){
        if(s[i]=='R'){
            v.pb(n-1-i);
        }
    }
    sort(all(v));
    for(int i=0;i<v.size();i++){
        sum-=v[i];
        sum+=(n-1-v[i]);
        cout << sum << " ";
    }
    r=n-v.size();
    while(r--){
        cout << sum << " ";
    }
    cout << endl;
    }

}