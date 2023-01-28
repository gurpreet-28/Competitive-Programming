// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     long long int n,sum=0,k,i,p,count_negative=0,count_positive=0;
//     cin >> n >> k;
//     long long int a[n];
//     unordered_map<long long int,long long int>f;
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//         if(a[i]<0){
//             count_negative++;
//         }
//         sum+=a[i];
//     }
//     if(k==1 && count_negative!=n){
//         long long int sum1=INT_MIN,s=0;
//         vector<int>v;
//         for(int i=0;i<n;i++){
//             if(a[i]<0){
//                 sum1=max(s,sum1);
//                 // cout << sum1 << " ";
//                 s=0;
//                 continue;
//             }
//             else if(a[i]>0){
//                 s+=a[i];
//             }
//         }
//         sum1=max(s,sum1);
//         cout << sum1 << endl;
//     }
//     else{
//     if(count_negative==0){
//         cout << sum*k << endl;
//     }
//     else if(count_negative==1 && n!=1){
//         for(int i=0;i<n;i++){
//             if(a[i]<0){
//                 sum=sum-a[i];
//             }
//         }
//         cout << sum << endl;
//     }
//     else if(count_negative==n){
//         long long int maxi=INT_MIN;
//         for(int i=0;i<n;i++){
//             maxi=max(maxi,a[i]);
//         }
//         cout << maxi << endl;
//     }
//     else{
//         long long int sum1=INT_MIN,s=0;
//         vector<int>v;
//         for(int i=0;i<n;i++){
//             if(a[i]<0){
//                 sum1=max(s,sum1);
//                 // cout << sum1 << " ";
//                 s=0;
//                 continue;
//             }
//             else if(a[i]>0){
//                 s+=a[i];
//             }
//         }
//         sum1=max(s,sum1);
//         s=0;
//         for(int i=0;i<n;i++){
//             if(a[i]<0){
//                 break;
//             }
//             s+=a[i];
//         }
//         for(int i=n-1;i>=0;i--){
//             if(a[i]<0){
//                 break;
//             }
//             s+=a[i];
//         }
//         sum1=max(s,sum1);
//         cout << sum1 << endl;

//     }
//     }
//   }
// }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         long long int sum = 0, s = 0, n, k;
// //         cin >> n >> k;
// //         int a[n];
// //         for (int i = 0; i < n; i++)
// //         {
// //             cin >> a[i];
// //         }
// //         vector<int> v;
// //         for (int i = 0; i < n; i++)
// //         {
// //             if (a[i] < 0)
// //             {
// //                 v.push_back(i);
// //             }
// //         }
// //     }
// // }


#include <bits/stdc++.h>
using namespace std;

long long A[100005], B[100005];
long long pre[100005], suff[100005];

int main() {
    
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, K;
        cin >> N >> K;
        
        for(int i=1; i<=N; i++)
            cin >> A[i];
        
        long long ans = -(int)1e9;
        
        for(int i=1; i<=N; i++)
        {
            B[i] = max(B[i-1] + A[i], A[i]);
            ans = max(ans, B[i]);
        }
        
        long long maxPre = -(int)1e9, maxSuff = -(int)1e9;
        
        for(int i=1; i<=N; i++)
        {
            pre[i] = pre[i-1] + A[i];
            maxPre = max(maxPre, pre[i]);
        }
        
        suff[N+1] = 0;
        
        for(int i=N; i>=1; i--)
        {
            suff[i] = suff[i+1] + A[i];
            maxSuff = max(maxSuff, suff[i]);
        }
        
        if(K > 1)
            ans = max(ans, maxSuff + maxPre);
        if(K > 2)
            ans = max(ans, pre[N] * (K-2) + maxPre + maxSuff);
        
        cout << ans << "\n";
    }
    
    return 0;
}