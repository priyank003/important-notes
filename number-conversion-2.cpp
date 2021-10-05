#include <bits/stdc++.h>
using namespace std;

//hexadecimal to decimal
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
//decimal to hexadecimal

void decimalToHexadecimal(int n){
    string ans = "";

    while (n){
        if (n%16 <=9){
            ans = ans + to_string(n % 16);
        }else{
            char c = 'A' + n % 16 - 10;
            ans += c;
        }

        n /= 16;
    }
    for (int i = ans.size() - 1; i >= 0;i--){
        cout << ans[i];
    }
}




int main()
{

    string n;

    cin >> n;

    hexaDecimalToDecimal(n);
    decimalToHexadecimal(n);
}
