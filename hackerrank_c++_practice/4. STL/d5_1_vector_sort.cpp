#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long x;
    long n;
    vector<long long> v;
    cin >> n;
    for (long i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (long i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
