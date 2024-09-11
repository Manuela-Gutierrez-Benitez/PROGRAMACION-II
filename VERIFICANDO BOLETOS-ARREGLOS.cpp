#include <iostream>
using namespace std;

int main() {
int n;
cout << "Ingrese el número de dígitos del boleto: ";
cin >> n;

if (n % 2 != 0) {
cout << "El número de dígitos debe ser par. No se puede verificar el boleto."
<< endl;
return 1;
}

int digitos[n];
int suma_primera_mitad = 0, suma_segunda_mitad = 0;

// Leer los dígitos
cout << "Ingrese los dígitos del boleto (separados por un espacio): ";
for (int i = 0; i < n; i++) {
cin >> digitos[i];
if (i < n / 2) {
suma_primera_mitad += digitos[i];
} else {
suma_segunda_mitad += digitos[i];
}
}

if (suma_primera_mitad == suma_segunda_mitad) {
cout << suma_primera_mitad << " 1" << endl;
} else {
cout << (suma_primera_mitad + suma_segunda_mitad) << " 0" << endl;
}

return 0;
}
