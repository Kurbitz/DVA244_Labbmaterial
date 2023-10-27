/* Laboration 2 - Datastrukturer och Algoritmer */
/* Länkad lista */

#ifndef LIST_H
#define LIST_H
#include <stdio.h>


/**********************************************************************/
/*                                                                    */
/* Bestäm om du vill göra en enkellänkad eller en dubbellänkad lista, */
/* välj motsvarande struct-definiton nedan.                           */
/* Oberoende av ditt val så ser funktionsdeklarationerna likadana ut. */
/*                                                                    */
/* OBS!                                                               */
/* Du ska inte ändra någonting i interfacet                           */
/* Alla funktioner ska implementeras (i list.c)                       */
/**********************************************************************/


typedef int Data;


/*Välj denna struktdefinition om du vill implementera en dubbellänkad lista*/
/*struct node
{
    Data data;
    struct node *next;
    struct node *previous;
};*/

/*Välj denna struktdefinition om du vill implementera en enkellänkad lista*/
struct node
{
    Data data;
    struct node *next;
};

//Listan representeras av en nodpekare
typedef struct node *List;

//Returnera en tom lista
List createEmptyList(void);


//Är listan tom?
//Returnerar 1 om listan är tom, annars 0
int isEmpty(const List list);

//Lägg till nod först i listan
void addFirst(List *list, const Data data);

//lägg till nod sist i listan
void addLast(List *list, const Data data);

//Ta bort första noden i listan
void removeFirst(List *list);

//ta bort sista noden i listan
void removeLast(List *list);

//ta bort data ur listan (första förekomsten), returnera 0 om datat inte finns, annars 1
int removeElement(List *list, const Data data);

//Sök efter data i listan, returnera 1 om datat finns, annars 0.
int search(const List list, const Data data);

//returnera hur många noder som finns i listan
int numberOfNodesInList(const List list);

//töm listan /ta bort allt data (alla noder) ur listan
void clearList(List *list);

//Skriv ut listan
void printList(const List list, FILE *textfile);

//returnera första datat i listan
Data getFirstElement(const List list);

//returnera sista datat i listan
Data getLastElement(const List list);


#endif
