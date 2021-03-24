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

main()
{
    Point a(3,4);
    cout<<&a<<endl<<&a.x<<endl<<&a.y;
}
//dia chi cua a.x la dia chi cua a, cac bien trong Point luu theo stack lien nhau
