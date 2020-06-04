#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int 
using namespace std;
ll arr[3]= {10,5,1};

ll get_change(ll m) {
	ll i =0,count = 0;
	while(m>0)
{
	if(m-arr[i]>=0)
	{
		m = m-arr[i];;
		count ++;
	}
	
	else
	{
		i++;
	}
	}
  return count;
}

int main() {
  ll m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
