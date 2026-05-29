#include <cmath>
#include <iostream>

using namespace std;
bool so_hoan_hao(int x) {
  int Tong = 1;
  for (int i = 2; i < x; i++) {
    if (x % i == 0) {
      Tong = Tong + i;
    }
  }
  if (Tong == x)
    return true;
  else
    return false;
}
int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bool find = false;
  for (int i = 0; i < n; i++) {
    if (so_hoan_hao(a[i])) {
      cout << "so hoan hao co trong mang: " << a[i] << endl;
      find = true;
    }
  }
  if (!find) {
    cout << "Khong tim thay so nao trong mang." << endl;
  }
}