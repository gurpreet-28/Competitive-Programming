// #include <bits/stdc++.h>
// #define int               long long
// #define f(i,a,b)          for(int i=a;i<b;i++)
// #define mp                make_pair
// #define pb                push_back
// #define all(a)            a.begin(),a.end()
// #define arraysort(a)      sort(a,a+n)
// #define endl              "\n"    
// #define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
// #define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
// using namespace std;

// signed main (){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t=1;
//     cin >> t;
//     while (t--){
//         int n, m, p=INT_MAX, q;
//         cin >> n;
//         int a[n];
//         inputarray(a,n);
//         arraysort(a);
//         set<int>st;
//         if(n==2 || a[0]==a[n-1]){
//             cout << -1 << endl;
//             continue;
//         }
//         f(i,0,n){
//             st.insert(a[i]);
//         }
//         f(i,0,n-1){
//             if(a[i+1]-a[i]<=p){
//                 p=a[i+1]-a[i];
//                 q=i;
//             }
//         }
//         int ans[n]={0};
//         if(st.size()==2){
//             // int a1=0,b1=0;
//             // f(i,0,n){
//             //     if(a[0]==a[i]){
//             //         a1++;
//             //     }
//             //     else{
//             //         b1++;
//             //     }
//             // }
//             // int x=a1,y=b1;
//             // int flag;
//             // if(a1==1 || b1==1){
//             //     flag=1;
//             // }
//             // else{
//             //     flag=0;
//             // }
//             // if(a1>b1){
//             //     int i=0+flag;
//             //     while (b1>0){
//             //         ans[i]=a[n-1];
//             //         b1--;
//             //         i+=2;
//             //     }
//             //     f(i,0,n){
//             //         if(ans[i]==0){
//             //             ans[i]=a[0];
//             //         }
//             //     }
//             // }
//             // else{
//             //     int i=0+flag;
//             //     while (a1>0){
//             //         ans[i]=a[0];
//             //         a1--;
//             //         i+=2;
//             //     }
//             //     f(i,0,n){
//             //         if(ans[i]==0){
//             //             ans[i]=a[n-1];
//             //         }
//             //     }
//             // }
//             // if(x==y){
//             //     swap(ans[0],ans[1]);
//             // }
//             // printarray(ans,n);
//             if(n==4 && a[0]==a[1] && a[1]!=a[2]){
//                 swap(a[1],a[n-1]);
//                 printarray(a,n);
//                 continue;
//             }
//             f(i,0,n-1){
//                 if(a[i]!=a[i+1]){
//                     swap(a[i],a[i+1]);
//                     break;
//                 }
//             }
//             printarray(a,n);
//             continue;
//         }
//         ans[0]=a[q];
//         ans[1]=a[q+1];
//         int ans1[n]={0};
//         ans1[n-2]=a[q];
//         ans1[n-1]=a[q+1];
//         int j=2;
//         f(i,0,n){
//             if(i==q || i==q+1){
//                 continue;
//             }
//             ans[j++]=a[i];
//         }
//         j=n-3;
//         f(i,0,n){
//             if(i==q || i==q+1){
//                 continue;
//             }
//             ans1[j]=a[i];
//             j--;
//         }
//         if(!is_sorted(ans,ans+n)){
//             reverse(ans,ans+n);
//             if(is_sorted(ans,ans+n)){
//                 printarray(ans1,n);
//             }
//             else{
//                 printarray(ans,n);
//             }
//         }
//         else{
//             reverse(ans1,ans1+n);
//             if(is_sorted(ans1,ans1+n)){
//                 printarray(ans,n);
//             }
//             else{
//                 printarray(ans1,n);
//             }
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
int isvalid(vector<int>b,int n){
    if(is_sorted(all(b))) return 0;
    reverse(all(b));
    if(is_sorted(all(b))) return 0;
    return 1;
}               
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m;
    cin>>n;
    int a[n];
    map<int,int>m1;
    map<int,int>m2;
    for(i=0;i<n;i++){
        cin>>a[i];
        m1[a[i]]++;
        m2[a[i]]++;
        if(m1[a[i]]==1) c++;
    }
    sort(a,a+n);
    if(n==2||c==1){
        cout<<-1<<endl;
        continue;
    }
    if(c>=3){
        int min1=1e18;
        q=-1;
        for(i=0;i<n-1;i++){
            int z=a[i+1]-a[i];
            if(z<min1){
                x=a[i];
                y=a[i+1];
                q=i;
                min1=z;
            }
        }
        vector<int>b1(n,0);
        vector<int>b2(n,0);
        b1[0]=y;
        b1[1]=x;
        m1[x]--;
        m1[y]--;
        int z=2;
        for(i=0;i<n;i++){
            if(m1[a[i]]==0) continue;
            b1[z++]=a[i];
            m1[a[i]]--;
        }

        b2[n-1]=x;
        b2[n-2]=y;
        m2[x]--;
        m2[y]--;
        z=0;
        for(i=0;i<n;i++){
            if(m2[a[i]]==0) continue;
            b2[z++]=a[i];
            m2[a[i]]--;
        }
        if(isvalid(b1,n)){
            for(i=0;i<n;i++){
                cout<<b1[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(i=0;i<n;i++){
                cout<<b2[i]<<" ";
            }
            cout<<endl;
        }
        continue;
    }
    //c=====2
    if(n==4&&m1[a[0]]==2){
        cout<<a[0]<<" "<<a[2]<<" "<<a[3]<<" "<<a[1]<<endl;
        continue;
    }
    for(i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            swap(a[i],a[i+1]);
            break;
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    





    }
}
