#include <iostream>
using namespace std;

int main()
{
    int n;
    char strnum[9][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> n;

    if (n > 9)
        cout << "Greater than 9";
    else
    {
        cout << strnum[n - 1];
    }

    return 0;
}
