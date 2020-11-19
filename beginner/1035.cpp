#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  bool _0 = B > C && D > A;
  bool _1 = (C + D) > (A + B);
  bool _2 = C > 0 && D > 0;
  bool _3 = !(A % 2);

  if (_0 && _1 && _2 && _3)
    cout << "Valores aceitos";
  else
    cout << "Valores nao aceitos";

  cout << endl;

  return 0;
}
