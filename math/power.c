#include "math.h"

int power(int base, int esponente) 
{
    int risultato = 1;

    if (esponente == 0) 
    {
        return 1;  // Qualsiasi numero elevato a 0 è uguale a 1.
    } else 
    {
        for (int i = 1; i <= esponente; i++) 
        {
            int termine = 0;
            for (int j = 1; j <= base; j++) 
            {
                termine = termine + risultato;
            }
            risultato = termine;
        }
        return risultato;
    }
}
