/* Laboration 2 - Datastrukturer och Algoritmer */
/* Stack */

#ifndef STACK_H
#define STACK_H
#include "list.h"		// Din lista inkluderas


/*******************************************************************/
/* Stacken ska implementeras som en länkad lista.                  */
/* Du ska använda dina listfunktioner även i stacken               */
/* Du ska alltså varken skriva om funktionerna eller kopiera koden */
/* OBS! Du ska inte ändra någonting i interfacet                   */
/* Alla funktioner ska implementeras                               */
/*******************************************************************/
 
typedef List Stack;     // Ordet 'Stack' kommer att vara din listtyp


/* Skapar en ny tom stack */
Stack initializeStack(void);

/* Returnerar 1 om stacken är tom, annars 0 */
int stackIsEmpty(const Stack stack);

/* Lägger ett element överst på stacken */
void push(Stack* pStack, const Data element);

/* Tar bort det översta elementet från stacken */
void pop(Stack* pStack);

/* Returnerar det översta elementet på stacken */
Data peekStack(const Stack stack);

/*Skriver ut hela stacken
 Endast till for testning och felsökning */
void printStack(const Stack stack, FILE *textfile);


#endif
