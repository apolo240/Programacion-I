#include <stdio.h> 


// variables 
#define MAX_ALUMNOS 10
#define NUM_NOTAS 4

typedef struct {
	char nombre[30];
	int edad;
	float notas[NUM_NOTAS];
} Alumno; 



int main(){

	int opt;

	int num_alumnos = 0;

	Alumno alumnos[MAX_ALUMNOS]; 

do {
	printf("\n--------------------------");
	printf("\nGestion de Expedientes");	
	printf("\n--------------------------");

	printf("\n1.- Añadir Alumno");
	printf("\n2.- Mostrar Alumno");
	printf("\n3.- Buscar Alumno");
	printf("\n4.- Mostrar Expediente Alumno");
	printf("\n5.- ");
	printf("\n6.- ");
	printf("\n7.- ");
	printf("\n8.- ");
	printf("\n0.- Salir ");

	printf("\n[*] Dime tu opción: ");
	scanf("%d", &opt);



	switch (opt){
		case 1: 
			printf("\n*** Añadir alumno ***\n");

			if (num_alumnos < MAX_ALUMNOS){
			
			printf("[*]Nombre: ");
				scanf("%29s", alumnos[num_alumnos].nombre);
			printf("[*]Edad: ");
				scanf("%d", &alumnos[num_alumnos].edad);			
			
			printf("[*]Notas");
				for(int i = 0; i < NUM_NOTAS; i++ ){
					printf("\nDime la Nota Nro %d: ",i);
					scanf("%f", &alumnos[num_alumnos].notas[i]);
				}


			} else {
				printf("[*] Ya fue mano, ta lleno tu lista broer");
			}
			break;
		case 2: 
				printf("\n*** Mostrar alumno ***\n" );
				break;
		case 3: 
				printf("\n*** Buscar alumno ***\n");
				break;
		case 4: 
				printf("\n*** Mostrar Expediente Alumno ***\n");
				break;
	}

} while (opt != 0);



	return 0;

}
