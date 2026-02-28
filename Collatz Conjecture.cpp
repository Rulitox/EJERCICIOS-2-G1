#include <iostream>
using namespace std;

int collatzConjecture(int numero) {
    int pasos = 0;
    long long n = numero;
    
    cout << "Secuencia: " << n;
    
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
        cout << " -> " << n;  // CAMBIADO: → por ->
        pasos++;
    }
    
    cout << endl;
    return pasos;
}

int main() {
    int numero;
    
    cout << "=== CONJETURA DE COLLATZ (3n+1) ===" << endl;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    
    if (numero <= 0) {
        cout << "Error: Debe ingresar un numero positivo." << endl;
        return 1;
    }
    
    int pasos = collatzConjecture(numero);
    cout << "Numero de pasos para llegar a 1: " << pasos << endl;
    
    return 0;
}