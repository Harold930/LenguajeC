/*3) a) Definir un tipo enumerativo dia_t compuesto por 7 símbolos que representen cada día de la semana.
b) Escribir una porción de código que muestre por stdout el contenido de una variable de tipo dia_t (traducción).*/
#include <stdio.h>

#define LUNES "Dia lunes"
#define MARTES "Dia martes"
#define MIERCOLES "Dia miercoles"
#define JUEVES "Dia jueves"
#define VIERNES "Dia viernes"
#define SABADO "Dia sabado"
#define DOMINGO "Dia domingo"


    typedef enum { 

        DIA_LUNES  = 'L', 
        DIA_MARTES = 'M', 
        DIA_MIERCOLES  = 'I', 
        DIA_JUEVES = 'J', 
        DIA_VIERNES = 'V', 
        DIA_SABADO = 'S', 
        DIA_DOMINGO = 'D' 
        
    } dia_t;

int main()
{
    char option;
    dia_t day;
    
    printf("%c - %s\n", DIA_LUNES, LUNES);
    printf("%c - %s\n", DIA_MARTES, MARTES);
    printf("%c - %s\n", DIA_MIERCOLES, MIERCOLES);
    printf("%c - %s\n", DIA_JUEVES, JUEVES);
    printf("%c - %s\n", DIA_VIERNES, VIERNES);
    printf("%c - %s\n", DIA_SABADO, SABADO);
    printf("%c - %s\n", DIA_DOMINGO, DOMINGO);

    scanf("%c",&option);

    switch (option)
    {
    case DIA_LUNES:
        day = DIA_LUNES;
        break;
    case DIA_MARTES:
        day = DIA_MARTES;
        break;
    case DIA_MIERCOLES:
        day = DIA_MIERCOLES;
        break;
    case DIA_JUEVES:
        day = DIA_JUEVES;
        break;
    case DIA_VIERNES:
        day = DIA_VIERNES;
        break;
    case DIA_SABADO:
        day = DIA_SABADO;
        break;
    case DIA_DOMINGO:
        day = DIA_DOMINGO;
        break;
    default:
        break;
    }


    switch (day)
    {
    case DIA_LUNES:
        printf("%s",LUNES);
        break;
    case 'M':
        printf("%s",MARTES);
        break;
    case 'I':
        printf("%s",MIERCOLES);
        break;
    case 'J':
        printf("%s",JUEVES);
        break;
    case 'V':
        printf("%s",VIERNES);
        break;
    case 'S':
        printf("%s",SABADO);
        break;
    case 'D':
        printf("%s",DOMINGO);
        break;
    default:
        break;
    }


    return 1;

}

/*
#include <stdio.h>

#define MAXWELL_MANUFACTURER_ID 1
#define SONY_MANUFACTURER_ID 2
#define VERBATIM_MANUFACTURER_ID 3

#define MAXWELL_NAMING "Maxwell Corporation"
#define SONY_NAMING "Sony Corporation"
#define VERBATIM_NAMING "Verbatim Corporation"


typedef enum {
	CORPORATION_MAXWELL,
	CORPORATION_SONY,
  CORPORATION_VERBATIM	
} manufacturer_t;

typedef unsigned int uint;

int main(void) {

	int option;
	manufacturer_t manufacturer;

	printf("Ingrese el id del fabricante:\n");
	printf("%d - %s\n", MAXWELL_MANUFACTURER_ID, MAXWELL_NAMING);
	printf("%d - %s\n", SONY_MANUFACTURER_ID, SONY_NAMING);
	printf("%d - %s\n", VERBATIM_MANUFACTURER_ID, VERBATIM_NAMING);

	scanf("%d", &option);


	switch(option) {
		case MAXWELL_MANUFACTURER_ID:
			manufacturer = CORPORATION_MAXWELL;
			break;
		case SONY_MANUFACTURER_ID:
			manufacturer = CORPORATION_SONY;
			break;
		case VERBATIM_MANUFACTURER_ID:
			manufacturer = CORPORATION_VERBATIM;
			break;
		default:
			manufacturer = CORPORATION_MAXWELL;
	}



	switch(manufacturer) {
		case CORPORATION_MAXWELL:
			printf("%s\n", MAXWELL_NAMING);
			break;
		case CORPORATION_SONY:
			printf("%s\n", SONY_NAMING);
			break;
    case CORPORATION_VERBATIM:
			printf("%s\n", VERBATIM_NAMING);
		  break;
	}
	
	return 0;
}
*/
