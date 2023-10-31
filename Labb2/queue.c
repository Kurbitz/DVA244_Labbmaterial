#include "queue.h"
#include<assert.h>

/*Här är det viktigt att återanvända koden som du redan skrivit för den länkade listan.
  Återanvändning betyder inte att man kopierar koden eller skriver av den, återanvänder
  gör man genom att anropa redan implementerade funktioner.*/

/*Funktionen är färdig*/
Queue initializeQueue(void)
{
    return NULL;
}

int queueIsEmpty(const Queue queue)
{
    return 0;	// Ersätt med rätt returvärde
}

/*Postcondition: data är tillagt sist i kön*/
void enqueue(Queue* queue, const Data data)
{
   //Tips: Att lägga till i en kö implementerad som en länkad lista är precis som att lägga till först eller sist i en länkad lista
}

/* Precondition: kön är ej tom */
void dequeue(Queue* queue)
{
    //Tips: Att ta bort från en kö implementerad som en länkad lista är precis som att ta bort sist eller först i en länkad lista.
}

/* Precondition: kön är ej tom */
Data peekQueue(const Queue queue)
{
    return 0;	// Ersätt med rätt returvärde
}


/* Används for testning och felsökning
   Tips: det kan vara bra att också notera i utskriften vart början respektive slutet på kön är */
void printQueue(const Queue queue, FILE *textfile)
{
    
}


