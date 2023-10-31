#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "Bucket.h"
#define UNUSED 0

/*Hashtabell som löser krockar med hjälp av öppen adressering*/
typedef struct 
{
	struct Bucket* table; //Hashtabellen är en array av Buckets
	unsigned int size; // Storleken på Hashtabellen
} HashTable;

/*Allokerar minne för tabellen*/
HashTable createHashTable(unsigned int size);

/* Sätter in paret {key,data} i Hashtabellen, om en nyckel redan finns ska värdet modifieras */
/* Returnerar antalet krockar*/
unsigned int insertElement(HashTable* htable, const Key key, const Value value);

/* Tar bort datat med nyckel "key" */
void deleteElement(HashTable* htable, const Key key);

/* Returnerar en pekare till värdet som key är associerat med eller NULL om ingen sådan nyckel finns */
const Value* lookup(const HashTable* htable, const Key key);

/* Tömmer Hashtabellen */
void freeHashTable(HashTable* htable);

/* Ger storleken av Hashtabellen */
unsigned int getSize(const HashTable* htable);

/* Denna för att ni enkelt ska kunna visualisera en Hashtabell */
void printHashTable(const HashTable* htable); 

#endif
