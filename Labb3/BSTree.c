#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <math.h>
#include "BSTree.h"

/*Det är helt tillåtet att lägga till egna hjälpfunktioner men de befintliga funktionerna får inte ändras*/

/* Statiska hjälpfunktioner används av andra funktioner i trädet och ska inte ligga i interfacet (användaren behöver inte känna till dessa) */


/* Skapar en trädnod med det givna datat genom att allokera minne för noden. Glöm inte att initiera pekarna*/
static struct treeNode* createNode(int data)
{
   // Glöm inte att testa så att allokeringen lyckades
   return NULL; // Ersätt med rätt returvärde
}

/* Returnerar en dynamiskt allokerad array som innehåller trädets data sorterat */
static int* writeSortedToArray(const BSTree tree)
{
   /* Skapa en dynamisk array men rätt storlek

      Skriv datat från trädet sorterat till arrayen (minsta till största)
      - till detta kanske du behover en hjälpfunktion */

   return NULL; // Ersätt med korrekt returvärde
}

/* Bygger upp ett sorterat, balanserat träd från en sorterad array */
static void buildTreeSortedFromArray(BSTree* tree, const int arr[], int size)
{
   /* Bygg rekursivt från mitten.
      Mittenelementet i en delarray skapar rot i delträdet
      Vänster delarray bygger vänster delträd
      Höger delarray bygger höger delträd*/
}


/* Implementation av trädet, funktionerna i interfacet */

/* Skapar ett tomt träd - denna funktion är färdig */
BSTree emptyTree(void)
{
   return NULL;
}

/* Returnerar 1 ifall trädet är tomt, 0 annars */
int isEmpty(const BSTree tree)
{
   return -1; // Ersätt med rätt returvärde
}

/* Sätter in 'data' sorterat i *tree
 Post-condition: data finns i trädet*/
void insertSorted(BSTree* tree, int data)
{
   /* Tänk på att trädet kan vara tomt vid insättning
      Du bestammer skälv hur dubbletter ska hanteras, ska de inte accepteras eller
      ska de läggas till vänster/höger?.
      Post-condition kan verifieras med hjälp av find(...)*/
}

/* Utskriftsfunktioner
   Vid anrop: anvand stdio som andra argument för att skriva ut på skärmen
   Det räcker att ni implementerar LR ordningarna*/
void printPreorder(const BSTree tree, FILE *textfile)
{

}

void printInorder(const BSTree tree, FILE *textfile)
{

}

void printPostorder(const BSTree tree, FILE *textfile)
{

}

/* Returnerar 1 om 'data' finns i tree, 0 annars */
int find(const BSTree tree, int data)
{
   // Tänk på att trädet kan vara tomt
   return -1; // Ersätt med korrekt returvärde
}

/* Tar bort 'data' från trädet om det finns */
void removeElement(BSTree* tree, int data)
{
   /* Inget data ska/kan tas bort från ett tomt träd
     Tre fall: Ett löv (inga barn), ett barn (vänster eller höger), två barn

     Glöm inte att frigöra noden nar den lankats ur trädet*/
}

/* Returnerar hur många noder som totalt finns i trädet */
int numberOfNodes(const BSTree tree)
{
	return -1; //Ersätt med korrekt returvärde
}

/* Returnerar hur djupt trädet är */
int depth(const BSTree tree)
{
   return -1; // Ersätt med korrekt returvärde
}

/* Returnerar minimidjupet för trädet
   Se math.h för användbara funktioner*/
int minDepth(const BSTree tree)
{
   return -1; // Ersätt med korrekt returvärde
}

/* Balansera trädet så att depth(tree) == minDepth(tree) */
void balanceTree(BSTree* tree)
{
   /* Förslag på algoritm:
      - överför trädet till en dynamiskt allokerad array med writeSortedToArray()
      - tom trädet med freeTree()
      - bygg upp trädet rekursivt från arrayen med buildTreeSortedFromArray()
      - frigör minne för den dynamiskt allokerade arrayen


      Post-conditions:
      - tree har lika många noder som tidigare
      - djupet för trädet är samma som minimumdjupet för trädet */
}

/* Töm trädet och frigör minnet för de olika noderna */
void freeTree(BSTree* tree)
{
   // Post-condition: trädet är tomt
}
