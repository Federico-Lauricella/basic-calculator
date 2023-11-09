int multiply(int a, int b) 
{
    
    int isNegative = 0;

    if (a < 0) 
    {
        a = -a;
        isNegative = !isNegative;  
    }
    if (b < 0) 
    {
        b = -b;
        isNegative = !isNegative;  
    }

    int prodotto = 0;
    for (int i = 0; i < a; i++) 
    {
        prodotto += b;
    }

    if (isNegative) 
    {
        prodotto = -prodotto;
    }

    return prodotto;
}
