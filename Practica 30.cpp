 //Desarrolle un programa y su correspondiente programa codificado para que nos permita capturar el tamaño
//de un vector en el rango de 10 a 20 inclusive, de tal manera que nos permita capturar numeros enteros positivos en el rango
//de 50 a 100 con la condicion de que no se repita la captura de un mismo numero. Despliegue la informacion en pantalla.

#include <iostream>
int tam;
bool r = false;


int main(){
	do{
    system("cls");	
	printf("Ingrese el valor del vector (10-20): ");
	scanf("%i",&tam);
	   }while(tam<10 or tam>20);
	   
	   int vector1[tam];
	   
	   for(int f=1;f<=tam;f++){
	   	do{
	   		do{
			   
	   	printf("\nIngrese %i: ",f);
	   	scanf("%i",&vector1[f]);    
	     	}while(vector1[f]<50 or vector1[f]>100);
	    r=false;
	   	for(int c=1;c<=f-1;c++){ 
	   		if(vector1[f]==vector1[c]){
	   		r=true;
			   }
		                   }
	   	
		   }while(r==true);
	                          }
	    
	    printf("\nSu vector es...\n");
	    for(int f=1;f<=tam;f++){
	    	printf("-----%i: %i \n",f,vector1[f]);
		}
	
	
}   
