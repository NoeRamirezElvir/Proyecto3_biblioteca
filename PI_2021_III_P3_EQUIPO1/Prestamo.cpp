#include <string>
#include <iostream>
#include "Prestamo.h"
using namespace std;

Prestamo::Prestamo() {
	establecerPrestamoID(0), establecerTipoPrestamo("   "), establecerDias(0),
		establecerCostoDia(0.00), establecer_Libro("   ");
}
Prestamo::Prestamo(int id, string _nombreLibro,  string tipo_prestamo, int dias,
	double costo_dia,string nombre,string apellido) {
	establecerPrestamoID(id), establecerTipoPrestamo(tipo_prestamo), establecerDias(dias),
		establecerCostoDia(costo_dia), establecer_Libro(_nombreLibro),establecerPrimerNombre(nombre),establecerApellidoPaterno(apellido); 
}
 
void Prestamo::establecerPrestamoID(int id) { //
	if (id < 0)
		cerr << "ID incorrecto." << endl;
	PrestamoID = id; 
}
int Prestamo::obtenerPrestamoID()const {
	return PrestamoID; 
}

void Prestamo::establecer_Libro(string _nombreLibro) {
	int longitud = (int)_nombreLibro.size();
	if (longitud < 3)
		cerr << "El nombre del libro es invalido." << endl;
	longitud = (longitud < 15 ? longitud : 14);
	_nombreLibro.copy(Libro, longitud);
	Libro[longitud] = '\0';
}
string Prestamo::obtener_Libro()const {
	return Libro;
}

void Prestamo::establecerTipoPrestamo(string tipo_prestamo) {//
	int longitud = (int)tipo_prestamo.size();
	if (longitud < 6)
		cerr << "Tipo de prestamo invalido" << endl;
	longitud = (longitud < 30 ? longitud : 29);
	tipo_prestamo.copy(tipoPrestamo, longitud);
	tipoPrestamo[longitud] = '\0';
}
string Prestamo::obtenerTipoPrestamo() const {
	return tipoPrestamo;
}
void Prestamo::establecerDias(int dias) {//
	if (dias > 0)
		Dias = dias;
	else
		throw invalid_argument("Los dias de alquiler deben ser > 0");
}
int Prestamo::obtenerDias() const {
	return Dias;
}
void Prestamo::establecerCostoDia(double costo_dia) {//
	if (costo_dia >= 0)
		costoDia = costo_dia;
	else
		throw invalid_argument("El costo por dia debe ser >= 0");
}
double Prestamo::obtenerCostoDia() const {
	return costoDia;
}

void Prestamo::imprimir() const {
	cout << "Tipo de prestamo: " << obtenerTipoPrestamo() << endl
		<< "Dias de alquiler: " << obtenerDias() << endl
		<< "Costo por dia: " << obtenerCostoDia() << endl;
}
