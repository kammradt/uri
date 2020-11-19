#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int time, average_speed;
  cin >> time >> average_speed;

  cout << fixed << setprecision(3);

  int distance = time * average_speed;
  double litters_needed = (double) distance / 12;

  cout << litters_needed << endl;

  return 0;
}