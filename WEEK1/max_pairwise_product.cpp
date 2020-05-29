#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int 
using namespace std;
ll MaxPairwiseProduct(vector<ll>& numbers) {
    ll max_product = 0;
    ll n = numbers.size();
    sort(numbers.begin(),numbers.end());
    max_product = numbers[n-1]*numbers[n-2];

    return max_product;
}

int main() {
    ll n;
    std::cin >> n;
    std::vector<ll> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
