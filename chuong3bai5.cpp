#include <cmath>
#include <iostream>

using namespace std;
bool snt(int n) {
  if (n < 2) {
    return false; // Các số nhỏ hơn 2 không phải là số nguyên tố
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false; // Nếu chia hết cho bất kỳ số nào từ 2 đến căn bậc hai của
                    // n, không phải là số nguyên tố
    }
  }
  return true; // Nếu không chia hết cho số nào, thì là số nguyên tố
}
int main() {
  int n;
  do {
    cout << "nhap n: ";
    cin >> n;
  } while (n < 0);
  if (snt(n)) {
    cout << n << " la so nguyen to" << endl;
  } else
    cout << n << " khong la so nguyen to" << endl;
}