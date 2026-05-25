#include <cmath>
#include <iostream>

using namespace std;
void CVS(float a, float b, float c, float &CV, float &S) {
  float p;
  p = (a + b + c) / 2;
  CV = a + b + c;
  S = sqrt(p * (p - a) * (p - b) * (p - c));
}
int main() {
  float a, b, c, CV, S;
  cout << "Nhap vao do dai 3 canh abc: ";
  cin >> a >> b >> c;
  if (a + b > c && a + c > b && b + c > a) {
    CVS(a, b, c, CV, S);
    cout << "Chu vi tam giac: " << CV << endl;
    cout << "Dien tich tam giac: " << S << endl;
  } else {
    cout << "Ba canh vua nhap khong phai la 3 canh cua mot tam giac!" << endl;
  }
}