#include <iostream>

using namespace std;

int main()
{
    double velocidad1, velocidad2;
    cout << "Estimado, ingrese una velocidad en Km/h" << endl;
    cin >> velocidad1;
    velocidad2 = (velocidad1 * 1000 / 3600) ;
    cout <<velocidad2<<"M/S"<<endl;
    system("pause");

    return 0;
}
