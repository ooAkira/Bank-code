#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{


    ll t, n, dem, ans = 1;
    cin >> t;
    ll arr[3];

    
    while (t--)
    {
        
        ll a, b;
        ll i = 2;
        cin >> a >> b;
        n = a * b;
        while (n > 1)
        {
            dem = 0;
            if (n % i == 0){
                dem++;
                n /= i;
            }

            ans *= (dem + 1);
            i++;
        }
        
        cout << ans << endl;
        ans = 1;
    }
}