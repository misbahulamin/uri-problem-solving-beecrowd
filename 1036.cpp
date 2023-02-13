#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, result;
    cin >> a >> b >> c;
    /*
        Formula:
        x1 = (- b + sqrt(b*b - 4a**c)/2*a)
        x1 = (- b - sqrt(b*b - 4*a*c)/2*a)
        here check:
            (b*b - 4ac) > 0 && a != 0
    */
    result = b * b - 4 * a * c;
    if(result>=0 && a!=0)
    {
        double sum1 = ((-b + sqrt(result)) / (2 * a));
        cout <<"R1 = "<< fixed << setprecision(5) << sum1 << endl;
        sum1 = ((-b - sqrt(result)) / (2 * a));
        cout <<"R2 = "<< fixed << setprecision(5) << sum1 << endl;
    }
    else
        cout << "Impossivel calcular" << endl;
    return 0;
}