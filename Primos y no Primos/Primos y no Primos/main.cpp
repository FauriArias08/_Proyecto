#include <iostream>
#include<stdio.h>

int main() {
	int Numero, i, j, Mayor = 0, Vuelta = 0, Posicion;
	int CantidadP = 0, SumatoriaP = 0, CantidadNP = 0, SumatoriaNP = 0;
	float PromedioP = 0, PromedioNP = 0; 
	char Continuar;
	do{	
	    j = 0;
	    Vuelta++;
	    
		printf("Ingrese un numero entero: ");
		scanf("%i",&Numero);
		
		for(i = 1;i <= Numero; i++ ){ //Aqui se hace un ciclo para que el numero sea dividido entre todos los numero menores a el mismo y verificar si es primo o no
			if(Numero %i==0){
				j++;
			}
		}
		
		if(j > 2){ //si el numero es divisible por mas de dos numeros entonces no es primo 
			printf("%i no es primo \n", Numero);
			CantidadNP++;
			SumatoriaNP = SumatoriaNP + Numero;
		}else{
			printf("%i es primo \n", Numero);
			CantidadP++;
			SumatoriaP = SumatoriaP + Numero;
		}
		
		if(Numero >= Mayor){ //Aqui se comparan los numeros con el mayor y si un numero nuevo es mayor va a remplazar al que estaba antes
		    Mayor = Numero;	
		    Posicion = Vuelta;
		}

		printf("Desea continuar? (s/n): ");
		scanf("%s",&Continuar);
	}while(Continuar == 's' || Continuar == 'S');
	
	if(CantidadNP > 0 && CantidadP > 0){ //esta parte es para que no de error si solo se ingresan numeros primos o al contrario
		PromedioP = SumatoriaP / CantidadP;
	    PromedioNP = SumatoriaNP / CantidadNP;
	}else if(CantidadNP > 0 && CantidadP == 0){
		PromedioNP = SumatoriaNP / CantidadNP;
		PromedioP = 0;
	}else{
		PromedioP = SumatoriaP / CantidadP;
		PromedioNP = 0;
	}
	printf("------------------------------------------------------------------\n");
	printf("El numero mayor ingresado fue %i en la posicion %i \n", Mayor, Posicion);
	printf("\n");
	printf("La cantidad de numero primos ingresados es: %i \n",CantidadP);
	printf("La sumatoria de todos los numeros primos es: %i \n", SumatoriaP);
	printf("El promedio de los numeros primos ingresados es: %.2f \n",PromedioP);
	printf("\n");
	printf("La cantidad de numero no primos ingresados es: %i \n",CantidadNP);
	printf("La sumatoria de todos los numeros no primos es: %i \n", SumatoriaNP);
	printf("El promedio de los numeros no primos ingresados es: %.2f \n",PromedioNP);
	
	printf("Muchas gracias !!!");
	
	return 0;
}
