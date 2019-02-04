#include<iostream>
#include<math.h>
using namespace std;
struct Point
{ double xx, yy;
};

void in(Point &p)
{ cin >> p.xx >> p.yy;
}

double FindTheDistance(Point p1, Point p2)
{ return sqrt((p1.xx - p2.xx) * (p1.xx - p2.xx) + (p1.yy - p2.yy) * (p1.yy - p2.yy));
}

int main()
{ 
  Point a, b;
  
  in(a);
  in(b);
  
  cout << FindTheDistance(a, b) << endl;
  
  return 0;
}
