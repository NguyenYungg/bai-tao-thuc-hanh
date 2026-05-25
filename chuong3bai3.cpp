#include <cmath>
#include <iomanip> // Thêm thư viện này để định dạng hiển thị số
#include <iostream>

#define Pi 3.14
using namespace std;
double electric(double i, double r) {
  double B;
  B = 2 * Pi * pow(10, -7) * i * r;
  return B;
}
int main() {
  double i, r;
  cin >> i >> r;
  // fixed: không dùng ký hiệu 'e' khoa học
  // setprecision(9): lấy 9 chữ số sau dấu phẩy (phù hợp với mũ 10^-7)
  cout << "cam ung dien tu la: " << fixed << setprecision(9) << electric(i, r) << endl;
}