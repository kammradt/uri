#include <iostream>
#include <math.h> 
#include <iomanip> 

using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    cout << fixed << setprecision(1);
    int result = (A * B) - (C * D);
    cout << "DIFERENCA = " << result << endl;
    return 0;
}