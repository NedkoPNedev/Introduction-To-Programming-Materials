#include<iostream>
#include<math.h>
using namespace std;
struct Point
{ double xx, yy;
};

void in(int &n, Point a[])
{ cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i].xx >> a[i].yy;
}

double FindTheDistance(Point p1, Point p2)
{ return sqrt((p1.xx - p2.xx) * (p1.xx - p2.xx) + (p1.yy - p2.yy) * (p1.yy - p2.yy));
}

double FindTheMinDistance(int n, Point a[])
{ double MinDistance = FindTheDistance(a[0], a[1]);
  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
    { double DistBetwTwoPoints = FindTheDistance(a[i], a[j]);
      if (MinDistance > DistBetwTwoPoints)
        MinDistance = DistBetwTwoPoints;
    }
  
  return MinDistance;
}

int main()
{ 
  int n;
  Point a[128];
  
  in(n, a);
  
  cout << FindTheMinDistance(n, a) << endl;
  
  return 0;
}
