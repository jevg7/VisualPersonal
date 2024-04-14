#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> numeros;

    cout << "Ingresa nnmeros. Escribe 'fin' para terminar la captura.\n";

    while (true) {
        string entrada;
        cout << "Ingrese un numero: ";
        cin >> entrada;

        if (entrada == "fin") {
            break;
        }

        try {
            int numero = stoi(entrada);
            numeros.push_back(numero);
        } catch (const invalid_argument& e) {
            cout << "Entrada inválida. Intente nuevamente.\n";
        }
    }

    cout << "Números capturados:\n";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
