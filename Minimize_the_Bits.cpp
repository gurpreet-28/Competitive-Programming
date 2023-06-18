#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int power(int a, int b, int p){
    if(a==0)
        return 0;
    int res=1;
    a%=p;
    while(b>0){
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}

int lcm(int a, int b){
    if(a==0 || b==0)
        return 0;
    return (a*b)/__gcd(a,b);
}

void DecimalToBinary(int n) {
    int binaryNumber[100]={0}, num=n;
    int i = 0;
    while (n > 0) {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout<<num<<" - ";
    // for (int j = i - 1; j >= 0; j--)
    for (int j = i-1; j >= 0; j--)
        cout << binaryNumber[j];
    cout<<endl;
}

string binarySubtract(string num1, string num2) {
    string result = "";
    int carry = 0;

    while (num1.length() < num2.length()) {
        num1 = "0" + num1;
    }
    while (num2.length() < num1.length()) {
        num2 = "0" + num2;
    }

    // Perform binary subtraction
    for (int i = num1.length() - 1; i >= 0; i--) {
        int digit1 = num1[i] - '0';
        int digit2 = num2[i] - '0';

        if (digit1 < digit2 + carry) {
            result = to_string(digit1 + 2 - digit2 - carry) + result;
            carry = 1;
        } else {
            result = to_string(digit1 - digit2 - carry) + result;
            carry = 0;
        }
    }

    // Remove any leading zeros from the result
    // while (result.length() > 1 && result[0] == '0') {
    //     result = result.substr(1);
    // }

    return result;
}


int stringtonum(string s){
    int num=0,p=0;
    reverse(all(s));
    for(auto c: s){
        num+=(pow(2,p)*(c-'0'));
        p++;
    }
    return num;
}

void solve(){
    int n, m, p=0, q=0;
    string s,a1="",b1="",temp="";
    cin >> n >> s;
    f(i,0,n){
        if(s[i]=='1')
            q++;
    }
    string ans1="",ans2="";
    if(q==0){
        f(i,0,n){
            ans1+='0';
            ans2+='0';
        }
        cout << ans1 << endl;
        cout << ans2 << endl;
        return;
    }
    if(q==1 || q==n){
        cout << s << endl;
        f(i,0,n){
            ans1+='0';
        }
        cout << ans1 << endl;
        return;
    }
    if(s[0]=='1'){
        int i=0;
        while(s[i]=='1'){
            temp+='1';
            i++;
        }
        s=s.substr(i);
    }
    int a[n]={0},b[n]={0};
    n=s.length();
    f(i,1,n){
        if(s[i]=='1'){
            a[i-1]=1;
            break;
        }
    }
    // printarray(a,n);

    f(i,0,n){
        a1+=(a[i]+'0');
    }
    
    for(int i=n-1;i>=0;i--){
        b[i]=(s[i]-'0');
    }

    f(i,0,n){
        b1+=(b[i]+'0');
    }
    ans1=a1;
    p=n;
    ans2=binarySubtract(a1, b1);
    
    ans1=temp+ans1;
    int j=0;
    // cout << ans1 << endl;
    s=temp+s;
    reverse(all(ans2));
    while(j<temp.size()){
        ans2+='0';
        j++;
    }
    reverse(all(ans2));

    int q1=0;
    p=ans1.length();
    f(i,0,p){
        if(ans1[i]=='1'){
            q1++;
        }
        if(ans2[i]=='1'){
            q1++;
        }
    }


    if(q1<q)
        cout << ans1 << endl << ans2 << endl;
    
    else{
        cout << s << endl;
        ans1="";
        f(i,0,s.length()){
            ans1+='0';
        }
        cout << ans1 << endl;
    }

    // cout << stringtonum(s) << endl;
    // cout << stringtonum(ans1) << endl;
    // cout << stringtonum(ans2) << endl;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}

