#include <stdio.h>
#include "Yapper.h"

int main()
{

    int tal = 0;
    printf("Indtast et tal mellem 1 og 999: ");
    scanf("%d", &tal);

    if (tal < 1 || tal > 999)
    {
        printf("Tallet skal være mellem 1 og 999\n");
        return 1;
    }

    if (tal < 10)
    {
        printf("%s\n", Ental(tal));
    }
    else if (tal < 20)
    {
        printf("%s\n", TiTilNitten(tal));
    }
    else if (tal < 100)
    {
        int tiere = tal - (tal % 10);
        int ental = tal % 10;
        if (ental == 0)
        {
            printf("%s\n", Tiere(tiere));
        }
        else
        {
            printf("%s%s\n", Tiere(tiere), Ental(ental));
        }
    }
    else if (tal < 1000)
    {
        int hundreder = tal - (tal % 100);
        int tiere = (tal % 100) - ((tal % 100) % 10);
        int ental = (tal % 100) % 10;
        if (tiere == 0 && ental == 0)
        {
            printf("%s\n", Hundreder(hundreder));
        }
        else if (ental == 0)
        {
            printf("%s%s\n", Hundreder(hundreder), Tiere(tiere));
        }
        else if (tiere == 0)
        {
            printf("%sog%s\n", Hundreder(hundreder), Ental(ental));
        }
        else
        {
            printf("%s%s%s\n", Hundreder(hundreder), Tiere(tiere), Ental(ental));
        }
    }
    
    


    return 0;

}

char* Ental(int tal)
{
    switch (tal)
    {
    case 1:
        return "en";
    case 2:
        return "to";
    case 3:
        return "tre";
    case 4:
        return "fire";
    case 5:
        return "fem";
    case 6:
        return "seks";
    case 7:
        return "syv";
    case 8:
        return "otte";
    case 9:
        return "ni";
    default:
        return "N/A";
    }
}

char* TiTilNitten(int tal)
{
    switch (tal)
    {
    case 10:
        return "ti";
    case 11:
        return "elleve";
    case 12:
        return "tolv";
    case 13:
        return "tretten";
    case 14:
        return "fjorten";   
    case 15:
        return "femten";
    case 16:
        return "seksten";
    case 17:
        return "sytten";
    case 18:    
        return "atten";
    case 19:
        return "nitten";
    default:
        return "N/A";
    }
}

char* Tiere(int tal)
{
    switch (tal)
    {
    case 10:
        return "ti";
    case 20:
        return "tyve";
    case 30:
        return "tredive";
    case 40:
        return "fyrre";
    case 50:
        return "halvtreds";
    case 60:
        return "tress";
    case 70:
        return "halvfjerds";
    case 80:
        return "firs";
    case 90:
        return "halvfems";
    default:
        return "N/A";
    }
}

char* Hundreder(int tal)
{
    switch (tal)
    {
    case 100:
        return "hundrede";
    case 200:
        return "tohundrede";
    case 300:
        return "trehundrede";
    case 400:
        return "firehundrede";
    case 500:
        return "femhundrede";
    case 600:
        return "seks hundrede";
    case 700:
        return "syv hundrede";
    case 800:
        return "otte hundrede";
    case 900:
        return "ni hundrede";
    default:
        return "N/A";
    }
}