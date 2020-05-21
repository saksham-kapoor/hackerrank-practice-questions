#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[1002];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> num[i];
    for (int i = N - 1; i >= 0; i--)
        cout << num[i] << " ";
    return 0;
}
