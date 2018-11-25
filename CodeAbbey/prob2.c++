#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

// A Simple Implementation of for_each_n
template<class InputIt, class Size, class UnaryFunction>
InputIt for_each_n(InputIt first, Size n, UnaryFunction f)
{
    (*f) = *first;
    for (Size i = 1; i < n; ++i, ++f) {
        ++first;
        (*f) = *first;
    }
    return first;
}

int main()
{
    vector<int> v;
    int n;

    cin >> n;
    for_each_n(istream_iterator<int>(cin), n, back_inserter(v));
    cout << accumulate(v.begin(), v.end(), 0);
    return 0;
}
