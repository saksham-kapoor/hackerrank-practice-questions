#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long unsigned int n, q;
    cin >> n >> q;
    vector<vector<int>> vertical;
    for (long unsigned int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        vector<int> horizontal;
        for (int j = 0; j < size; j++)
        {
            int element;
            cin >> element;
            horizontal.push_back(element);
        }
        vertical.push_back(horizontal);
    }
    vector<vector<int>> q_vals;
    for (long unsigned int k = 0; k < q; k++)
    {
        vector<int> q_val;
        int i, j;
        cin >> i;
        cin >> j;
        q_val.push_back(i);
        q_val.push_back(j);
        q_vals.push_back(q_val);
    }
    for (long unsigned int k = 0; k < q_vals.size(); k++)
    {
        int i = q_vals[k][0];
        int j = q_vals[k][1];
        cout << vertical[i][j] << "\n";
    }

    return 0;
}