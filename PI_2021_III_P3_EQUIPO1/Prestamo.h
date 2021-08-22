#ifndef PRESTAMO_H
#define PRESTAMO_H
#include <string>
#include "Daño.h"
#include "Libro.h"
#include "Cliente.h"

class Prestamo : public Cliente
{
public:
	Prestamo();
	Prestamo(int,std::string, std::string, int, double,std::string,std::string);

	void establecerPrestamoID(int);
	int obtenerPrestamoID()const;
	void establecerTipoPrestamo(std::string);
	std::string obtenerTipoPrestamo() const;
	void establecerDias(int);
	int obtenerDias() const;
	void establecerCostoDia(double);
	double obtenerCostoDia() const;

	void establecer_Libro(std::string);
	std::string obtener_Libro() const;

	void imprimir() const ;


private:
	int PrestamoID; 
	char tipoPrestamo[30];
	int Dias;
	double costoDia;
	char Libro[15];
};


#endif // !PRESTAMO_H


