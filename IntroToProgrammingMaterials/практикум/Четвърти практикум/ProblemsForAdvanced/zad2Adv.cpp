#include<iostream>
#include<algorithm>
using namespace std;
struct Number
{ int i, pos;
};

Number a[10000001];
int n, x;
void in()
{ cin >> n >> x;
  for (int i = 0; i < n; i++)
  { cin >> a[i].i;
    a[i].pos = i;
  }
}

int bins(int l, int u, int m)
{ while (a[m].i != x && l < u)
  { if (x < a[m].i) { u = m - 1; m = (l + u) / 2; }
    else if (x > a[m].i) { l = m + 1; m = (l + u) / 2; }
  }
  
  if (x == a[m].i) return a[m].pos + 1;
  return -1;
}

bool compare(Number q, Number w)
{ return q.i < w.i; }

int main()
{ 
  in();
  sort(a, a + n, compare);
  cout << bins(0, n, n / 2) << endl;
  
  return 0;
}
