#include <iostream>
using namespace std;
struct Point
{
    double x;
    double y;
    Point ()
    {

    }
    Point (int x,int y)
    {
        this->x=x;
        this->y=y;
    }

};
void print(Point a)
{
    cout<<'('<<a.x<<','<<a.y<<')'<<endl;
}
void testdiachi( Point a, Point &b)
{
    cout<<&a<<endl;
    cout<<&b<<endl;
}
main()
{
    Point a(3,4);
    print(a);
    testdiachi(a,a);
}
