#include <bits/stdc++.h>
using namespace std;

class Box
{
    int l, b, h;

public:
    Box() { l = b = h = 0; }
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box &some_box)
    {
        l = some_box.l;
        b = some_box.b;
        h = some_box.h;
    }
    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }
    long long CalculateVolume() { return (long long)l * b * h; }

    bool operator<(Box &some_box)
    {
        if (l < some_box.getLength() || (b < some_box.getBreadth() && l == some_box.getLength()) || (h < some_box.getHeight() && l == some_box.getLength() && b == some_box.getBreadth()))
            return true;
        return false;
    }
};

ostream &operator<<(ostream &out, Box &some_box)
{
    return cout << some_box.getLength() << " " << some_box.getBreadth() << " " << some_box.getHeight();
}
