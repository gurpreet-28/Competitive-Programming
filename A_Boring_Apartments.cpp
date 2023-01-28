#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, p = 36;
        cin >> x;
        vector<int> v;
        int a = 0, i = 1, j = 0;
        while (p--)
        {
            a = a + i * pow(10, j);
            v.push_back(a);
            j++;
            if (a >= 1000)
            {
                a = 0;
                i++;
                j = 0;
            }
        }
        int k=0;
        for (int i = 0; i < v.size(); i++)
        {
            if(v.at(i)==x){
                k=i;
                break;
            }
        }
        int arr[v.size()] = {0};
        for (int i = 0; i < v.size(); i++)
        {
            arr[i] = (i % 4) + 1;
        }
        for(int i=1;i<v.size();i++){
            arr[i]+=arr[i-1];
        }
        cout << arr[k] << endl;
        // int x,p,q=0;
        // cin >> x;
        // p=x%10;
        // while(x!=0){
        //     q++;
        //     x=x/10;
        // }
        // cout << (p-1)*10 + (q*(q+1)/2) << endl; 



    }
}