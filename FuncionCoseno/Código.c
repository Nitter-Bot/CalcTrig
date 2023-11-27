#include <stdio.h>

double convertirARadianes(double grados) {
    return grados * (3.14159265358979323846 / 180.0);
}

/*double calcularFactorial(int n) {
    double factorial = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}*/

double calcularCoseno(double x) {
    double resultado = 1.0;
    double termino = 1.0;
    int n = 1;
    x=convertirARadianes(x)//Cambiamos el angulo a radianes
    while (termino >= 0.0000001) {
        termino = (termino * x * x) / (2 * n * (2 * n - 1));
        if (n % 2 == 0) {
            resultado += termino;
        } else {
            resultado -= termino;
        }
        n++;
    }

    return resultado;
}

int main() {
    double angulo;

    // Ingresa el ángulo en grados
    printf("Ingresa el ángulo en grados: ");
    scanf("%lf", &angulo);

    // Calcula el coseno y muestra el resultado
    double resultado = calcularCoseno(angulo);
    printf("El coseno de %lf grados es aproximadamente: %lf\n", angulo, resultado);

    return 0;
}
