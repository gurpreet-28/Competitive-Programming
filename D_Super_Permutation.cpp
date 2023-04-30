// #include <bits/stdc++.h>
// #define int               long long
// #define f(i,a,b)          for(int i=a;i<b;i++)
// #define mp                make_pair
// #define pb                push_back
// #define rall(a)           a.rbegin(),a.rend()
// #define all(a)            a.begin(),a.end()
// #define arraysort(a)      sort(a,a+n)
// #define endl              "\n"    
// #define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
// #define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
// using namespace std;

// bool ispermutation(int b[],int n){
//     int a[n];
//     f(i,0,n){
//         a[i]=b[i];
//     }
//     arraysort(a);
//     int p=1;
//     f(i,0,n){
//         if(a[i]!=p){
//             return false;
//         }
//         p++;
//     }
//     return true;
// }

// signed main (){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int testcases=1;
//     cin >> testcases;
//     while (testcases--){
//         int n, m, p=0, q;
//         cin >> n;
//         if(n==1){
//             cout << 1 << endl;
//             continue;
//         }
//         int ans[n];
//         p=2;
//         ans[0]=n;
//         ans[1]=1;
//         for(int i=2;i<n;i+=2){
//             ans[i]=ans[i-2]-2;
//         }
//         for(int i=3;i<n;i+=2){
//             ans[i]=ans[i-2]+2;
//         }
//         if(n%2==1 and n!=1){
//             cout << -1 << endl;
//         }
//         else{
//             printarray(ans,n);
//         }
//     }
// }


#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int             long long
#define all(a)          a.begin(),a.end()
#define endl            "\n"
#define fill(a,b) memset(a, b, sizeof(a))
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
               
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==1){
        cout<<-1<<endl;
        continue;
    }
    set<char>s1;
    for(i=0;i<n;i++) s1.insert(s[i]);
    int f1[26]={0};
    for(i=0;i<n/2;i++){
        if(s[i]==s[n-i-1]) f1[s[i]-'a']++;
    }
    int max1=0;
    char ch;
    for(i=0;i<26;i++){
        c+=f1[i];
        u+=f1[i];
        if(f1[i]>max1){
            ch='a'+i;
            max1=max(max1,f1[i]);
        }
    }
    c=c-max1;
    v=s1.size();
    if(max1<=c){
        if(u%2==0){
            cout<<u/2<<endl;
        }
        else{
            if(v>2){
                cout<<(u+1)/2<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            // int ans=0;
            // for(i=0;i<n/2;i++){
            //     if(s[i]!=s[n-i-1]){
            //         if((f1[s[i]-'a']==0)&&(f1[s[n-i-1]-'a']==0)){
            //             ans=1;
            //             break;
            //         }
            //     }
            // }
            // if(ans==1){
            //     cout<<(u+1)/2<<endl;
            // }
            // else{
            //     cout<<-1<<endl;
            // }
        }
        continue;
    }
    else{
        // cout<<max1<<" "<<ch<<endl;
        int ans=max1;
        max1-=c;
        for(i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                if(s[i]!=ch&&s[n-i-1]!=ch){
                    max1--;
                }
            }
        }
        if(max1<=0){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    // cout<<(u+1)/2<<endl;




    }
}