#include <iostream>
#include <string>
using namespace std;

bool esNumeroValido(const string& str) {
    bool puntoDecimal = false;
    if (str.empty()) return false;
    
    for (size_t i = 0; i < str.length(); i++) {
        char c = str[i];
        if (c == '-' && i == 0) continue;
        if (c == '.') {
            if (puntoDecimal) return false;
            puntoDecimal = true;
            continue;
        }
        if (!isdigit(c)) return false;
    }
    return !(str == "-" || str == "." || str == "-.");
}

int main() {
    string num1Str, operador, num2Str;
    
    cout << "Ingrese operacion (ej: 2 + 5): ";
    cin >> num1Str >> operador >> num2Str;
    
    if (!esNumeroValido(num1Str) || !esNumeroValido(num2Str)) {
        cout << "Error: Numeros invalidos" << endl;
        return 1;
    }
    
    float num1 = stof(num1Str);
    float num2 = stof(num2Str);
    float resultado;
    
    if (operador == "+") resultado = num1 + num2;
    else if (operador == "-") resultado = num1 - num2;
    else if (operador == "*" || operador == "x" || operador == "X") resultado = num1 * num2;
    else if (operador == "/") {
        if (num2 == 0) {
            cout << "Error: Division por cero" << endl;
            return 1;
        }
        resultado = num1 / num2;
    }
    else {
        cout << "Error: Operador invalido" << endl;
        return 1;
    }
    
    cout << "El resultado de la operacion es " << resultado << endl;
    return 0;
}