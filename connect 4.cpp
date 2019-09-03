#include <stdio.h>

int main (){
	//Variables
	int mov;
	char tablero[6][7];
	char columna[]={'1','2','3','4','5','6','7','\0'};
	char nombre1[20];
	char nombre2[20];
	char verFila ='O';
	int a=5,b=5,c=5,d=5,e=5,f=5,g=5,ex_ganador=0;


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

    for(int turno=0;ex_ganador=1;turno++){
    if(turno%2==0){
	//Jugador 1
	printf("\n%s ingresa columna donde pondras tu ficha:\n", nombre1);
	scanf("%d",&mov);
	while( (mov<0) || (mov>7) ){
		printf("Ingresa movimiento valido:\n");
		scanf("%d",&mov);
	}
	//Recorrer columna (mov-1)
     switch (mov){
	 case 1: if(0<=a){
		                   tablero[a][mov-1]='R';
		                   a--;
	 } else{printf("columna llena\n");
	 } break;
	 case 2: if(0<=b){
		                   tablero[b][mov-1]='R';
		                   b--;
	 } else{printf("columna llena\n");
	 } break;
	 case 3: if(0<=c){
		                   tablero[c][mov-1]='R';
		                   c--;
	 } else{printf("columna llena\n");
	 } break;
	 case 4: if(0<=d){
		                   tablero[d][mov-1]='R';
		                   d--;
	 } else{printf("columna llena\n");
	 } break;
	 case 5: if(0<=e){
		                   tablero[e][mov-1]='R';
		                   e--;
	 } else{printf("columna llena\n");
	 } break;
	 case 6: if(0<=f){
		                   tablero[f][mov-1]='R';
		                   f--;
	 } else{printf("columna llena\n");
	 } break;
	 case 7: if(0<=g){
		                   tablero[g][mov-1]='R';
		                   g--;
	 } else{printf("columna llena\n");
	 } break;}



	//Revisar



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
	printf("\n\t-----------------------------------------------------\n");}
	else{
//Jugador 2
	printf("\n%s ingresa columna donde pondras tu ficha:\n", nombre2);
	scanf("%d",&mov);
	while( (mov<0) || (mov>7) ){
		printf("Ingresa movimiento valido:\n");
		scanf("%d",&mov);
	}
	//Recorrer columna (mov-1)
     switch (mov){
	 case 1: if(0<=a){
		                   tablero[a][mov-1]='A';
		                   a--;
	 } else{printf("columna llena\n");
	 } break;
	 case 2: if(0<=b){
		                   tablero[b][mov-1]='A';
		                   b--;
	 } else{printf("columna llena\n");
	 } break;
	 case 3: if(0<=c){
		                   tablero[c][mov-1]='A';
		                   c--;
	 } else{printf("columna llena\n");
	 } break;
	 case 4: if(0<=d){
		                   tablero[d][mov-1]='A';
		                   d--;
	 } else{printf("columna llena\n");
	 } break;
	 case 5: if(0<=e){
		                   tablero[e][mov-1]='A';
		                   e--;
	 } else{printf("columna llena\n");
	 } break;
	 case 6: if(0<=f){
		                   tablero[f][mov-1]='A';
		                   f--;
	 } else{printf("columna llena\n");
	 } break;
	 case 7: if(0<=g){
		                   tablero[g][mov-1]='A';
		                   g--;
	 } else{printf("columna llena\n");
	 } break;}



	//Revisar



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
	printf("\n\t-----------------------------------------------------\n");}	
}
return 0;}
		
		
		
		
		
		
		
		
		
		
		
		
		

