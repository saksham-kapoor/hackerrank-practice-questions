#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> my_set;
    int query_count;
    cin >> query_count;
    for (int i = 0; i < query_count; i++)
    {
        int q_type, q_element;
        cin >> q_type >> q_element;
        set<int>::iterator itr;
        switch (q_type)
        {
        case 1:
            my_set.insert(q_element);
            break;
        case 2:
            my_set.erase(q_element);
            break;
        case 3:
            itr = my_set.find(q_element);
            (itr == my_set.end()) ? cout << "No\n" : cout << "Yes\n";
            break;
        default:
            break;
        }
    }
    return 0;
}
