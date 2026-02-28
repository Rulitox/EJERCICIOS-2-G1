# Laboratorio de Programación en C++ 

## 📋 Problemas Resueltos

### 1. Excel Sheet Column Number
Convierte títulos de columnas de Excel a su número correspondiente.
- "A" → 1
- "AB" → 28
- "ZY" → 701

### 2. Best Time to Buy and Sell Stock
Encuentra la máxima ganancia comprando y vendiendo una acción una vez.
- [7,1,5,3,6,4] → 5
- [7,6,4,3,1] → 0

### 3. Collatz Conjecture
Implementa la conjetura de Collatz (3n+1).
- 12 → 9 pasos
- 27 → 111 pasos

## 🚀 Compilación y Ejecución

```bash
# Problema 1
g++ problema1_excel/excel_column.cpp -o excel_column
./excel_column

# Problema 2
g++ problema2_stock/max_profit.cpp -o max_profit
./max_profit

# Problema 3
g++ problema3_collatz/collatz.cpp -o collatz
./collatz
