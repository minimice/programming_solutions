//Santiago Vanegas Gil.
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <bitset>

#define D(x) cout << #x " is " << x << endl

using namespace std;

const double EPS = 1e-9;
const double PI = acos(-1.0);

template <class T> string toStr(const T &x)
{ stringstream s; s << x; return s.str(); }

template <class T> int toInt(const T &x)
{ stringstream s; s << x; int r; s >> r; return r; }

int n;

int
main() {
  while (cin >> n) {
    cout << n;
    int sign = 1, diff = n - 1, act = n;
    for (int i = 1; i < n; i++) {
      act = act + (diff--) * sign;
      if (sign == 1) sign = -1;
      else sign = 1;
      cout << " " << act;
    }
    cout << endl;
  }
  return 0;
}
