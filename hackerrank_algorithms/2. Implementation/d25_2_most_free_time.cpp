// NOT COMPLETE

#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

struct myTime
{
    int h;
    int m;
};

int main()
{
    string strArr[] = {"10:00AM-12:30PM", "02:00PM-02:45PM", "09:10AM-09:50AM"};

    map<myTime, myTime> times;

    for (string i : strArr)
    {
        string h1, m1, h2, m2;

        h1 = i.substr(0, 2);
        stringstream convert(h1);
        int h_one;
        convert >> h_one;

        m1 = i.substr(3, 5);
        stringstream convert1(m1);
        int m_one;
        convert1 >> m_one;

        string zone1 = i.substr(5, 7);
        if (zone1[0] == 'P')
        {
            h_one += 12;
        }

        myTime t1 = {h_one, m_one};

        h2 = i.substr(8, 10);
        stringstream convert2(h2);
        int h_two;
        convert2 >> h_two;

        m2 = i.substr(11, 13);
        stringstream convert3(m2);
        int m_two;
        convert3 >> m_two;

        string zone2 = i.substr(5, 7);
        if (zone2[0] == 'P')
        {
            h_two += 12;
        }

        myTime t2 = {h_two, m_two};

        times[t1] = t2;
    }

    map<myTime, myTime>::iterator it = times.begin();

    while (it != times.end())
    {
        cout << it->first.h << ":" << it->first.m << "-" << it->second.h << ":" << it->second.m;
        it++;
    }

    return 0;
}