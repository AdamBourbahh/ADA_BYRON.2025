/*Saliendo de la crisis
La abeja reina dijo hace unos cuantos meses que la colmena estaba por fin saliendo de la crisis. Ahora Maya quiere comprobar c�mo de ciertas eran aquellas declaraciones, as� que ha recopilado el hist�rico de distintos indicadores econ�micos desde el d�a de la declaraci�n hasta hoy para ver si, efectivamente, todos ellos han ido creciendo d�a a d�a desde entonces.

Entrada
La entrada estar� compuesta de distintos indicadores econ�micos, cada uno de ellos en dos l�neas distintas. La primera l�nea indica el n�mero de muestras recogidas del indicador (0 < n = 100). La segunda l�nea contiene n n�meros positivos con los valores econ�micos (entre 1 y 10.000.000) medidos desde el d�a de la declaraci�n de la abeja reina hasta el d�a de hoy.

La entrada termina con un indicador sin muestras (0) que no debe procesarse.

Salida
Por cada caso de prueba se dir� si seg�n ese indicador la abeja reina ten�a raz�n (SI) o las cosas no est�n tan bien como ella cree (NO).
Entrada de ejemplo
3
1 3 6
4
1 3 2 5
3
6 6 6
0
Salida de ejemplo
SI
NO
NO
*/
#include <iostream>
using namespace std;

int main() {
    int num_muestras;  // N�mero de muestras a procesar
    cin >> num_muestras;

    while (num_muestras != 0) {
        int contador = 1;  // Contador para iterar sobre las muestras
        int indice_anterior, indice_actual;
        bool hay_crisis = false;

        // Leer el primer �ndice econ�mico
        cin >> indice_anterior;

        // Procesar el resto de las muestras
        while (contador < num_muestras) {
            cin >> indice_actual;

            // Si el �ndice actual es menor o igual al anterior, hay crisis
            if (indice_anterior >= indice_actual) {
                hay_crisis = true;
            }

            // Actualizar el �ndice anterior para la siguiente comparaci�n
            indice_anterior = indice_actual;
            contador++;
        }

        // Imprimir el resultado seg�n la detecci�n de crisis
        if (hay_crisis) {
            cout << "NO\n";
        } else {
            cout << "SI\n";
        }

        // Leer el pr�ximo n�mero de muestras para continuar o terminar
        cin >> num_muestras;
    }

    return 0;
}

