#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;


int main() {
     float N1,N2,N3,N4,A;

    cin >> fixed >> setprecision(1);
    cin >> N1 >> N2 >> N3 >> N4;
        cout << fixed << setprecision(1);
        A = (N1+N2+N3+N4)/4;
        cout << "Media: " << A << endl;
    if (A>=7){
        cout << "Aluno aprovado." << endl;
    }else if (A<5){
        cout << "Aluno reprovado." << endl;
    }else if (A>=5&&A<7){
        cout << "Aluno em exame." << endl;
        float N5,A2;
        cin >> N5;
        A2 = (A+N5)/2;
        cout << "Nota do exame: " << N5 << endl;
        if(A2>=5){
            cout << "Aluno aprovado." << endl;
        }else if(A2<5){
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << A2 << endl;
    }


    return 0;
}
