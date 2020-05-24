#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string, int> my_map;
    int number_of_queries;
    cin >> number_of_queries;
    for (int i = 0; i < number_of_queries; i++)
    {
        int query_type;
        cin >> query_type;
        int marks;
        string name;
        switch (query_type)
        {
        case 1:
            cin >> name >> marks;
            if (my_map.find(name) == my_map.end())
            {
                my_map.insert(make_pair(name, marks));
            }
            else
            {
                my_map[name] = my_map[name] + marks;
            }
            break;
        case 2:
            cin >> name;
            my_map.erase(name);
            break;
        case 3:
            cin >> name;
            (my_map.find(name) == my_map.end()) ? cout << "0 \n" : cout << my_map.find(name)->second << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}
