#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cctype>

int main(int argc, char** argv) {
	
int opcion;
int factura=0;
int contGaleria=0;
int contPalco=0;
int contBoletosTotal=0;
double contTotalGaleria=0;
double contTotalPalco=0;
double contTotal=0;

	do
	{
	char cliente[30];
	char cedula[10];
	int boleto=0; 
	int tipoCliente=0;
	int tipoBoleto;
	int numeroFactura=0;
	double valorBoleto=0;
	double valorSubtotal=0;
	double valorTotal=0;
	double descuento=0;
	double valorSinimpuesto=0;
	double impuesto=0;	
	
		system("cls");
	    printf("Ingrese su nombre: \n");
		gets(cliente);
		getchar();
		printf("Ingrese su numero de cedula: \n");
		gets(cedula);
		getchar();
		while(true){
			tipoBoleto=0;
			printf("Ingrese el tipo de boleto que desea: 1= Galeria  2=Palco\n ");
			scanf("%d", &tipoBoleto);
			getchar();
			if(tipoBoleto == 1 || tipoBoleto == 2){
				break;
			}else printf("Tipo de boleto NO VALIDO \n");
		}
		while(true){
			boleto=0;
			printf("Ingrese la cantidad de boletos que desea comprar:\n ");
			scanf("%d", &boleto);
			getchar();
			if(boleto > 0){
				break;
			}else printf("Cantidad de boletos NO VALIDO \n");
		}	
		while(true){
			printf("Ingrese el tipo de cliente para este boleto: 1=Nino o Adulto Mayor 2=Adulto \n ");
			scanf("%d", &tipoCliente);
			getchar();
			if(tipoCliente == 1 || tipoCliente == 2){
				break;
			}else printf("Tipo de cliente NO VALIDO \n");
		}
		printf("\n");
		getchar();
		
		switch(tipoBoleto){
			case 1: valorBoleto=6000;
					contGaleria=contGaleria+boleto;
					break;
			case 2: valorBoleto=12000;
					contPalco=contPalco+boleto;
					break;
		}
		
		valorSinimpuesto=(boleto*valorBoleto);
			
		switch(tipoCliente){
			case 1:descuento = valorSinimpuesto*0.3;
				  break;
			case 2:descuento = valorSinimpuesto*0;
				  break;
		}	
		
				
		valorSubtotal=valorSinimpuesto-descuento;
		impuesto=valorSubtotal*0.13;
		valorTotal=valorSubtotal+impuesto;
		
		switch(tipoBoleto){
			case 1: contTotalGaleria=valorTotal+contTotalGaleria;
					break;
			case 2: contTotalPalco=valorTotal+contTotalPalco;
					break;
		}
		
		contTotal=contTotal+valorTotal;
		factura++;
		
		printf("Numero de factura: %d \n",factura);
		printf("La cedula ingresada es: %s \n", cedula);
		printf("Nombre del cliente es: %s  \n", cliente);
		printf("El tipo de cliente seleccionado es: %d \n",tipoCliente);
		printf("La cantidad de boletos comprados es de: %d \n",boleto);
		printf("El valor de su compra sin impuestos es de: %.2lf \n",valorSinimpuesto);
		printf("El descuento applicado a su compra es de: %.2lf \n",descuento);
		printf("El valor subtotal de su compra es de: %.2lf \n",valorSubtotal);
		printf("El impuesto de venta aplicado a su compra es de: %.2lf \n",impuesto);
		printf("El valor total de su compra con impuestos es de: %.2lf \n",valorTotal);
		
	    printf("\nDesea comprar mas boletos para esta obra? (1-Si  2-No):\n");
	    printf("\n");
	    scanf("%d", &opcion);
	    printf("\n");
	    getchar();
	    
        
    } while(opcion != 2);
    
    contBoletosTotal=contGaleria+contPalco;
    double promedio=contTotal/factura;
	
		printf("\n\t Estadisticas del dia \n");
		printf("Cantidad de entradas Tiquetes Galeria: %d \n",contGaleria);
		printf("Acumulado de dinero por Tiquetes Galeria: %.2f \n",contTotalGaleria);
		printf("Cantidad de entradas Tiquetes Palco: %d \n",contPalco);
		printf("Acumulado de dinero por Tiquetes Palco: %.2f \n",contTotalPalco);
		printf("Cantidad General de Entradas: %d \n",contBoletosTotal);
		printf("Acumulado General Dinero por Entradas: %.2f \n",contTotal);
		printf("Promedio General por Ventas: %.2f \n",promedio);
		
	return 0;
}
