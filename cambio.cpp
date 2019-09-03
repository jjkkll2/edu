#include <stdio.h>

int main (){
	//Variables
	int mov, i=0,j=0, pedro=6;
	char tablero[6][7];
	char columna[]={'1','2','3','4','5','6','7','\0'};
	char nombre1[20];
	char nombre2[20];
	
	
	
	printf("\n\n\t\t  Bienvenidos a Conecta 4 ICE\n\n");
	
	printf("Jugador 1, Ingrese su nombre:\n");
	scanf("%s",nombre1);
	printf("\n%s su ficha es 'R'\nBienvenido al juego!!\n\n\n",nombre1);
	
	printf("Jugador 2, Ingrese su nombre:\n");
	scanf("%s",nombre2);
	printf("\n%s su ficha es 'A'\nBienvenido al juego!!\n\n\n", nombre2);
	printf("Jugadores:\n%s  y %s en cada turno deben indicar la columna en la cual quieran poner sus fichas. \n", nombre1, nombre2);
	printf("El jugador que tengas 4 de sus fichas alineadas de manera consecutiva vertical, horizontal o diagonalmente gana el juego\n");
	printf("\n\tQue el mejor gane!!!\n\n");
	
	
//Incializacion de tablero
for (int i=0; i<6; i++){
	for(int j=0; j<7; j++){
		tablero[i][j]='O';
	}
}



//Mostrar Tablero
printf("\n\n\t\t\t'Tablero Conecta 4'\n\n");
//Indicadores de columna
for(int i=0; i<8;i++){
	printf("\t %c ",columna[i]);
}
//Tablero
for (int i=0; i<6; i++){
	printf("\n");
	if(i<6){
		printf("\n\t-----------------------------------------------------\n");
	}
	for (int j=0; j<7; j++){
		if(j<7){
		printf(" \t| %c |", tablero[i][j]);
			}
	}
}
printf("\n\t-----------------------------------------------------\n");




//Jugador 1
printf("%s ingresa columna donde pondras tu ficha:\n", nombre1);
scanf("%d",&mov);
while( (mov<0) || (mov>7) || (tablero[i][j]!='O') ){
	printf("Ingrese movimiento valido:\n");
	scanf("%d", &mov);
}
if( (mov>0) && (mov<7) && (tablero[i][j]=='O')){
	
	tablero[pedro][mov-1]='R';
} 


/*
if( (mov<0) || (mov>7) || (tablero[i][j]!='O')  ){
	printf("Ingrese movimiento valido:\n");
	scanf("%d",&mov);
} else {
	i=6;
	i--;
	tablero[i][mov-1]='R';
}
* */

//Mostrar Tablero
printf("\n\n\t\t\t'Tablero Conecta 4'\n\n");
//Indicadores de columna
for(int i=0; i<8;i++){
	printf("\t %c ",columna[i]);
}
//Tablero
for (int i=0; i<6; i++){
	printf("\n");
	if(i<6){
		printf("\n\t-----------------------------------------------------\n");
	}
	for (int j=0; j<7; j++){
		if(j<7){
		printf(" \t| %c |", tablero[i][j]);
			}
	}
}
printf("\n\t-----------------------------------------------------\n");

//Revisar tablero

//Jugador 2
printf("%s ingresa columna donde pondras tu ficha:\n", nombre2);
scanf("%d",&mov);
if( (mov<0) || (mov>7) || (tablero[i][j]!='O')  ){
	printf("Ingrese movimiento valido:\n");
	scanf("%d",&mov);
} else {
	i=6;
	i--;
	tablero[i][mov-1]='A';
}



//Mostrar Tablero
printf("\n\n\t\t\t'Tablero Conecta 4'\n\n");
//Indicadores de columna
for(int i=0; i<8;i++){
	printf("\t %c ",columna[i]);
}
//Tablero
for (int i=0; i<6; i++){
	printf("\n");
	if(i<6){
		printf("\n\t-----------------------------------------------------\n");
	}
	for (int j=0; j<7; j++){
		if(j<7){
		printf(" \t| %c |", tablero[i][j]);
			}
	}
}
printf("\n\t-----------------------------------------------------\n");

//Revisar tablero


return 0;
}
