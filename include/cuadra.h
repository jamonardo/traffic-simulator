#ifndef CUADRA_H
#define CUADRA_H

#include "automovil.h"
#include "semaforo.h"

class Cuadra {
	public:
		int id;	
		int * idAutos;

		Semaforo * s;
		
		int veces_congestionada;

		void setid(int);
		int getid();
		int getAutos();

		

		void setPROXIMAS(Cuadra *, Cuadra *);

		bool agregarAuto();
		bool sacarAuto();
		
		void congestion();	
}
#endif