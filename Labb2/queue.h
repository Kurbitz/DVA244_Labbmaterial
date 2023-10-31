/* Laboration 2 - Datastrukturer och Algoritmer */
/* Queue */

#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"    // Din lista inkluderas

/*******************************************************************/
/* Kön ska implementeras som en länkad lista.                      */
/* Du ska använda dina listfunktioner även i kön                   */
/* Du ska alltså varken skriva om funktionerna eller kopiera koden */
/* OBS! Du ska inte ändra någonting i interfacet                   */
/* Alla funktioner ska implementeras                               */
/*******************************************************************/

typedef List Queue;  // Ordet 'Queue' kommer att vara din listtyp


/* Skapar en ny tom kö */
Queue initializeQueue(void);

/* Returnerar 1 om kön är tom, annars 0 */
int queueIsEmpty(const Queue queue);

/* Lägger ett nytt element sist i kön */
void enqueue(Queue* queue, const Data data);

/* Tar bort elementet som är först i kön */
void dequeue(Queue* queue);

/* Returnerar elementet som är först i kön */
Data peekQueue(const Queue queue);

/*Skriver ut hela kön
  Endast till för testning och felsökning */
void printQueue(const Queue queue, FILE *textfile);


#endif
