#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct triplet {
    int a, b, c;
};

int minTriplet (const triplet &t) {
    if (t.a < t.b && t.a < t.c)
        return t.a;
    else if (t.b < t.c)
        return t.b;
    else
        return t.c;
}
int main()
{
    int num;
    cin >> num;
    vector<triplet> inpv(num);

    for_each(inpv.begin(), inpv.end(), [](triplet &p) {cin >> p.a >> p.b >> p.c;});
    for_each(inpv.begin(), inpv.end(), [](triplet &p) {cout << minTriplet(p) << " ";});
    return 0;
}
