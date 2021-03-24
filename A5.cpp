#include <iostream>
using namespace std;
struct Point
{
    double x;
    double y;
    double *test=new double [2];
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
main()
{
    Point a(3,4);
    Point b(4,5);
    cout<<a.test<<" "<<b.test;

}
