#include <iostream>

using namespace std;


int main() {
    double A;
    cin >> A;

    int H = A/100;
    double aux = A-(100*H);
    int F = aux/50;
      aux = aux-(50*F);
    int T = aux/20;
      aux = aux-(20*T);
    int TA= aux/10;
      aux = aux-(10*TA);
    int FA= aux/5;
      aux = aux-(5*FA);
    int TB= aux/2;
      aux = aux-(2*TB);
    int O = aux;
      aux = A-((H*100)+(F*50)+(T*20)+(TA*10)+(FA*5)+(TB*2)+(O));
    int AA= aux/.50;
      aux = aux-(.50*AA);
    int BB= aux/.25;
      aux = aux-(.25*BB);;
    int CC= aux/.10;
      aux = aux-(.10*CC);
    int DD= aux/.05;
      aux = aux-(.05*DD);
    int EE= aux/.01;
    //cout << A << endl;
    cout << "NOTAS:" << endl;
    cout << H << " nota(s) de R$ 100.00" << endl;
    cout << F << " nota(s) de R$ 50.00" << endl;
    cout << T << " nota(s) de R$ 20.00" << endl;
    cout << TA << " nota(s) de R$ 10.00" << endl;
    cout << FA << " nota(s) de R$ 5.00" << endl;
    cout << TB << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << O << " moeda(s) de R$ 1.00" << endl;
    cout << AA << " moeda(s) de R$ 0.50" << endl;
    cout << BB << " moeda(s) de R$ 0.25" << endl;
    cout << CC << " moeda(s) de R$ 0.10" << endl;
    cout << DD << " moeda(s) de R$ 0.05" << endl;
    cout << EE << " moeda(s) de R$ 0.01" << endl;
    return 0;
}
