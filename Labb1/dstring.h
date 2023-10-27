#ifndef DSTRING_H
#define DSTRING_H
#include <stdio.h>

typedef char* DString;

/* Returnerar en sträng som innehåller samma text som textsträngen 'str'.
  Den returnerade strängen ar dynamiskt allokerad (dvs, på heapen) */
DString dstring_initialize(const char* str);

/* Slår ihop originalsträngen med source
  Returnera 0 om det inte gick att allokera tillräckligt med minne
  för att sla ihop strängarna, annars 1 */
int dstring_concatenate(DString* destination, DString source);

/* Förkortar *destination så att den innehåller högst truncatedLength tecken
  Om 'truncatedLength' är langre än strängens längd händer ingenting */
void dstring_truncate(DString* destination, unsigned int truncatedLength);

/* Skriver strängen till en textfil.
   Textfilen förväntas redan vara öppnad och fortsätter vara öppnad efter anropet */
/* OBS - det räcker att du testar att denna funktion skriver ut i konsollen/skärmen
 Se kommentarer i funktionsdefinitionen för mer information*/
void dstring_print(DString stringToPrint, FILE* textfile);

/* Frigör minnet för en dynamisk sträng och satter strängen (*stringToDelete) till NULL */
void dstring_delete(DString* stringToDelete);

#endif
