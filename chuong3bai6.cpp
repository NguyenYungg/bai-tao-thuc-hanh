#include <cmath>
#include <iostream>
using namespace std;
bool kiemtra(int n) {
  if (n % 2 == 0 && n % 5 == 0)
    return 1;
  else
    return 0;
}
int main() {
  int n;
  cin >> n;
  cout << kiemtra(n) << endl;
}