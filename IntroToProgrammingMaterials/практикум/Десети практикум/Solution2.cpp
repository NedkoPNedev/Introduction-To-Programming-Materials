#include <cmath>
#include <iostream>

using namespace std;

int quadraticEq(const double&, const double&, const double&, double&, double&);

int main() {
  double a, b, c, x1, x2;
  cin >> a >> b >> c;
  switch (quadraticEq(a, b, c, x1, x2)) {
    case -2:
      cout << "Two complex roots\n";
      break;
    case -1:
      cout << "No roots\n";
      break;
    case 0:
      cout << "All real numbers are roots\n";
      break;
    case 1:
      cout << "Only one root x1: " << x1 << endl;
      break;
    case 2:
      cout << "Two real roots.\nx1: " << x1 << endl << "x2: " << x2 << endl;
      break;
  }
  return 0;
}

int quadraticEq(const double& a, const double& b, const double& c, double& x1,
                double& x2) {
  int theCase;
  double zero = 0.0;

  if (a == zero) {
    if (b == zero)
      theCase = (c == zero) ? 0 : -1;
    else {
      x1 = -c / b;
      theCase = 1;
    }
  } else {
    double dis = b * b - 4 * a * c;
    if (dis < zero) {
      theCase = -2;
    } else {
      dis = sqrt(dis);
      x1 = (-b - dis) / (2 * a);
      x2 = (-b + dis) / (2 * a);
      theCase = 2;
    }
  }
  return theCase;
}
