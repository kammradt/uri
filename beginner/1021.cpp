#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
  double money;
  cin >> money;
  money += 1e-9;
  vector<double> notes{
      100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};

  int size = notes.size();

  for (int i = 0; i < size; i++)
  {
    int qtd = 0;
    double current_cell = notes[i];
    if (money > 0)
    {
      qtd = money / current_cell;
      money -= qtd * current_cell;
    }

    if (current_cell == 100.0)
      cout << "NOTAS:" << endl;
    if (current_cell == 1.0)
      cout << "MOEDAS:" << endl;

    cout << fixed << setprecision(2);
    cout << qtd << " " << (current_cell > 1.0 ? "nota" : "moeda") << "(s) de R$ " << current_cell << endl;
  }

  return 0;
}
