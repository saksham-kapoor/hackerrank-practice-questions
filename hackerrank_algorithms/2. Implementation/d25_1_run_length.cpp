#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

string runLength(string to_encode)
{
    string encoded_string = "";
    map<char, int> frequency;
    for (char i : to_encode)
    {
        frequency[i]++;
    }
    map<char, int>::iterator it = frequency.begin();
    while (it != frequency.end())
    {
        encoded_string += to_string(it->second) + it->first;
        it++;
    }
    return encoded_string;
}

int main()
{
    string my_str;
    cin >> my_str;
    cout << runLength(my_str);
    return 0;
}