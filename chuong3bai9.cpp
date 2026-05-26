#include <cmath>
#include <iostream>

using namespace std;
void timuoc(int n) {
  cout << "Uoc cua n la : ";
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      cout << " " << i;
    }
  }
}
int main() {
  int n;
  cin >> n;
  timuoc(n);
}