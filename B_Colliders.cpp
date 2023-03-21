#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;

#define MAXN   100001

using namespace std;

int spf[MAXN];
 
void sieve(){
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;

    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++){
        if (spf[i] == i){
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

vector<int> getFactors(int x){
    vector<int> ret;
    while (x != 1){
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}


signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    sieve();
    while (t--){
        int n, m, p=0, q;
        cin >> n >> m;
        map<int,int>mp;
        while(m--){
            int num=0;
            char ch;
            cin >> ch >> num;
            vector<int>fact=getFactors(num);

            if(ch=='+'){
                p=0;
                if(num==1){
                    if(mp[num]!=0){
                        cout << "Already on" << endl;
                    }
                    else{
                        mp[num]=1;
                        cout << "Success" << endl;
                    }
                    continue;
                }
                f(i,0,fact.size()){
                    if(mp[fact[i]]!=0 && mp[fact[i]]==num){
                        p=-1;
                        break;
                    }
                    if(mp[fact[i]]!=0){
                        p=mp[fact[i]];
                        break;
                    }
                }
                if(p==-1){
                    cout << "Already on" << endl;
                    continue;
                }
                if(p!=0){
                    cout << "Conflict with " << p << endl;
                }
                else{
                    f(i,0,fact.size()){
                        mp[fact[i]]=num;
                    }
                    cout << "Success" << endl;
                }
            }
            else{
                p=0;
                if(num==1){
                    if(mp[num]==0){
                        cout << "Already off" << endl;
                    }
                    else{
                        mp[num]=0;
                        cout << "Success" << endl;
                    }
                    continue;
                }

                f(i,0,fact.size()){
                    if(mp[fact[i]]==num){
                        p=1;
                        break;
                    }
                }
                if(p==0){
                    cout << "Already off" << endl;
                }
                else{
                    f(i,0,fact.size()){
                        mp[fact[i]]=0;
                    }
                    cout << "Success" << endl;
                }
            }
        }
        
    }
}