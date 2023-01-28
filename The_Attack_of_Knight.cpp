// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     int x1,y1,x2,y2;
//     cin >> x1 >> y1 >> x2 >> y2;
//     if(abs(x1-x2)>4 || abs(y1-y2)>4){
//         cout << "NO" << endl;
//         continue;
//     }
//     else if(x1==x2 && y1!=y2){
//         if(abs(y1-y2)%2==0){
//             cout << "YES" << endl;
//         }
//         else{
//             cout << "NO" << endl;
//         }
//     }
//     else if(x1!=x2 && y1==y2){
//         if(abs(x1-x2)%2==0){
//             cout << "YES" << endl;
//         }
//         else{
//             cout << "NO" << endl;
//         }
//     }
//     else{
//         if(abs(x1-x2)==1 && abs(y1-y2)==1){
//             if(((x1==1 && y1==1) && (x2==2 && y2==2)) || ((x1==2 && y1==2) && (x2==1 && y2==1))){
//             cout << "NO" << endl;
//             continue;
//             }
//             if(((x1==1 && y1==8) && (x2==2 && y2==7)) || ((x1==2 && y1==7) && (x2==1 && y2==8))){
//             cout << "NO" << endl;
//             continue;
//             }
//             if(((x1==8 && y1==1) && (x2==7 && y2==2)) || ((x1==7 && y1==2) && (x2==8 && y2==1))){
//             cout << "NO" << endl;
//             continue;
//             }
//             if(((x1==8 && y1==8) && (x2==7 && y2==7)) || ((x1==7 && y1==7) && (x2==8 && y2==8))){
//             cout << "NO" << endl;
//             continue;
//             }
//             else{
//                 cout << "YES" << endl;
//             }
//         }
//         else if(abs(x1-x2)==1 && abs(y1-y2)==3){
//             cout << "YES" << endl;
//             continue;
//         }
//         else if(abs(x1-x2)==3 && abs(y1-y2)==1){
//             cout << "YES" << endl;
//             continue;
//         }
//         else if(abs(x1-x2)==4 && abs(y1-y2)==2){
//             cout << "YES" << endl;
//             continue;
//         }
//         else if(abs(x1-x2)==2 && abs(y1-y2)==4){
//             cout << "YES" << endl;
//             continue;
//         }
//         else if(abs(x1-x2)==3 && abs(y1-y2)==3){
//             cout << "YES" << endl;
//             continue;
//         }
//         else{
//             cout << "NO" << endl;
//             continue;
//         }
//     }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x1, y1, x2, y2, a, b;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                // a = (x1 - i) * (x1 - i) + (y1 - j) * (y1 - j);
                // b = (x2 - i) * (x2 - i) + (y2 - j) * (y2 - j); 

                a = abs(x1 - i)*abs(y1 - j);
                b = abs(x2 - i)*abs(y2 - j); 
                if (a == 2 && b == 2) 
                { 
                    // cout << i << " " << j << endl;
                    cout << "YES\n";
                    goto A;
                }
            }
        }
        cout << "NO\n";
    A:;
    }
    return 0;
}
