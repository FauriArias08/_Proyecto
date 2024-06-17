#include <iostream>

int main() {
	char Continuar;
	do{
		
     int Numero = 0;
	 int NumeroInvertido = 0;
	 int a;
		do{ //En este ciclo se ingresa el numero y se verifica que no sea mayor a 99999 si no se acepta se va a volver a repetir este ciclo

	   	 printf("Introduce un numero (1-99999): ");
         scanf(" %d",&Numero);
			
		 if(Numero >= 1 && Numero <=99999){ //se verifica que si se acepte el numero y se hace el proceso para sacar el inverso                          
			 printf("Numero original: %d \n",Numero);
			 a = 1;
			 while(Numero > 0){
				NumeroInvertido = (Numero%10) + (NumeroInvertido*10);
				Numero = Numero/10;
		  	}
     	 }else{ //si el numero no es aceptado se vuelve a pedir un numero
		     printf("Numero invalido, ingrese un numero en el rango aceptado \n");
	      	 a = 0;
    	 }
    	}while(a == 0); //esta es la condicion para que el ciclo se repita o no
    	
		printf("Numero inverso: %d \n",NumeroInvertido);
	
        printf("Continuar? (s/n): ");
        scanf("%s",&Continuar);
        if (Continuar == 'n' || Continuar == 'N'){
        	break;
        }
	}while((Continuar == 's' || Continuar == 'S')); //aqui es la condicion para ya terminar todo el proceso

	printf("\n Gracias por usar nuestra app \n");
		
return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


