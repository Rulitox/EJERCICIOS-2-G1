#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int titleToNumber(string columnTitle) {
    int result = 0;
    
    for (char c : columnTitle) {
        int value = c - 'A' + 1; 
        result = result * 26 + value;  
    }
    
    return result;
}

int main() {
    string columnTitle;
    
    cout << "=== EXCEL SHEET COLUMN NUMBER CONVERTER ===" << endl;
    cout << "Ingrese el titulo de columna (ej: A, AB, ZY): ";
    cin >> columnTitle;
    
    int result = titleToNumber(columnTitle);
    
    cout << "Input: columnTitle = \"" << columnTitle << "\"" << endl;
    cout << "Output: " << result << endl;
    
    return 0;
}