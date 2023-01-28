#include <bits/stdc++.h>
using namespace std;

void numbersWith3Divisors(int N)
{

    vector<int>v;
    for(int i=0;i<q;i++){
    long long int N=a[i];
	bool prime[N + 1];
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = 0;

	for (int p = 2; p * p <= N; p++) {
		if (prime[p] == true) {
			for (int i = p * 2; i <= N; i += p)
				prime[i] = false;
		}
	}
    int c=0;
	for (int i = 0; i * i <= N; i++)
		if (prime[i])
            c++;
    v.push_back(c);
    }
}

// Driver code
int main()
{
	int N = 96;

	// Function call
	numbersWith3Divisors(N);

	return 0;
}
