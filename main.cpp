#include <iostream>
using namespace std;

double calcularValorDePi() {
    float pi = 0.0;
    int valor = 1;
    int iterations = 1000000;
    int signo = 1;
    int fraccion = 1/valor;

    for (int i = 0; i < iterations; i++)
    {
       pi = pi + signo * fraccion;
       signo = signo * -1;
       a = a + 2;

       if(static_cast<int>(pi * 1e6) == 3141592){
        break;
       }
    }
    return pi * 4;
}

int main() {
  double pi = calcularValorDePi();
  cout.precision(7);
  cout << "el valor de pi aproximado es: " << pi << endl;
   
return 0;
}