#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char strnum[9][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        if (i <= 9)
            cout << strnum[i - 1] << endl;
        else
        {
            if (i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }
    return 0;
}