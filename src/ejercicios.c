#include <stdio.h>
#include <math.h>
#include <stdbool.h>


// Función main
void saludo(char nombre[]) {
    printf("Hola %s\n", nombre);
}

void convertirPesetasAEruso() {
    // Definimos las variables
    float pesetas, euros;

    // Solicitar al usuario la cantidad en pesetas
    printf("Introduce la cantidad en pesetas: ");
    scanf("%f", &pesetas);

    // Realizar la conversión
    euros = pesetas / 166.386;

    // Mostrar el resultado
    printf("%.2f pesetas son %.2f euros\n.", pesetas, euros);
}

void volumenCubo() {
    float lado, volumen;

    printf("Introduce el largo del lado del cubo en cm: ");
    scanf("%f", &lado);
    volumen = pow(lado, 3);
    printf("El volumen del cubo de %.2f cm de lado es de %.2f cm cubicos", lado, volumen);
}

void sumaMultiplicacion() {
    float a, b, suma, multiplicacion;
    printf("Introduce primer número: ");
    scanf("%f", &a);
    printf("Intruduce segundo número: ");
    scanf("%f", &b);
    suma = a + b;
    multiplicacion = a * b;
    printf("Suma: %.0f, Multiplicación %.0f", suma, multiplicacion);
    
}

void parImpar() {
    int a;
    printf("Defina un número: ");
    scanf("%d", &a);

    if (a%2 == 0) {
        printf("El número %d es par!", a);
    } else {
        printf("El número %d es impar!", a);
    }
}

void letraVocal() {
    char letra;
    char vocales[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int esVocal = 0;

    printf("Introduce una vocal: ");
    scanf("%c", &letra);

    for (int i = 0; i<10; i++) {
        if (letra == vocales[i]) {
            esVocal = 1;
            break;
        }
    }

    if (esVocal) {
        printf("La letra '%c' es una vocal.\n", letra);
    } else {
        printf("La letra '%c' no es una vocal.\n", letra);
    }

}

void mesAnya() {
    /*
    Este script solicita al usuario un número, en referencia a un mes, y devuelve el texto del mes.
    Ejemplo: si escribe 1, devuelve 'Enero'.
    */
    int mes;
    printf("Introduzca mes del año: ");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1:
        printf("Enero");
        break;
    case 2:
        printf("Febrero");
        break;
    case 3:
        printf("Marzo");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Mayo");
        break;
    case 6:
        printf("Junio");
        break;
    case 7:
        printf("Julio");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Septiembre");
        break;
    case 10:
        printf("Octubre");
        break;
    case 11:
        printf("Noviembre");
        break;
    case 12:
        printf("Diciembre");
        break;
    default:
        printf("Expresión incorrecta!");
        break;
    }
}

void numeroMayor() {
    float a, b;
    printf("Número a: ");
    scanf("%f", &a);
    printf("Número b: ");
    scanf("%f", &b);

    if (a > b) {
        printf("%.0f es mayor que %.0f", a, b);
    } else {
        printf("%.0f es mayor que %.0f \n", b, a);
    }
}

void mitad() {
    float a, fin, mitad;
    fin = 0;
    while (fin == 0) {
        printf("Introduzca un número (0=FIN): ");
        scanf("%f", &a);
        if (a != 0) {
            mitad = a/2;
            printf("La mitad es %.2f. \n", mitad);
        } else {
            printf("Fin confirmado. \n");
            fin = 1;
        }
    }
}

void sumatorio1() {
    char seguir;
    int acumulador, contador, numero;
    acumulador = 0;
    contador = 0;

    do {
        printf("\nIntroduzca un número: ");
        scanf("%d", &numero);
        acumulador += numero;
        contador++;
        while (getchar() != '\n'); // con esto limpiamos el buffer de entrada para poder leer el siguiente parametro
        printf("\nDesea introducir otro número? (s/n): ");
        scanf("%c", &seguir);

        
    } while (seguir != 'n');

    printf("Has intrducido %d números. \n", contador);
    printf("La suma total es de: %d \n", acumulador);
}

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // Los números menores o iguales a 1 no son primos
    }

    for (int i = 2; i * i <= numero; i++) { // Verificamos hasta la raíz cuadrada del número
        if (numero % i == 0) {
            return false; // Si tiene un divisor, no es primo
        }
    }

    return true; // Si no se encontraron divisores, es primo
}

void primos(int maximo) {
    for (int i = 0; i < maximo; i++) {
        if (esPrimo(i)) {
            printf("--> %d \n", i);
        }
    }
}

void calculadora(){
    int opcion, n1, n2, resultado;
    char salir;
    do {
        printf("\n>>> MENU CALCULADORA <<<");
        printf("\n\n1. Sumar dos números.");
        printf("\n2. Restar dos números.");
        printf("\n3. Multiplicar dos números.");
        printf("\n4. Dividir dos números.");
        printf("\n5. Salir.");
        printf("\nOpcion: ");
        scanf("%d", &opcion);
        if (opcion == 5){
            break;
        }
        while (getchar() != '\n');
        printf("\nNúmero 1: ");
        scanf("%d", &n1);
        printf("\nNúmero 2: ");
        scanf("%d", &n2);

        switch (opcion)
        {
        case 1:
            resultado = n1 + n2;
            printf("La suma es: %d", resultado);
            break;
        case 2:
            resultado = n1 - n2;
            printf("La resta es: %d", resultado);
        case 3:
            resultado = n1 * n2;
            printf("La multiplicación es: %d", resultado);
        case 4:
            resultado = n1/n2;
            printf("La división es: %d", resultado);
        
        default:
            break;
        }

    } while (opcion != 5);
}

int main() {
    // char nombre [] = "Juan";
    // saludo(nombre);
    // convertirPesetasAEruso();
    // volumenCubo();
    // sumaMultiplicacion();
    // parImpar();
    // letraVocal();
    // mesAnya();
    // numeroMayor();
    // mitad();
    // sumatorio1();
    //primos(50);
    calculadora();
}