#ifndef _CABECERA_H
#define _CABECERA_H
#include <iostream>
#include <stdlib.h>
#include <string.h>  
using namespace std;
class Vehiculo{
	private: 
		string marca,medio;
		int modelo,valor,diasaLaSemana,valDia;
		float centimetrosCubicos;
	public:
		Vehiculo(string,int,float);
		Vehiculo(string,int,int,int);
		void mostrarVehiculo();
		void gastoSinVehiculo();
		~Vehiculo();	
};
Vehiculo::Vehiculo(string _marca,int _modelo,float _centimetrosCubicos){
	marca =_marca;
	modelo =_modelo;
	centimetrosCubicos =_centimetrosCubicos;
}
Vehiculo::Vehiculo(string _medio,int _valor,int _alDia,int _diasalasemana){
	medio =_medio;
	valor =_valor;
	valDia=_alDia;
	diasaLaSemana=_diasalasemana;
}
Vehiculo::~Vehiculo(){  
	cout<<"Destruido"<<endl;
}
void Vehiculo::mostrarVehiculo(){
	cout<<"El vehiculo es de marca:	"<<marca<<" tiene "<<centimetrosCubicos<<" centimetros cubicos y es modelo "<<modelo<<endl;
}
void Vehiculo::gastoSinVehiculo(){
	int gasto=valor*valDia;
	int gastoSe=gasto*diasaLaSemana;
	cout<<"El medio es:	"<<medio<<" tiene un valor de "<<valor<<" y lo usa "<<valDia<<" veces al dia y "<<diasaLaSemana<<" dias a la semana"<<endl<<endl<<"su gasto diario es de "<<gasto<<" y su gasto semanal es de"<<gastoSe<<endl;
}
#endif /*_CABECERA_H*/
