/*Proyecto Juego de ahorcado
    Emily Soto 
    Madeline Salguero
*/

//librerias
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

//macros
#define MAX_WORDS 23 

//Variables Globales
void imprimir (int oport, char *wordserr, char *word);
int found_word(char letra);
int exist_word(char letra);
int aciertos;

//Cambiamos la opcion dada por marcos y colocamos palabras random
char *adivina(void)= {
    char *palabras[]={"resiliente", "inefable", "serendipia", "limerencia", "aurora", "efimero", "inmarcesible", "sempiterno", "petricor", "perenne", "nefelibato", "ataraxia", "acendrado", "alba", "armonia", "equilibrio", "libertad", "saudade", "sublime", "esplendor", "chispudo", "chilero", "meraki"};
    int posicion;
    srand((unsigned)time(NULL));
    posicion = rand()%23;
    return(palabras[posicion]);}
    
    char *cadena, word[14], letraserradas[10];


//Prototipo de funciones

void clearscreen(){
    system("@cls||clear");
}

int main (void){
    menu:
    clearscreen();
    printf("=========== HANGMAN MENU ===========\n\n");
    printf("1: Para empezar el juego\n");
    printf("2: Para ver las instrucciones\n");
    printf("3: Para conocernos\n");
    printf("4: Para salir del juego\n\n");

    printf("Ingrese su seleccion\n");
//definicion de variables de menu
    int seleccion;
    scanf("%d", &seleccion);
    if (seleccion==2){
        clearscreen();
        printf("INSTRUCCIONES\n\n");
        printf("El objetivo del juego es descifrar la palabra oculta adivinando la mayor cantidad de letras por las que esta compuesta. El jugador cuenta con 10 intentos, en los cuales debe ingresar una letra o palabra, si la palabra contiene la seleccion entonces se le mostrara la posicion de esta, y la cantidad de veces que se repite la letra (si es el caso); por otro lado, si el jugador ingresa una letra que no conforma la palabra, el jugador pierde un turno y debe volver a intentar adivinar. Si la seleccion es una palabra y esta es correcta, entonces el jugador ganara y el juego termina.\n\n Si el jugador no descifra la palabra en los diez intentos, el jugador perdera la partida. Si el jugador descifra la palabra durante los diez intentos, ganara la partida. Si el jugador quiere volver a jugar debe regresar al menu principal e iniciar otro juego.\n\n\n");
        }
    if (seleccion==3){
        clearscreen();
        printf("ABOUT\n\n");
        printf("Desarrolladores:\n Madeline Salguero: madelinesg@ufm.edu\n Emily Soto: emilysoto@ufm.edu\n\n Somos estudiantes de Ingenieria Empresarial de la Universidad Francisco Marroquin. El objetivo de este proyecto es mejorar nuestras habilidades en programacion, a traves del lenguaje de C; esperamos este juego sea entretenido y que aprenda de las palabras elocuentes del lenguaje.\n\n\n");
    }
    if (seleccion==4){
        clearscreen();
        exit(0);
    }
    return 0;
}
