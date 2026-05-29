#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int *first = &a[0];
  while (n > 0) {
    cout << *first << endl;
    first++;
    n--;
  }
}