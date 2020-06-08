#include <iostream>
#include <vector>

using std::vector;

int get_max_index(vector<int> weights, vector<int> values) {
    int maxi = 0;
    double maxq = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] != 0 && (double) values[i] / weights[i] > maxq) {
            maxq = (double) values[i] / weights[i];
            maxi = i;
        }
    }
    return maxi;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double val = 0.0;

    for (int i = 0; i < weights.size(); i++) {
        if (capacity == 0) return val;
        int index = get_max_index(weights, values);
        int a = std::min(capacity, weights[index]);
        val += a * (double) values[index] / weights[index];
        weights[index] -= a;
        capacity -= a;
    }

    return val;
}

int main() {
    int n;
    int capacity;
    std::cin >> n >> capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        std::cin >> values[i] >> weights[i];
    }

    double optimal_value = get_optimal_value(capacity, weights, values);

    std::cout.precision(10);
    std::cout << optimal_value << std::endl;
    return 0;
}
