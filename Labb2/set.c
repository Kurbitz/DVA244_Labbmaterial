#include "Set.h"
#include <assert.h>

/*Funktionen är färdig*/
Set initializeSet(void)
{
	return createEmptyList();
}

/* Tips: tänk på att inte lägga till elementet om det redan finns i *set
   Postcondition: 'element' finns i set (tips: använd isInSet() för att verifiera) */
void addToSet(Set* set, const Data element)
{
        
}

/* Postcondition: 'element' finns INTE i set (tips: använd isInSet() för att verifiera) */
void removeFromSet(Set* set, const Data element)
{
    
}


int isInSet(const Set set, const Data element)
{
    return 0; // Ersätt med rätt returvärde
}

/* Används för testning och felsökning */
void printSet(const Set set, FILE *textfile)
{
    
}

