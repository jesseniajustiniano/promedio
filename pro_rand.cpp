/*
AUTOR=Jessenia Justiniano Tapeosi
FECHA=30-01-24*/
#include <iostream>
#include <cstdlib>  // Necesario para la generación de números aleatorios
#include <ctime>    // Necesario para la semilla de la función rand()

int main() {
	// Semilla para la generación de números aleatorios
	std::srand(std::time(0));
	
	const int cantidadNumeros = 10;
	int numeros[cantidadNumeros];
	
	// Ingresar 10 números aleatorios
	for (int i = 0; i < cantidadNumeros; ++i) {
		numeros[i] = std::rand() % 100;  // Números aleatorios entre 0 y 99
	}
	
	// Mostrar los números ingresados
	std::cout << "Números ingresados: ";
	for (int i = 0; i < cantidadNumeros; ++i) {
		std::cout << numeros[i] << " ";
	}
	std::cout << std::endl;
	
	// Encontrar el mayor, el menor y calcular el promedio
	int mayor = numeros[0];
	int menor = numeros[0];
	int suma = numeros[0];
	
	for (int i = 1; i < cantidadNumeros; ++i) {
		if (numeros[i] > mayor) {
			mayor = numeros[i];
		}
		
		if (numeros[i] < menor) {
			menor = numeros[i];
		}
		
		suma += numeros[i];
	}
	
	double promedio = static_cast<double>(suma) / cantidadNumeros;
	
	// Mostrar resultados
	std::cout << "El mayor número es: " << mayor << std::endl;
	std::cout << "El menor número es: " << menor << std::endl;
	std::cout << "El promedio es: " << promedio << std::endl;
	
	return 0;
}
