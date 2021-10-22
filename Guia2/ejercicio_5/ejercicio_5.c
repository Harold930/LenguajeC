/*5) a) Definir un tipo enumerativo mes_t con 12 símbolos que representen cada uno de los meses del año.
b) Escribir un fragmento de código que a partir del contenido de una variable de tipo mes_t , imprima por pantalla
la descripción del mes (traducción).*/


#include <stdio.h>

#define JANUARY_ID 1
#define FEBRUARY_ID 2
#define MARCH_ID 3
#define APRIL_ID 4
#define MAY_ID 5
#define JUNE_ID 6
#define JULY_ID 7
#define AUGUST_ID 8
#define SEPTEMBER_ID 9
#define OCTOBER_ID 10
#define NOVEMBER_ID 11
#define DECEMBER_ID 12

#define JANUARY_NAMING "ENERO"
#define FEBRUARY_NAMING "FEBREO"
#define MARCH_NAMING "MARZO"
#define APRIL_NAMING "ABRIL"
#define MAY_NAMING "MAYO"
#define JUNE_NAMING "JUNIO"
#define JULY_NAMING "JULIO"
#define AUGUST_NAMING "AGOSTO"
#define SEPTEMBER_NAMING "SEPTIEMBRE"
#define OCTOBER_NAMING "OCTUBRE"
#define NOVEMBER_NAMING "NOVIEMBRE"
#define DECEMBER_NAMING "DICIEMBRE"


typedef enum {
	JANUARY_MONTH,
	FEBRUARY_MONTH,
	MARCH_MONTH,
	APRIL_MONTH,
	MAY_MONTH,
	JUNE_MONTH,
	JULY_MONTH,
	AUGUST_MONTH,
	SEPETEMBER_MONTH,
	OCTOBER_MONTH,
	NOVEMBER_MONTH,
	DECEMBER_MONTH
} mes_t;

typedef unsigned int uint;

int main(void) {

	int option;
	mes_t mes;

	printf("Ingrese el id del mes:\n");
	printf("%d - %s\n", JANUARY_ID, JANUARY_NAMING);
	printf("%d - %s\n", FEBRUARY_ID, FEBRUARY_NAMING);
	printf("%d - %s\n", MARCH_ID, MARCH_NAMING);
	printf("%d - %s\n", APRIL_ID, APRIL_NAMING);
	printf("%d - %s\n", MAY_ID, MAY_NAMING);
	printf("%d - %s\n", JUNE_ID, JUNE_NAMING);
	printf("%d - %s\n", JULY_ID, JULY_NAMING);
	printf("%d - %s\n", AUGUST_ID, AUGUST_NAMING);
	printf("%d - %s\n", SEPTEMBER_ID, SEPTEMBER_NAMING);
	printf("%d - %s\n", OCTOBER_ID, OCTOBER_NAMING);
	printf("%d - %s\n", NOVEMBER_ID, NOVEMBER_NAMING);
	printf("%d - %s\n", DECEMBER_ID, DECEMBER_NAMING);

	scanf("%d", &option); /* Validar */

	/*Traducción*/
	switch(option) {
		case JANUARY_ID:
			mes = JANUARY_MONTH;
			break;
		case FEBRUARY_ID:
			mes = FEBRUARY_MONTH;
			break;
		case MARCH_ID:
			mes = MARCH_MONTH;
			break;
        case APRIL_ID:
			mes = APRIL_MONTH;
			break;
        case MAY_ID:
			mes = MAY_MONTH;
			break;
        case JUNE_ID:
			mes = JUNE_MONTH;
			break;
        case JULY_ID:
			mes = JULY_MONTH;
			break;
        case AUGUST_ID:
			mes = AUGUST_MONTH;
			break;
        case SEPTEMBER_ID:
			mes = SEPETEMBER_MONTH;
			break;
        case OCTOBER_ID:
			mes = OCTOBER_MONTH;
			break;
        case NOVEMBER_ID:
			mes = NOVEMBER_MONTH;
			break;
        case DECEMBER_ID:
			mes = DECEMBER_MONTH;
			break;
		default:
			mes = JANUARY_MONTH;
	}

	/*Procesamiento*/

	switch(mes) {
		case JANUARY_MONTH:
			printf("%s\n", JANUARY_NAMING);
			break;
		case FEBRUARY_MONTH:
			printf("%s\n", FEBRUARY_NAMING);
			break;
        case MARCH_MONTH:
			printf("%s\n", MARCH_NAMING);
			break;
        case APRIL_MONTH:
			printf("%s\n", APRIL_NAMING);
			break;
        case MAY_MONTH:
			printf("%s\n", MAY_NAMING);
			break;
        case JUNE_MONTH:
			printf("%s\n", JUNE_NAMING);
			break;
        case JULY_MONTH:
			printf("%s\n", JULY_NAMING);
			break;
        case AUGUST_MONTH:
			printf("%s\n", AUGUST_NAMING);
			break;
        case SEPETEMBER_MONTH:
			printf("%s\n", SEPTEMBER_NAMING);
			break;
        case OCTOBER_MONTH:
			printf("%s\n", OCTOBER_NAMING);
			break;
        case NOVEMBER_MONTH:
			printf("%s\n", NOVEMBER_NAMING);
			break;
        case DECEMBER_MONTH:
			printf("%s\n", DECEMBER_NAMING);
			break;
	}
	
	return 0;
}