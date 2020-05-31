#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int 
ll gcd (ll a, ll b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
long long lcm(ll a, ll b) {
 ll t = gcd(a,b);
 
 return (a*b)/t;
}

int main() {
  ll a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
