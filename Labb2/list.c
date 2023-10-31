#include "list.h"
#include <stdlib.h>
#include <assert.h>

/*Det är helt tillåtet att lägga till egna hjälpfunktioner men de befintliga funktionerna får inte ändras*/

/*Hjälpfunktion till add
  Allokerar minne for en ny nod
  om allokeringen lyckades initieras data samt pekare (pekare initieras till NULL).
  Den nya noden (eller NULL) returneras.*/
static struct node* createListNode(const Data data)
{
    //Glöm inte att testa så att allokeringen lyckades innan du initierar noden
    return 0; //Ersätt med rätt returvärde
}

/*Returnera en tom lista - funktionen är färdig*/
List createEmptyList(void)
{
    return NULL;
}


/*Är listan tom?
  Returnerar 1 om den är tom, annars 0*/
int isEmpty(const List list)
{
    return 0; //ersätt med rätt returvärde
}

/*Lägg till nod först i listan*/
/*Postcondition: Det nya datat ligger först i listan (testa med assert)*/
void addFirst(List *list, const Data data)
{
    //Anropa createListNode för att skapa den nya noden
    //Glöm inte att testa att den nya noden faktiskt kunde skapas/tilldelas minne innan du fortsätter
    //Tänk på att listan kan vara tom när en ny nod läggs till
}

/*Lägg till nod sist i listan
  Tips, när du hittat rätt plats kan du använda funktionen addFirst för att lägga till*/
void addLast(List *list, const Data data)
{
    
}

/*Ta bort första noden i listan
  Precondition: listan är inte tom (testa med assert)
  Noden ska länkas ur och minnet frigöras, resten av listan ska finnas kvar*/
void removeFirst(List *list)
{
    //Glöm inte att frigöra minnet för den nod som länkas ur listan.
    //Tänk på att listans huvud efter bortlänkningen måste peka på den nod som nu är först.
}

/*Ta bort sista noden i listan
  Precondition: listan är inte tom (testa med assert)*/
void removeLast(List *list)
{
    //Glöm inte att frigöra minnet för den nod som länkas ur listan.
    //Tänk på att den nod som nu är sist inte pekar någonstans, dess pekare måste nollställas
}

/*Ta bort data ur listan (första förekomsten)
  Returnera 1 om datat finns, annars 0
  Tips, när du hittar rätt nod kan du använda en av de ovanstående funktionerna för att ta bort noden*/
int removeElement(List *list, const Data data)
{
    return 0; //Ersätt med rätt returvärde
}

/*Finns data i listan?
  Om datat finns returneras 1, annars 0
  Tänk på att listan kan vara tom*/
int search(const List list, const Data data)
{
    return 0; //Ersätt med rätt returvärde
}

/*Returnera antalet noder i listan*/
int numberOfNodesInList(const List list)
{
    return 0; //Ersätt med rätt returvärde
}

/*Ta bort alla noder ur listan
  Glöm inte att frigöra minnet
  Postcondition: Listan är tom, *list är NULL (testa med assert)*/
void clearList(List *list)
{
    //Alla noder måste tas avallokeras en och en, det räcker inte att endast frigöra list.
}

/*Skriv ut listan
  Vid anropet kan man ange stdout som argument 2 for att skriva ut på skärmen.
  Använda fprintf for att skriva ut.
  Den här typen av utskriftfunktion blir mer generell då man kan välja att skriva ut till skärmen eller till fil.*/
void printList(const List list, FILE *textfile)
{
    
}

/*Returnera första datat i listan
  Precondition: listan är inte tom (testa med assert)*/
Data getFirstElement(const List list)
{
    return 0; //Ersätt med rätt returvärde
}

/*Returnera sista datat i listan
  Precondition: listan är inte tom (testa med assert)*/
Data getLastElement(const List list)
{
    return 0; //Ersätt med rätt returvärde
}
