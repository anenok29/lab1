#include <iostream>
#include <cmath>
using namespace std;
struct comp
{
    double z, i;
};
struct corni     
{
    comp coren1, coren2;      
};

double dis(double a, double b, double c)// функц€ по нахождению дискриминанта
{
    double xld;
    xld = ((b * b) - (4 * a * c));
    cout << "discriminant: " << xld << endl;
    return xld;
}

corni Resh(double a, double b, double c) { //функци€ по нахождению корней
    double D;
    corni R;
    D = dis(a, b, c);
    if (D == 0) {
        R.coren1.z = (0 - b) / (2 * a);
        R.coren2.z = R.coren1.z;
        R.coren1.i = 0;
        R.coren2.i = 0;
    }
    else if (D > 0) {
        R.coren1.z = ((0 - b) + sqrt(b * b - 4 * a * c)) / (2*a);
        R.coren2.z = ((0 - b) - sqrt(b * b - 4 * a * c)) / (2 * a);
        R.coren1.i = 0;
        R.coren2.i = 0;
    }
    else {
        R.coren1.z = (0 - b) / (2 * a);
        R.coren1.i = sqrt(4 * a * c - b * b) / (2 * a);
        R.coren2.z = (0 - b) / (2 * a);
        R.coren2.i = 0 - R.coren1.i;
    }
    return R;
}


int main()
{
    double a, b, c, x;
    corni R;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;
    R = Resh(a,b,c);
    cout << "First root " << R.coren1.z << "+" << R.coren1.i << "i" << endl;
    cout << "Second root " << R.coren2.z << "+" << R.coren2.i << "i" << endl;



    return 0;
}