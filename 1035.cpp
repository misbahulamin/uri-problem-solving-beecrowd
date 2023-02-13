// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*A B C D
    ------------
    => (B > C) && (D > A) && (C + D) > (A + B) && C > 0 && D > 0 && A is even.
    */
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    // 2 3 2 6
    
    if((b>c) && (d>a) && ((c+d)>(a+b)) && (c>0) && (d>0) && (a%2==0))
    {
        cout<<"Valores aceitos\n"<<endl;
    }
    else cout<<"Valores nao aceitos\n"<<endl;
    return 0;
}