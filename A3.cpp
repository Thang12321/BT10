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
Point mid_point (const Point a,const Point b)
{
    Point ra;
    ra.x=(a.x+b.x)/2;
    ra.y=(a.y+b.y)/2;
    return ra;
}
void print(Point a)
{
    cout<<'('<<a.x<<','<<a.y<<')'<<endl;
}
main()
{
    Point a(3,4);
    Point b(4,5);
  Point ra=mid_point(a,b);
  print(ra);
}
