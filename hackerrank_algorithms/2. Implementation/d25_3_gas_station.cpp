#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int required_index;
    string strArr[] = {"4", "2:2", "1:1", "3:1", "0:1"};
    string gas_stations = strArr[0];
    int n;
    stringstream convert(gas_stations);
    convert >> n;

    // now index of gas stations is from : 1 to n
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        i %= n;
        int total_gas = 0;
        required_index = i;

        for (j = i, k = 1; k <= n; k++, j++)
        {
            j %= n;
            int gA = strArr[j][0] - '0';
            int gR = strArr[j][2] - '0';
            total_gas += gA;
            total_gas -= gR;
            if (total_gas < 0)
            {
                break;
            }
        }

        if (k > n)
        {
            break;
        }
    }

    if (i > n)
    {
        cout << "impossible";
    }
    else
    {
        cout << required_index;
    }

    return 0;
}
