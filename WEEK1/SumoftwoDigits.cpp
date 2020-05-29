#include <iostream>
#define ll long long int 
using namespace std;

ll sum_of_digits(ll first_digit, ll second_digit) {
return first_digit + second_digit;
}
int main() {
ll a = 0;
ll b = 0;
cin >> a;
cin >> b;
cout << sum_of_digits(a, b);
return 0;
}
