#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 8, 1, 3};

    sort(nums.begin(), nums.end());

    cout << "Sorted numbers: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}