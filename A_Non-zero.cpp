#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    long long int n,sum=0,count0=0,countm1=0,c=0,p=0,product=1;
    cin >> n;
    vector <int> v (n);
    for(int i=0;i<n;i++){
        cin >> v.at(i);
        sum+=v.at(i);
        product*=1;
        if(v.at(i)==0){
            count0++;
            product*=v.at(i);
        }
        if(v.at(i)==-1){
            countm1++;
        }
    }
    if(sum!=0 && product!=0){
        cout << 0 << endl;
    }
    if(sum!=0 && product==0){
        for(int i=0;i<n;i++){
            if(v.at(i)==0){
                v.at(i)=1;
                c++;
            }
            p+=v.at(i);
        }
        if(p==0){
            cout <<  c+1 << endl;
        }
        else{
        cout << c << endl;
        }
    }
    if(sum==0 && product!=0){
        if(countm1<n){
        cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
    if(sum==0 && product==0){
        cout << count0 << endl;
    }
    }
}