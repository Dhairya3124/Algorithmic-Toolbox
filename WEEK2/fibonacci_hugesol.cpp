#include <iostream>
#include <vector>
#include <algorithm>
#define ll  long long int 
ll period(ll m) {
	ll a = 0, b = 1, c = a + b; 
	for (int i = 0; i < m*m; i++) {
		c = (a + b) % m; 
		a = b; 
		b = c; 
		if (a == 0 && b == 1)
			return i + 1; 
	}
}
ll get_fibonacci_huge_naive(ll n, ll m) {
	ll rem = n%period(m);
	ll x = 0;
	ll y = 1;
	ll ans = rem;
	for(ll i=1;i<rem;i++)
	{
		ans = (x+y)%m;
		x=y;
		y=ans;
	}
	return ans%m;
}

int main() {
    ll n;
    std::cin >> n;
    std::cout << (get_fibonacci_huge_naive(n+1, 10)*get_fibonacci_huge_naive(n,10) )%10 << '\n';
}
