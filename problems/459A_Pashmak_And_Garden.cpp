#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int x1,y1,x2,y2;
  cin >> x1 >> y1 >> x2 >> y2;
  if(abs(x1-x2)==abs(y1-y2)) {
    cout << x1 << " " << y2 << " " << x2 << " " << y1;
  }
  else if(x1 == x2) {
    cout << abs(y1-y2)+x1 << " " << y1 << " " << abs(y1-y2)+x2 << " " << y2;
  }
  else if(y1 == y2) {
    cout << x1 << " " << abs(x1-x2)+y1 << " " << x2 << " " << abs(x1-x2)+y1;
  }
  else {
    cout << -1;
  }
}

