#include <iostream>
#include <stdlib.h>
#include <string.h>  
#include "clases.h"
using namespace std;

int main(){
	string marc,trans;
	int model,validate,valCu,cantDias,xDia;
	float cc;
	cout<<"¿Tiene usted un vehiculo?"<<endl<<"SI=1 NO=Otro numero"<<endl;
	cin >>validate;
	if(validate==1){
		cout<<"Ingrese la marca del vehiculo"<<endl;
		cin >>marc;
		cout<<"Ingrese los centimetros cubicos del vehiculo"<<endl;
		cin >>cc;
		cout<<"Ingrese el modelo del vehiculo"<<endl;
		cin >>model;
		Vehiculo veh1(marc,model,cc);
		veh1.mostrarVehiculo();
	}else{
		cout<<"Ingrese el medio que usa"<<endl;
		cin >>trans;
		cout<<"Ingrese el valor de cada transporte"<<endl;
		cin >>valCu;
		cout<<"Ingrese la cantidad de veces que lo usa al dia"<<endl;
		cin >>xDia;
		cout<<"Ingrese la cantidad de veces que lo usa a la semana "<<endl;
		cin >>cantDias;
		Vehiculo sinVeh1(trans,valCu,xDia,cantDias);
		sinVeh1.gastoSinVehiculo();
	}
	system("pause");
}
