#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ones = 0, x = 0;
        cin >> n >> m;
        string s, w;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                x = i;
                ones++;
            }
        }
        if (m % 2 == 1 && ones % 2 == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (ones == 0)
        {
            cout << n * m << endl;
            continue;
        }
        if (m%2==0){
            int p;
                if (m % 2 == 0){
                    p = 2 * n;
                    int r = 0, q = 0, s1 = 0;
                    // for(int i=0;i<p;i++){
                    //     w[i]=s[i%n];
                    // }
                    w = s + s;
                    // for(int i=0;i<p;i++){
                    //     if(w[i]=='1'){
                    //         r++;
                    //         q=i;
                    //     }
                    //     if(r==ones){
                    //         break;
                    //     }
                    // }
                    r = x;
                    for (int i = r + 1; i < p; i++)
                    {
                        if (w[i] == '1')
                        {
                            s1 = i;
                            break;
                        }
                    }
                    cout << s1 - r << endl;
                    continue;
                }
                // else
                // {
                //     p = 3 * n;
                //     int r = 0, q = 0, s1 = 0;
                //     // for(int i=0;i<p;i++){
                //     //     w[i]=s[i%n];
                //     // }
                //     w = s + s + s;
                //     r = x;
                //     for (int i = x + 1; i < p; i++)
                //     {
                //         if (w[i] == '1')
                //         {
                //             r++;
                //             q = i;
                //         }
                //         if (r == (ones + (ones / 2)))
                //         {
                //             break;
                //         }
                //     }
                //     for (int i = r + 1; i < p; i++){
                //         if (w[i] == '1'){
                //             s1 = i;
                //             break;
                //         }
                //     }
                //     cout << s1 - r << endl;
                //     continue;
                // }
            }
        else
        {
            int p = 0, q, r;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    p++;
                }
                if (p == (ones / 2))
                {
                    q = i;
                    break;
                }
            }
            for (int i = q + 1; i < n; i++)
            {
                if (s[i] == '1')
                {
                    r = i;
                    break;
                }
            }
            cout << r - q << endl;
            continue;
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
// while(t--){
//     int n, m, ones = 0, x = 0,p=0;
//         cin >> n >> m;
//         string s, w;
//         cin >> s;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '1')
//             {
//                 x = i;
//                 ones++;
//             }
//         }
//         if (m % 2 == 1 && ones % 2 == 1)
//         {
//             cout << 0 << endl;
//             continue;
//         }
//         if(ones == 0){
//             cout << n*m << endl;
//             continue;
//         }
//         if (m % 2 == 0){
//             int r = 0, q = 0, s1 = 0;
//             w = s + s;
//             r = x;
//             for (int i = r + 1; i < p; i++)
//             {
//             if (w[i] == '1')
//             {
//             s1 = i;
//             break;
//             }
//             }
//             cout << r - s1 << endl;
//             continue;
//         }
//         else{
//               int q, r;
//             for (int i = 0; i < n; i++)
//             {
//                 if (s[i] == '1')
//                 {
//                     p++;
//                 }
//                 if (p == (ones / 2))
//                 {
//                     q = i;
//                     break;
//                 }
//             }
//             for (int i = q + 1; i < n; i++)
//             {
//                 if (s[i] == '1')
//                 {
//                     r = i;
//                     break;
//                 }
//             }
//             cout << r - q << endl;
//             continue;
//         }
//     }
// }