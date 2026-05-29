#include <cmath>
#include <iostream>

using namespace std;

bool snt(int x) {
  if (x < 2) {
    return false;
  }
  for (int i = 2; i <= sqrt(x); i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  do {
    cout << "Nhap lua chon cua ban: " << endl;
    cout << "1. Kiem tra so x." << endl;
    cout << "2. In so nguyen to trong mang." << endl;
    cout << "Lua chon: ";
    cin >> n;
  } while (n != 1 && n != 2);

  switch (n) {
  case 1: {
    int x;
    cout << "Nhap vao so x: ";
    cin >> x;
    if (snt(x))
      cout << x << " la so nguyen to" << endl;
    else
      cout << x << " khong la so nguyen to" << endl;
    break;
  }
  case 2: {
    int a[100];
    for (int i = 0; i < 100; i++) {
      a[i] = i + 1;
    }

    cout << "\nCac so nguyen to tim thay trong mang:\n";
    bool coSNT = false;
    for (int i = 0; i < 100; i++) {
      if (snt(a[i])) {
        cout << a[i] << " ";
        coSNT = true;
      }
    }
    cout << endl;

    if (!coSNT) {
      cout << "Khong tim thay so nguyen to nao trong mang." << endl;
    }
    break;
  }
  default:
    cout << "Lua chon khong hop le!";
    break;
  }
  return 0;
}