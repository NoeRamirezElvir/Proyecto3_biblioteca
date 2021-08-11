#include <string>
#include <iostream>
#include "Prestamo.h"
using namespace std;

Prestamo::Prestamo() {

}
Prestamo::Prestamo(int id, string nombre, string apellido, string tipo_prestamo, int dias, 
	double costo_dia, string tipo_daño, string _nombreLibro) {
	establecerIDcliente(id), establecerPrimerNombre(nombre), establecerApellidoPaterno(apellido),
		establecerTipoPrestamo(tipo_prestamo), establecerDias(dias),
		establecerCostoDia(costo_dia), establecer_Daño(tipo_daño), establecer_Libro(_nombreLibro);
}

void Prestamo::establecer_Daño(std::string tipo_daño) {
	int longitud = (int)tipo_daño.size();
	if (longitud < 4)
		cerr << "Tipo de daño incorrecto" << endl;
	longitud = (longitud < 30 ? longitud : 29);
	tipo_daño.copy(Daño, longitud);
	Daño[longitud] = '\0';
}
std::string Prestamo::obtener_Daño() const {
	return Daño;
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

void Prestamo::establecerTipoPrestamo(string tipo_prestamo) {
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
void Prestamo::establecerDias(int dias) {
	if (dias > 0)
		Dias = dias;
	else
		throw invalid_argument("Los dias de alquiler deben ser > 0");
}
int Prestamo::obtenerDias() const {
	return Dias;
}
void Prestamo::establecerCostoDia(double costo_dia) {
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