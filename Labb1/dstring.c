#include "dstring.h"
#include <string.h>
#include <stdlib.h>
#include <assert.h>

DString dstring_initialize(const char* str)
{
	// Precondition: str är ej NULL - testas med en assert

	/* Tips:
	   - Allokera (t.ex. med malloc) tillräckligt med minne för att få plats med str,
		 glöm inte att det måste finnas plats för \0 (nolltermineringen).
		 Glöm inte att testa så att allokeringen lyckades
	   - Det är tillåtet att använda inbyggda strängfunktioner (som t.ex strcpy())
	   - Kom ihåg att använda assert() */

	// Postcondition: returvärdet innehåller samma sträng som 'str' - behöver inte testas med assert

	return NULL; // Ersätt denna rad. Den är just nu med för att programmet ska kompilera
}

int dstring_concatenate(DString* destination, DString source)
{
	// Precondition: destination är ej NULL
	// Precondition: *destination är ej NULL
	// Precondition: source är ej NULL
	// Preconditions testas med asserts.

	/* Tips:
	   - Tank på att *destination redan är en dynamiskt allokerad sträng
	   - Tank på att vi kommer att behöva allokera mer minne för att få plats med den har längre strängen.
		 Minnet som *destination pekar på behöver utökas (realloc), hur stort ska det "nya" minnet bli?
		 Glöm inte att nolltermineringen måste få plats.
		 När du allokerar minne dynamiskt måste du alltid testa så att allokeringen lyckades innan du
		 börjar jobba med minnet.
	   - Det är tillåtet att använda inbyggda funktioner (som t.ex. strcat()).
	*/

	// Postcondition: *destination innehåller den gamla strängen ihopslagen med source - behöver inte testas med assert.
	return -1; // Ersätt denna rad. Den är just nu med för att programmet ska kompilera, vad är det som ska returneras?.
}

void dstring_truncate(DString* destination, unsigned int truncatedLength)
{
	// Precondition: destination är ej NULL, *destination är ej NULL
	// längden (truncateLength) för inte vara negativ
	// Preconditions testas med asserts

	/* Tips:
	   - Anvand realloc för att frigöra det överflödiga minnet
		 (realloc frigör först minnet och allokerar sedan nytt för den angivna storleken)
	   - glöm inte nolltermineringen

	 Vad händer om truncateLength är längre än vad strängen är?*/

	// Postcondition: *destination är inte längre an 'truncatedLength' tecken - behöver inte testas med assert
}

void dstring_print(DString str, FILE* textfile)
{
	// Precondition: textfile är inte NULL - måste testas innan du försöker skriva till filen
	/* Tank på att filpekaren kopplas till filen innan funktionen anropas*/

	/* filpekaren får inte stängas, filen ska fungera som vanligt efter anropet */
	/* Den här funktionen ska vara generell, du ska kunna använda den för att skriva ut till
	 en fil eller för att skriva ut i konsollen (på skärmen). Om den används för att skriva till
	 en extern fil så kan du anta att filen öppnas och stängs innan respektive efter anrop till
	 funktionen. Om den används för att skriva ut på skärmen kan du anta att du får stdout till den
	 andra parametern.

	 Du ska inte skriva olika kod för att skriva till fil och till konsoll. Samma kod ska fungera för båda.*/
}

void dstring_delete(DString* stringToDelete)
{
	// Precondition: stringToDelete är inte NULL

	// Postcondition: *stringToDelete är NULL och minnet är frigjort - behöver inte testas med assert
}
