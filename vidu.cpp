#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "Nhap 1 so nguyen a";
  cin >> a;
  cout << "boi so cua " << a << "voi 15 so dau tien la ";
  for (int i = 1; i < 16; i++) {
    cout << "\n" << a*i ;
  }
  return 0;
}