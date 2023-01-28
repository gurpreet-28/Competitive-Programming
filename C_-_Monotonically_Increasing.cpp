// n and m are given... print sequence as given from obsesrvation
// number of sequence will be mCn
// https://atcoder.jp/contests/abc263/tasks/abc263_c

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = i + 1;
        }
        vector<vector<int>> subsets;
        vector<int> sets;
        int subsets_count = (1 << n);
        for (int mask = 0; mask < subsets_count; mask++){
            for (int i = 0; i < n; i++){
                if ((mask & (1 << i)) != 0){
                    sets.push_back(v[i]);
                }
            }
            subsets.push_back(sets);
            sets.clear();
        }
        for (int j = 1; j <= n; j++){
            for (auto s : subsets){
                if (s.size() == m){
                    if (j == s[0]){
                        for (auto i : s){
                            cout << i << " ";
                        }
                        cout << endl;
                    }
                }
            }
        }
    }
}