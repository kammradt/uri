#include <iostream>
#include <math.h> 
#include <iomanip> 

using namespace std;

int main() {
    double R; cin >> R;

    cout << fixed << setprecision(3);
    double result = (4.0/3) * 3.14159 * pow(R, 3);
    cout << "VOLUME = " << result << endl;
    return 0;
}