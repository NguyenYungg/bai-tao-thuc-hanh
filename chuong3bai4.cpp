#include <cmath>
#include <iostream>

#define Pi 3.14
#define g 9.8
using namespace std;
float cld(float l) {
  float f = (1 / (2 * Pi)) * sqrt(g / l);
  return f;
}
int main() {
  float l;
  cin >> l;
  cout << "tan so con lac don: " << cld(l) << endl;
}