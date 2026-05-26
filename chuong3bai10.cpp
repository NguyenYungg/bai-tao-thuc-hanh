#include <cmath>
#include <iostream>

using namespace std;

// Hàm tìm UCLN sử dụng trị tuyệt đối để hoạt động chính xác với cả số âm
int ucln(int a, int b) {
  a = abs(a);
  b = abs(b);
  if (b == 0)
    return a;
  return ucln(b, a % b);
}

// Hàm tìm BCNN tránh tràn số bằng cách chia trước nhân sau
int bcnn(int a, int b) {
  if (a == 0 && b == 0)
    return 0;
  return (abs(a) / ucln(a, b)) * abs(b);
}

int main() {
  int a, b;
  cout << "Nhap a va b: ";
  if (cin >> a >> b) {
    cout << "BCNN a va b la: " << bcnn(a, b) << endl;
  }
  return 0;
}
