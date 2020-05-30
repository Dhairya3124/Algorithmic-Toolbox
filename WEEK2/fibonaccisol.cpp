#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int 

ll  fibonacci_fast(ll  n) {
	ll v[n+1];
	v[0] = 0;
	v[1] = 1;
	for(ll i = 2; i<=n;i++)
	{
		v[i] = v[i-1] + v[i-2];
	}
    // write your code here

    return v[n];
}


    int main() {
    ll n = 0;
    std::cin >> n;

  //  std::cout << fibonacci_naive(n) << '\n';
    //test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
