#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<pair<int, int>> inpv(num);

    for_each(inpv.begin(), inpv.end(), [](pair<int, int> &p) {cin >> p.first >> p.second;});
    for_each(inpv.begin(), inpv.end(), [](pair<int, int> &p) {cout << min(p.first, p.second) << " ";});
    return 0;
}
