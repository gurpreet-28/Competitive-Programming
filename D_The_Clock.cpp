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

bool isPalindrome(string S){
    string P = S;
 
    reverse(P.begin(), P.end());
 
    if (S == P) {
         return true;
    }
     else {
    return false;
    }
}

int main ()
{
  int t;
  cin >> t;
  while (t--)
    {
        int n,h,m,repeat=0,x,i,p=1,num=0,count=0;
        string s;
        cin >> s;
        cin >> x;
        h=(s[0]-48)*10+(s[1]-48);
        m=(s[3]-48)*10+(s[4]-48);
        if(1440%x==0){
            repeat=1440/x;
        }
        else{
            i=1440;
            while(i%x!=0){
                i=i+1440;
                p++;
            }
            repeat=(p*1440)/x;
        }
        // cout << repeat << endl;
        while(repeat--){
            m=m+(x%60);
            h=h%24;
            if(x/60>=1){
                h=(h+(x/60))%24;
            }
            if(m>=60){
                m=m%60;
                h=(h+(x/60)+1)%24;
            }
            num=h*100+m;
            string str= to_string(num);
            p=4-str.length();
            int temp=p;
            string str2=str;
            // cout << str2 << " ";
            while(p--){
            str2='0'+str2;
            }
            if(isPalindrome(str2)){
            cout << str2 << " ";
                count++;
            }         
        }
        cout << count << endl;
    
    }
}