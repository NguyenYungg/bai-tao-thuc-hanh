#include <cmath>
#include <iostream>

using namespace std;
int max(int a, int b, int c, int d) {
  int max = a;
  if (max < b)
    max = b;
  if (max < c)
    max = c;
  if (max < d)
    max = d;
  return max;
}
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << "gia tri lon nhat la: " << max(a, b, c, d) << endl;
}