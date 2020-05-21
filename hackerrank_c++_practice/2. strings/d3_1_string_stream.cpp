#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    int num;
    vector<int> nums;
    stringstream s(str);
    char ch = 0;
    while (s >> num)
    {
        char ch;
        nums.push_back(num);
        s >> ch;
    }
    return nums;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}