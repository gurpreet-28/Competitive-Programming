#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,count=0;
    cin >> n;
    int a[n],m=INT_MIN;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        m=max(m,a[i]);
    }
    // cout << m << endl;
    int b[m+1]={0};
    for (int i = 0; i < n; i++){
        b[a[i]]++;    
    }
    for (int i = 0; i <= m; i++){
        if(b[i]>0){
            count++;
        }
    }

    int c[count],j=0;
    for (int i = 1; i <= m; i++){
        if(b[i]>0){
            c[j]=i;
            j++;
        }
    }
    int d[count]={0};
    j=0;
    while(j<count){
        for (int i = 0; i < n; i++)
        {
            if(a[i]==c[j]){
                d[j]++;
                i++;
            }
            else{
                continue;
            }
        }
        j++;
    }
    int p=INT_MIN,i;
    for (int k = 0; k < count; k++){
        if(d[k]>p){
            p=d[k];
            i=k;
        }
        else{
            continue;
        }
    }
    cout << c[i] << endl;
}
}