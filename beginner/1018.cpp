#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
  int money;
  cin >> money;
  cout << money << endl;

  vector<int> notes{100, 50, 20, 10, 5, 2, 1};

  for (int i = 0; i < notes.size(); i++)
  {
    int qtd = 0;
    if (money > 0)
    {
      qtd = money / notes[i];
      money -= qtd * notes[i];
    }
    cout << qtd << " nota(s) de R$ " << notes[i] << ",00" << endl;
  }

  return 0;
}