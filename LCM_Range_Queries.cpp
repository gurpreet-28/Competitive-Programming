// #include <bits/stdc++.h>
// #define int long long
// #define f(i,a,b) for(int i=a;i<b;i++)
// #define pb push_back
// #define all(a) a.begin(),a.end()
// #define arraysort(a) sort(a,a+n)
// #define sci(n) scanf("%lld",&n);
// #define pf(n) printf("%lld\n",n);
// #define scc(ch) scanf("%s",&ch);
// #define pfc(ch) printf("%s\n",&ch);
// #define newline printf("\n");
// #define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
// using namespace std;

// signed main (){
//     int t;
//     sci(t);
//     while (t--){
//     int n;
//     for (int i=1; i<=sqrt(n); i++){
//         if (n%i == 0){
//             if (n/i == i)
//                 cout <<" "<< i;
 
//             else 
//                 cout << " "<< i << " " << n/i;
//         }
//     }
    
//   }
// }


// C++ program to find LCM of n elements
#include <bits/stdc++.h>
#define int long long
using namespace std;

// typedef long long int ll;

// Utility function to find
// GCD of 'a' and 'b'
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// Returns LCM of array elements
int findlcm(int arr[], int n)
{
	// Initialize result
	int ans = arr[0];

	// ans contains LCM of arr[0], ..arr[i]
	// after i'th iteration,
	for (int i = 1; i < n; i++)
		ans = (((arr[i] * ans)) /
				(gcd(arr[i], ans)));

	return ans;
}

// Driver Code
signed main(){
    int n=41;
    int arr[n];
    for (int i = 0; i < n; i++){
        arr[i]=i+1;
    }
    
	// int arr[] = { 2, 7, 3, 9, 4 };
	// int n = sizeof(arr) / sizeof(arr[0]);
	printf("%lld", findlcm(arr, n));
	return 0;
}
