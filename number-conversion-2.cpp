#include <bits/stdc++.h>
using namespace std;

void hexaDecimalToDecimal(string n){
    int ans = 0;

    int base = 1;

    int s = n.size();

    for (int i = s - 1; i >= 0; i--){

        if (n[i] >='0' && n[i] <='9'){
            ans += (n[i] - '0') * base;
        }
        else if (n[i] >='A' && n[i] <='F'){
            ans += (n[i] - 'A' + 10) * base;
        }

        base *= 16;
    }

    cout << ans;
}
int main()
{

    string n;

    cin >> n;

    hexaDecimalToDecimal(n);
}