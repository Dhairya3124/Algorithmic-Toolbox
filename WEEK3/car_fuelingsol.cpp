#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;
int compute_min_refills(int dist, int tank, vector<int> &stops)
{
    
    int fCount = 0;
    int refillPos = -2;
    int i = 0;
    int currLocation = 0;
    stops.push_back(dist);
    while (true)
    {
        if (tank + currLocation >= dist)
        {
            return fCount;
        }
        if (tank < stops[i] - currLocation)
        {
            refillPos = i - 1;
            if (currLocation == stops[refillPos])
            {
                return -1;
            }
            fCount++;
            currLocation = stops[i - 1];
            i -= 1;
            continue;
        }
        i++;
    }
    return -1;
}



int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (int i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
