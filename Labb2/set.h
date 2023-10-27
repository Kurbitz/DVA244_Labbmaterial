/* Laboration 2 - Datastrukturer och Algoritmer */
/* Set */

#ifndef SET_H
#define SET_H
#include "list.h"   // Din lista inkluderas 

/*******************************************************************/
/* Settet ska implementeras som en länkad lista.                   */
/* Du ska använda dina listfunktioner även i ditt set              */
/* Du ska alltså varken skriva om funktionerna eller kopiera koden */
/* OBS! Du ska inte ändra någonting i interfacet                   */
/* Alla funktioner ska implementeras                               */
/*******************************************************************/

typedef List Set;    // Ordet 'Set' kommer att vara din listtyp

/* Skapar et ny tomt set */
Set initializeSet(void);

/*Lägger till element i set
  Tänk på att alla element i settet ska vara unika */
void addToSet(Set* set, const Data element);

/*Ta bort det angivna elementet från settet*/
void removeFromSet(Set* set, const Data element);

/*Returnerar 1 om elementet finns i set, annars 0 */
int isInSet(const Set set, const Data element);

/*Skriver ut hela settet
 Endast till för testning och felsökning */
void printSet(const Set set, FILE *textfile);


#endif
