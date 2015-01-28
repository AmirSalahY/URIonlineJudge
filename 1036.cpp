#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    float A,B,C,Q;
    cin >> A >> B >> C;
    Q = (B*B)-4*A*C;
    if (Q>=0 && A != 0){
        cout << fixed << setprecision(5);
        cout << "R1 = " << ((B*-1)+ sqrt(Q))/(2*A) << endl;
        cout << "R2 = " << ((B*-1)- sqrt(Q))/(2*A) << endl;
    }else{
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}
