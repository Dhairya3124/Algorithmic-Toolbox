#include <iostream>
#include <vector>
#include <algorithm>
//using namespace std;
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
/*
void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}
*/
int main() {
    ll n = 0;
    std::cin >> n;

  //  std::cout << fibonacci_naive(n) << '\n';
    //test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
