#include <iostream>
#include <math.h> 
#include <iomanip> 

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    cout << fixed << setprecision(1);
    double result = ((A*2) + (B*3)+ (C*5)) / (10);
    cout << "MEDIA = " << result << endl;
    return 0;
}