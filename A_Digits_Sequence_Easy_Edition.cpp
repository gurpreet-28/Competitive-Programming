#include <bits/stdc++.h>
using namespace std;
int countDigit(long long n)
{
   if(n == 0)
     return 1;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
 

int main(){
    int t=1;
while(t--){
    int k,j=1,x,a,r;
    cin >> k;
    vector<int> v;
    for(int i=1;i<=10000;i++){
        if(countDigit(i)==1){
            v.push_back(j);
            j++;
        }
        else{
            x=countDigit(i);
            r=reverseDigits(i);
            while(x!=0){
                // cout << r << endl;
                v.push_back(r%10);
                r=r/10;
                x--;
            }
        }
    }
    // for(int i=0;i<=k;i++)
    //     cout << v[i] << endl;
    cout << v[k-1] << endl;
    }
}