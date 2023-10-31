#define _CRT_SECURE_NO_WARNINGS // Behövs för vissa funktioner i visual studio
#include "HashTable.h"
#include "Bucket.h"
#include<assert.h>
#include<stdlib.h>
#include<stdio.h>

// Används för att markera en ledig plats i Hashtabellen


/* Denna funktion tar en nyckel och returnerar ett hash-index
   dvs ett index till arrayen som är Hashtabellen */
static int hash(Key key, int tablesize)
{
	return -1;
}

/* Leta framåt enligt principen öppen adressering
   Antalet krockar returneras via pekaren col i parameterlistan */
static int linearProbe(const HashTable* htable, Key key, unsigned int *col)
{
    return -1; // Ersätt med ett index
}

/* Allokera minne för hashtabellen*/
HashTable createHashTable(unsigned int size)
{
    // Dessa två rader är bara till för att labbskelettet ska kompilera. Ta bort dessa när du skriver funktionen.
    HashTable htable = { 0 };
    return htable;
}

/* Sätter in paret {key,data} i Hashtabellen, om en nyckel redan finns ska värdet uppdateras */
/* Returnerar antalet krockar (som räknas i linearProbe() )*/
unsigned int insertElement(HashTable* htable, const Key key, const Value value)
{
	// Postcondition: det finns ett element för key i tabellen (använd lookup() för att verifiera)
    return 0; //Ersätt med rätt värde
}

/* Tar bort datat med nyckel "key" */
void deleteElement(HashTable* htable, const Key key)
{
	// Postcondition: inget element med key finns i tabellen (använd loookup() för att verifiera)
}

/* Returnerar en pekare till värdet som key är associerat med eller NULL om ingen sådan nyckel finns */
const Value* lookup(const HashTable* htable, const Key key)
{
    return NULL; // Ersätt med rätt värde
}


/* Tömmer Hashtabellen */
void freeHashTable(HashTable* htable)
{
	// Postcondition: hashtabellen har storlek 0
}

/* Ger storleken av Hashtabellen */
unsigned int getSize(const HashTable* htable)
{
    return 0; // Ersätt med rätt värde
}

/* Denna för att ni enkelt ska kunna visualisera en Hashtabell */
void printHashTable(const HashTable* htable)
{
	// Tips: använd printPerson() i Person.h för att skriva ut en person
}
