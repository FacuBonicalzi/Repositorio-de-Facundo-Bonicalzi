#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
   double m1,m2,b1,b2,xi,yi;

    cout << "Ingrese la pendiente de la primera recta." << endl;
    cin >> m1;
    cout << "Ingrese el termino independiente de la primera recta." << endl;
    cin >>b1;
    cout<< "Ingrese la pendiente de la segunda recta."<<endl;
    cin >> m2;
    cout<<"Ingrese el termino independiente de la segunda recta."<<endl;
    cin>> b2;
xi=((b2-b1)/(m1-m2));
yi= ((m1*xi+b1));
    if(m1==m2) {cout<<"No existe interseccion entre estas rectas ya que son paralelas."<<endl;}
    else{
       cout<<"("<<xi<<";"<<yi<<") es el punto donde ambas rectas se cruzan."<<endl;}


system("pause");


   return 0;
}
