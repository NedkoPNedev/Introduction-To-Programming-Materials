#include <iostream>

using namespace std;

double Poly(const double*, const double&, const int&);
void fillCoeff(double*, const int&);

int main() {
  int power;
  double coeffs[100] = {0.0};
  double x, numCoeff;
  cin >> power;
  numCoeff = power + 1;
  fillCoeff(coeffs, numCoeff);
  cin >> x;
  cout << "Value of polynom of " << power
       << " power: " << Poly(coeffs, x, numCoeff)<<endl;
  return 0;
}

void fillCoeff(double* arr, const int& N) {
  for (int i = 0; i < N; ++i) {
    cin >> arr[i];
  }
}
//P(x) = a0*x^n + a1*x^(n-1) + ... + an-1*x^1 + an
//idea P(x) = (...(((a0)*x+ a1)*x+a2)*x + ... + an)
double Poly(const double* coeff, const double& x, const int& N) {
  double res = coeff[0];
  for (int i = 1; i < N; ++i) {
    res += res * x + coeff[i];
  }
  return res;
}
