/* Universidad de La Frontera
* Ingeniería Civil Electrónica
*
* ICC-202 PROGRAMACION DE COMPUTADORES
*
* Tarea 1
*
* Autores: Eduardo Araneda. (e.araneda05@ufromail.cl)
* Ingrid Huaiquil. (i.Huaiquil01@ufromail.cl)
*
* Fecha:
*
* Descripción general del programa
*/
#include<stdio.h> 
int main(){
printf("======={conecta 4}=======\n");
printf("Bienvenido a conecta 4\n\n");
printf("¿quien juega de rojo?\n");
char nj1[20];
scanf("%s",nj1);
printf("¿quien juega de amarillo?\n");
char nj2[20];
scanf("%s",nj2);
printf("jugador rojo: %s\n", nj1);
printf("jugador amarillo: %s\n", nj2);
printf("Tablero actual\n\n");
if(nj1!='\0' && nj2!='\0'){
char tablero[6][7];
for(int i=0;i<6;i++){
	for(int j=0;j<7; j++){
	tablero[i][j] ={'\tO'};
		if(j<6){
		printf(" %c |",tablero[i][j]);}
		else{
			printf(" %c ",tablero[i][j]);
		}	
	}
	if(i<6){
		printf("\n----------------------------\n");
		}
}
printf("\n");}
return 0;}
