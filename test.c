#include <stdio.h>
#include <stdlib.h>
int login(const char user[], const char passwort[])
{
    static int versuch = 0; /* erzeugen einer static-Variablen mit Anfangswert
    0 */
    if (versuch < 3)
    {
        if (checkuser(user) != checkpass(passwort))
        {
            versuch++;
        }
        else
        {
            versuch = 0;
            return EXIT_SUCCESS;
        }
    }
    return EXIT_FAILURE;
}