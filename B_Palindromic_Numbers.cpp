// #include <bits/stdc++.h>
// // #define int             long long
// #define f(i,a,b)        for(int i=a;i<b;i++)
// #define pb              push_back
// #define all(a)          a.begin(),a.end()
// #define arraysort(a)    sort(a,a+n)
// #define endl            "\n"
// #define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
// using namespace std;

// bool isSmaller(string str1, string str2){
//     int n1 = str1.length(), n2 = str2.length();

//     if (n1 < n2)
//         return true;
//     if (n2 < n1)
//         return false;

//     for (int i = 0; i < n1; i++)
//         if (str1[i] < str2[i])
//             return true;
//         else if (str1[i] > str2[i])
//             return false;

//     return false;
// }

// string findSum(string str1, string str2){
//     if (str1.length() > str2.length())
//         swap(str1, str2);

//     string str = "";

//     int n1 = str1.length(), n2 = str2.length();

//     reverse(str1.begin(), str1.end());
//     reverse(str2.begin(), str2.end());

//     int carry = 0;
//     for (int i=0; i<n1; i++)
//     {
//         int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
//         str.push_back(sum%10 + '0');

//         carry = sum/10;
//     }

//     for (int i=n1; i<n2; i++)
//     {
//         int sum = ((str2[i]-'0')+carry);
//         str.push_back(sum%10 + '0');
//         carry = sum/10;
//     }

//     if (carry)
//         str.push_back(carry+'0');

//     reverse(str.begin(), str.end());

//     return str;
// }

// string findDiff(string str1, string str2){
//     if (isSmaller(str1, str2))
//         swap(str1, str2);

//     string str = "";
//     int n1 = str1.length(), n2 = str2.length();

//     reverse(str1.begin(), str1.end());
//     reverse(str2.begin(), str2.end());

//     int carry = 0;
//     for (int i = 0; i < n2; i++) {
//         int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);

//         if (sub < 0) {
//             sub = sub + 10;
//             carry = 1;
//         }
//         else
//             carry = 0;

//         str.push_back(sub + '0');
//     }
// }

// signed main (){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--){
//     int n,num,p,q,x;
//     cin >> n;
//     string s1,s3;
//     cin >> s1;
//     reverse(s1.begin(), s1.end());

//     int carry = 0;
//     for (int i=0; i<n; i++){
//         int sum = ((s1[i]-'0')+9+carry);
//         s3.push_back(sum%10 + '0');

//         carry = sum/10;
//     }
//     if (carry)
//         s3.push_back(carry+'0');

//     reverse(s3.begin(), s3.end());
//     q=s3.length();
//     cout << q << endl;
//     int i=0,j=q-1;
//     while(i<=j){
//         if((s3[i]-'0')<(s3[j]-'0')){
//             s3[j]=s3[i];
//             i++;
//             j--;
//             continue;
//         }
//         else{
//             s3[i]=s3[j];
//             i++;
//             j--;
//             continue;
//         }
//     }
//     string r=findDiff(s3,s1);
//     cout << r << endl;
//     }
// }

#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
using namespace std;

bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
 
    for (int i = 0; i < n1; i++) {
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    }
    return false;
}
 
// Function for finding difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n1 - n2;
 
    // Initially take carry zero
    int carry = 0;
 
    // Traverse from end of both strings
    for (int i = n2 - 1; i >= 0; i--) {
        // Do school mathematics, compute difference of
        // current digits and carry
        int sub = ((str1[i + diff] - '0') - (str2[i] - '0')
                   - carry);
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    // subtract remaining digits of str1[]
    for (int i = n1 - n2 - 1; i >= 0; i--) {
        if (str1[i] == '0' && carry) {
            str.push_back('9');
            continue;
        }
        int sub = ((str1[i] - '0') - carry);
        if (i > 0 || sub > 0) // remove preceding 0's
            str.push_back(sub + '0');
        carry = 0;
    }
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}
 
    // subtract remaining digits of larger number
  
string findSum(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;
    int carry = 0;
    for (int i=n1-1; i>=0; i--){
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());
 
    return str;
}
int checkPalindrome(string str){
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
string solve(int c,string str2,string n){
    int m,i,j,s=0,temp;
    string str3="",str4,str5,str6="";
    c=str2.length();
    for(i=0;i<c/2;i++){
    str3=str3+str2[i];
    }
    if(c%2!=0){
    str4=str3+str2[c/2];
    reverse(str3.begin(),str3.end());
    str4=str4+str3;
}
else{
    str4=str3;
    reverse(str3.begin(),str3.end());
    str4=str4+str3;
}

str5=findDiff(str4,n);

int p=0;
for(i=0;i<str5.length();i++){
    if(str5[i]!='0'){
        p=1;
    }
    if(p==1){
        str6=str6+str5[i];
    }
}
return str6;
}

signed main (){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin >> t;
      while (t--){
        int c;
        string n, str1, str3, str2, str4="";
        cin >> c;
        cin >> n;
        // if(n[0]-'0'>'5'){
        f(i,0,c){
        str4=str4+'1';
        }    
        // }
        // else{
        // f(i,0,c){
        // str4=str4+'9';
        // }
        // }
        str2 = findSum(n, str4);
        int i=0,j=c;
        while(i<=j){
        if(str2[j]=='0'){
            str2[j]=str2[i];
            i++;
            j--;
            continue;
        }
        if((str2[i]-'0')<(str2[j]-'0')){
            str2[j]=str2[i];
            i++;
            j--;
            continue;
        }
        else{
            str2[i]=str2[j];
            i++;
            j--;
            continue;
        }
    }
        // cout << str2 << endl;
        string s1 = findDiff(str2,n);
        cout << s1 << endl;
    }
}
