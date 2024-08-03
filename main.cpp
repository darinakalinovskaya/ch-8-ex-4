#include <math.h>
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

void fibonac(int x, int y, vector<int>& v, int n) {
v.push_back(x);
v.push_back(y);
  for (int i=2;i < n;++i) {
    int v2 = v[i- 1] + v[i -2];
    v.push_back(v2);
  }
}

void pr(const vector<int>&v) {
for (int num : v) {
cout << num << endl;
}
cout << endl;
}

int main() {
  int x, y, n;
  cout << "x, y: ";
  cin >> x >> y;
  cout << "n: ";
  cin >> n;
  vector<int> f;
  fibonac(x, y, f, n);
  pr(f);


}