#include <cmath>
#include <iomanip>
#include <iostream>

#define Pi 3.14
using namespace std;
float elec(float N, float S, float l) {
  double L = 4 * Pi * pow(10, -7) * pow(N, 2) * (S / l);
  return L;
}
int main() {
  float N, S, l;
  cin >> N >> S >> l;
  cout << "Do tu cam cua day : " << fixed << setprecision(5) << elec(N, S, l)
       << endl;
}