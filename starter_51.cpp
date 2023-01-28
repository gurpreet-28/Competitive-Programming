// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, p;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         sort(a, a + n);    // shortcut method for sorting the array
//         p = a[n - 1] + 1;  // a[n-1] is maximum element of array a
        
//         int freq[p] = {0}; // array of size a[n-1]+1 because indices start from 0 to n-1
        
//         for (int i = 0; i < n; i++){
//             freq[a[i]]++; // means freq array indices represents array a[] values
//         }
//         sort(freq, freq + p);

//         if (freq[p - 1] != freq[p - 2])
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin >> t;
// // while(t--){
// //     long long int n;
// //     cin >> n;
// //     int a[32]={0};
// //     for(int i=0;i<32;i++){

// //     }


// //     }
// // }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     int n;
//     cin >> n;
//     int arr[n];
//     int max=0,c=0;
//     int count[n]={0};
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[j]==i+1){
//                 count[i]++;
//             }
//         }
//         if(count[i]>max){
//             max=count[i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout << count[i]<< " ";
//     }
//     for(int i=0;i<n;i++){
//         if(count[i]==max){
//             c++;
//         }
//     }
//     if(c==1){
//         cout << "YES" << endl;
//     }
//     else{
//         cout << "NO" << endl;
//     }
//     }
// }