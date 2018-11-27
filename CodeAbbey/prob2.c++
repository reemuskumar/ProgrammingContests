#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> inpv(num);

    for_each(inpv.begin(), inpv.end(), [](int &p) {cin >> p;});
    cout << accumulate(inpv.begin(), inpv.end(), 0);
    return 0;
}
