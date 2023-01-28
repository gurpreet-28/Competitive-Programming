#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        double x ,y ,k,d, n, a, b, c;
		cin >> a >> b >> c;
        // ax^2 + bx + c
        // (-b +- (b^2 - 4ac)^1/2)/2a
        d=(b*b)-4*a*c;
        if(a==0 && b==0 && c==0){
            cout << -1 << endl;
            continue;
        }
        if(a==0){
            d=(b*b)-4*c;
            if(b!=0){
                cout << 1 << endl;
                cout << fixed << setprecision(10) << -1*c/b << endl;
            }
            else{
                if(c!=0){
                    cout << 0 << endl;
                }
                else
                    cout << -1 << endl;
            }
            continue;
        }
        if(d<0){
            cout << 0 << endl;
            continue;
        }
        else{
            d=sqrt(d);
            if(d==0){
                cout << 1 << endl;
                x=(-1*b)/(2*a);
                cout << x << endl;
            }
            else{
                cout << 2 << endl;
                x=((-1*b)+d)/(2*a);
                y=((-1*b)-d)/(2*a);
                if(x>y)
                    cout << fixed << setprecision(10) << y << endl << x << endl;
                else
                    cout << fixed << setprecision(10) << x << endl << y << endl;
            }
        }
	}
}