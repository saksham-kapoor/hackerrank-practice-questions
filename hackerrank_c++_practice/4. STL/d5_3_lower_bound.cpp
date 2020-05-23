#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long N;
    vector<long long> V;
    cin >> N;
    for (long i = 0; i < N; i++)
    {
        long long temp;
        cin >> temp;
        V.push_back(temp);
    }
    long Q;
    vector<long long> Y;
    cin >> Q;
    for (long i = 0; i < Q; i++)
    {
        long long temp;
        cin >> temp;
        Y.push_back(temp);
    }
    for (long i = 0; i < Y.size(); i++)
    {
        vector<long long>::iterator lb = lower_bound(V.begin(), V.end(), Y[i]);
        if (*lb == Y[i])
        {
            cout << "Yes "
                 << (lb - V.begin() + 1) << endl;
        }
        else
        {
            cout << "No "
                 << (lb - V.begin() + 1) << endl;
        }
    }
    return 0;
}