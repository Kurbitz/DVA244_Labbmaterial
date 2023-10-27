#ifndef STATISTICS_H
#define STATISTICS_H
#include <stdio.h>

/********************************************************
   
   DVA104, Lab 5, Statistics.h
   Innehåller funktioner för att hålla reda på
   statistik över hur många byten och jämförelser man gör
   i sorteringsalgoritmer.

*********************************************************/

struct statistics
{
	unsigned int comparisons;
	unsigned int swaps;
};

typedef struct statistics Statistics;

// Nollställer statistiken
void resetStatistics(Statistics* statistics);

// Skriver statistiken till fil
void printStatistics(const Statistics* statistics, FILE* file);

// Jämförelseoperatorer med statistik
int lessThan(int element1, int element2, Statistics* statistics); // sant om element1 < element2
int greaterThan(int element1, int element2, Statistics* statistics); // sant om element1 > element2
int equalTo(int element1, int element2, Statistics* statistics); // sant om element1 == element2
int notEqualTo(int element1, int element2, Statistics* statistics); // sant om element1 != element2
int lessThanOrEqualTo(int element1, int element2, Statistics* statistics); // sant om element1 <= element2
int greaterThanOrEqualTo(int element1, int element2, Statistics* statistics); // sant om element >= element2

// Byter plats på element1 och element2 med statistik
void swapElements(int* element1, int* element2, Statistics* statistics);

#endif
