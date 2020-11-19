#include <iostream>
#include <math.h> 
#include <iomanip> 

using namespace std;


int bigger(int N0, int N1){
    return (N0 + N1 + abs(N0-N1))/2;
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    cout << bigger(bigger(A, B), C) << " eh o maior" << endl;

    return 0;
}