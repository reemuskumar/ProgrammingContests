#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector<int> inpv(300);
    pair<vector<int>::iterator, vector<int>::iterator> p;

    for_each(inpv.begin(), inpv.end(), [](int &p) {cin >> p;});
    p = minmax_element(inpv.begin(), inpv.end());
    cout << *p.second << " " << *p.first;
    return 0;
}
