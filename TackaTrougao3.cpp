#include <bits/stdc++.h>

using namespace std;

// Vraća pozitivan broj ako je orijentacija pozitivna (levi obrt),
// negativan broj ako je negativna (desni obrt), 0 ako su kolinearne.
double orijentacija(double x1, double y1, double x2, double y2, double x3, double y3) {
    //AB * AT
    //AB = B − A = (x2 - x1, y2 - y1)
    //AT = T − A = (x3 - x1, y3 - y1)
    //klasicna determinanta
    return (x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1);
}

int main() {
    double xT, yT;
    double x1, y1;
    double x2, y2;
    double x3, y3;

    cin >> xT >> yT;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    //ABT, BCT i CAT
    double t1 = orijentacija(x1, y1, x2, y2, xT, yT);
    double t2 = orijentacija(x2, y2, x3, y3, xT, yT);
    double t3 = orijentacija(x3, y3, x1, y1, xT, yT);

    // isti znak
    if ((t1 > 0 && t2 > 0 && t3 > 0) || (t1 < 0 && t2 < 0 && t3 < 0)) {
        cout << "da";
    } else {
        cout << "ne";
    }

    return 0;
}
