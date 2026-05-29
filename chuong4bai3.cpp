#include <cmath>
#include <iostream>

using namespace std;
float tinh_toan(int a[], int n) {
  int *first = a;
  int S = 0;
  for (int i = 0; i < n; i++) {
    if (*first % 2 == 0 && *first % 3 == 0 && *first % 8 != 0) {
      S = S + *first;
    }
    first++;
  }
  return (float)S / 2;
}
int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << "Ket qua tinh toan la: " << tinh_toan(a, n) << endl;
}