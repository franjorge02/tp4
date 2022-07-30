#include <stdio.h>
#include <stdlib.h>

void datos (int v1[100], int n1);
int menorvalor (int v1[100],int n1, int min1);
void muestra(int v1[100], int n1);

main(){
	int v[100];
	int n;
     int min;
     min=1000000;
	int valormin;
	printf("\nIngrese la cantidad de datos que tendra el array: ");
     scanf("%d",&n);
	datos(v,n);
     printf("\n");
     system("pause");
	system("cls");
	valormin= menorvalor(v,n,min);
	printf("\nEl menor valor es: %d",valormin);
	printf("\n");
     system("pause");
     system("cls");
     muestra(v,n);
	printf("\n");
	system("pause");
     system("cls");
}

void datos (int v1[100], int n1){
	for(int i=0; i<n1; i++){
	     printf("\nIngrese el valor del arreglo numero %d: ",i+1);
		scanf("%d",&v1[i]);
     }

}

int menorvalor (int v1[100],int n1,int min1){
	for(int i=0; i<n1; i++){
	    if(v1[i]<min1){
		   min1=v1[i];
         }
     }
	return min1;
 
}
 
void muestra(int v1[100], int n1){
	for(int i=0; i<n1; i++){
	    printf("\n El elemento %d del vector es: %d",i+1,v1[i]);
     }
}
