#include <iostream>
#include <math.h> 
#include <iomanip> 

using namespace std;

int main() {
    int code_p1, qtd_p1;
    int code_p2, qtd_p2;
    double price_p1, price_p2;

    cin >> code_p1 >> qtd_p1 >> price_p1;
    cin >> code_p2 >> qtd_p2 >> price_p2;

    cout << fixed << setprecision(2);
    double result = (qtd_p1 * price_p1) + (qtd_p2 * price_p2);
    cout << "VALOR A PAGAR: R$ " << result << endl;
    return 0;
}