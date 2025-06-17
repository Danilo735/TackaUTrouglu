#include <bits/stdc++.h>

using namespace std;

// euklidovo rastojanje izmedju dve tacke
double rastojanje(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

double povrsina(double a, double b, double c) {
    double s = (a + b + c) / 2.0;  // poluobim
    return sqrt(s * (s - a) * (s - b) * (s - c));
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

    // Dužine stranica velikog trougla, kasnije za P nam je potrebno
    double a = rastojanje(x1, y1, x2, y2);
    double b = rastojanje(x2, y2, x3, y3);
    double c = rastojanje(x3, y3, x1, y1);
    double P = povrsina(a, b, c);

    // Dužine stranica manjih trouglova sa tačkom T
    double a1 = rastojanje(x1, y1, x2, y2);
    double b1 = rastojanje(x2, y2, xT, yT);
    double c1 = rastojanje(xT, yT, x1, y1);
    double P1 = povrsina(a1, b1, c1);

    double a2 = rastojanje(x2, y2, x3, y3);
    double b2 = rastojanje(x3, y3, xT, yT);
    double c2 = rastojanje(xT, yT, x2, y2);
    double P2 = povrsina(a2, b2, c2);

    double a3 = rastojanje(x3, y3, x1, y1);
    double b3 = rastojanje(x1, y1, xT, yT);
    double c3 = rastojanje(xT, yT, x3, y3);
    double P3 = povrsina(a3, b3, c3);

    // da li je zbir manjih povrsina jednak velikoj P
    if (abs((P1 + P2 + P3) == P)) {
        cout << "da";} 
    else cout << "ne";
    

    return 0;
}
