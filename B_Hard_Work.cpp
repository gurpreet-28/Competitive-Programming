#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
#define gcd(a,b)          __gcd(a,b)
using namespace std;

int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, p = 0, q,ans = 0, m;
        string s1,s2,s3,a="",b="",c="";
        cin >> s1 >> s2 >> s3;
        f(i,0,s1.length()){
            if(s1[i]>='A'&&s1[i]<='Z' || s1[i]>='a'&&s1[i]<='z'){
                a+=s1[i];
            }
        }
        f(i,0,s3.length()){
            if(s3[i]>='A'&&s3[i]<='Z' || s3[i]>='a'&&s3[i]<='z'){
                c+=s3[i];
            }
        }
        f(i,0,s2.length()){
            if(s2[i]>='A'&&s2[i]<='Z' || s2[i]>='a'&&s2[i]<='z'){
                b+=s2[i];
            }
        }
        transform(a.begin(),a.end(),a.begin(),::tolower);
        transform(b.begin(),b.end(),b.begin(),::tolower);
        transform(c.begin(),c.end(),c.begin(),::tolower);
        cin >> n;
        while(n--){
            string s,ans="";
            cin >> s;
            f(i,0,s.length()){
                if(s[i]>='A'&&s[i]<='Z' || s[i]>='a'&&s[i]<='z'){
                    ans+=s[i];
                }
            }
            transform(ans.begin(),ans.end(),ans.begin(),::tolower);
            if (ans == a + b + c || ans == a + c + b || ans == b + a + c || ans == b + c + a || ans == c + a + b || ans == c + b + a){
                cout << "ACC" << endl;
            }
            else{
                cout << "WA" << endl;
            }
        }
    }
}
