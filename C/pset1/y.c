    int start = c/100000000000000;


    if ( count == 13 && c/1000000000000 == 4)
    {
        printf("VISA");
    }
    else if ( count == 15 && (c/10000000000000 == 34 || c/10000000000000 == 37 ))
    {
        printf("AMEX");
    }
    else if ( count == 16 && c/1000000000000000 == 4)
    {
        printf("VISA");
    }
    else if ( count == 16 && (start >= 51 && start <= 55 ))
    {
        printf("%i", start);
        printf("MASTERCARD");
    }
}