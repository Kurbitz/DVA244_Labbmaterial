#include "stack.h"
#include<assert.h>

/*Funktionen är färdig*/
Stack initializeStack(void)
{
    return createEmptyList();
}

int stackIsEmpty(const Stack stack)
{
    return 0; // Ersätt denna rad med rätt returvärde
}

/* Postcondition 'data' ligger överst på stacken */
void push(Stack* stack, const Data data)
{
    
}

/* Precondition: stacken får inte vara tom */
void pop(Stack* stack)
{
    
}

/* Precondition: stacken får inte vara tom */
Data peekStack(const Stack stack)
{
     return 0; // Ersätt denna rad med rätt returvärde
}

/* Används för testning och felsökning
 Tips: det kan vara bra att också notera i urskriften vart toppen på stacken är */
void printStack(const Stack stack, FILE *textFile)
{
    
}
