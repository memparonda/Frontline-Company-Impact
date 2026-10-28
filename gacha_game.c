
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

void GirlsFrontline()
{
    char *P[5] = {"M1911", "PPK", "Glock 17", "Colt Revolver", "Contender"};
    char *AR[5] = {"G3", "StG44", "HK33", "G36", "HK416"};
    char *SMG[5] = {"PPSh-41", "PP-2000", "PPS-43", "PP-19", "AK-74U"};
    char *SG[5] = {"M500", "M590", "SPAS-12", "M1014", "Saiga-12"};
    char *RF[5] = {"Simonov", "M14", "SV-98", "Springfield", "WA2000"};
    char *MG[5] = {"LWMMG", "M2HB", "M1919A4", "PK", "PKP"};
    char *Squad[5] = {NULL};
    int Gacha[5] = {0};
    int Choice;
    bool Repeat;

    printf("Select 5 Between P(1), AR(2), SMG(3), SG(4), RF(5), MG(6)\n");
    printf("Pistol\n");
    printf("Assault Rifle\n");
    printf("Submachine Gun\n");
    printf("Shotgun\n");
    printf("Sniper\n");
    printf("Machine gun\n\n");

    //Selection for Units
    for (int i = 0; i <= 4; i++)
    {
        printf("Selected Unit: ");
        scanf("%d", &Choice);

        while (Choice < 1 || Choice > 6)
        {
            printf("Please choose from 1 to 6: ");
            scanf("%d", &Choice);
        }

        Gacha[i] = Choice;
        printf("Slots Filled %d/5\n", i + 1);
    }

    //Gacha
    for (int i = 0; i <= 4; i++)
    {
        do
        {
            Repeat = false;

            if (Gacha[i] == 1)
            {
                Squad[i] = P[rand() % 5];
            }
            else if (Gacha[i] == 2)
            {
                Squad[i] = AR[rand() % 5];
            }
            else if (Gacha[i] == 3)
            {
                Squad[i] = SMG[rand() % 5];
            }
            else if (Gacha[i] == 4)
            {
                Squad[i] = SG[rand() % 5];
            }
            else if (Gacha[i] == 5)
            {
                Squad[i] = RF[rand() % 5];
            }
            else
            {
                Squad[i] = MG[rand() % 5];
            }

            for (int j = 0; j < i; j++)
            {
                if (strcmp(Squad[j], Squad[i]) == 0)
                {
                    Repeat = true;
                }
            }

        } while (Repeat);
    }

    //Show Gacha
    printf("\nCongratulations!\n");
    printf("Your Units are: ");

    for (int i = 0; i <= 4; i++)
    {
        if (i < 4)
        {
            printf("%s, ", Squad[i]);
        }
        else
        {
            printf("%s", Squad[i]);
        }
    }

    printf("\n");
}

void GenshinImpact()
{
    char *DPS[4] = {"Hu Tao", "Wanderer", "Mavuika", "Flins"};
    char *Sub_DPS[4] = {"Kaeya", "Yelan", "Ineffa", "Traveler"};
    char *Sup[4] = {"Bennett", "Nicole", "Durin", "Columbina"};
    char *Sus[4] = {"Barbara", "Kokomi", "Zhongli", "Furina"};
    char *Squad[4] = {NULL};
    int Gacha[4] = {0};
    int Choice;
    bool Repeat;

    printf("Select 4 Between DPS(1), Sub-DPS(2), Support(3), Sustain(4)\n");
    printf("DPS\n");
    printf("Sub-DPS\n");
    printf("Support\n");
    printf("Sustain\n");

    //Selection for Units
    for (int i = 0; i <= 3; i++)
    {
        printf("Selected Unit: ");
        scanf("%d", &Choice);

        while (Choice < 1 || Choice > 4)
        {
            printf("Please choose from 1 to 4: ");
            scanf("%d", &Choice);
        }

        Gacha[i] = Choice;
        printf("Slots Filled %d/4\n", i + 1);
    }

    //Gacha
    for (int i = 0; i <= 3; i++)
    {
        do
        {
            Repeat = false;

            if (Gacha[i] == 1)
            {
                Squad[i] = DPS[rand() % 4];
            }
            else if (Gacha[i] == 2)
            {
                Squad[i] = Sub_DPS[rand() % 4];
            }
            else if (Gacha[i] == 3)
            {
                Squad[i] = Sup[rand() % 4];
            }
            else
            {
                Squad[i] = Sus[rand() % 4];
            }

            for (int j = 0; j < i; j++)
            {
                if (strcmp(Squad[j], Squad[i]) == 0)
                {
                    Repeat = true;
                }
            }

        } while (Repeat);
    }

    //Show Gacha
    printf("\nCongratulations!\n");
    printf("Your Units are: ");

    for (int i = 0; i <= 3; i++)
    {
        if (i < 3)
        {
            printf("%s, ", Squad[i]);
        }
        else
        {
            printf("%s", Squad[i]);
        }
    }

    printf("\n");
}

void LimbusCompany()
{
    char *Sin[12] = {
        "Yi Sang", "Faust", "Don Quixote", "Ryoshu",
        "Meursault", "Gregor", "Hong Lu", "Ishamel",
        "Rodion", "Sinclair", "Outis", "Gregor"
    };

    char *Squad[7] = {NULL};
    int Choice;

    for (int i = 0; i < 7; i++)
    {
        printf("Selected Unit: ");
        scanf("%d", &Choice);

        bool valid = false;

        while (!valid)
        {
            valid = true;

            if (Choice < 1 || Choice > 12)
            {
                printf("Please choose from 1 to 12: ");
                scanf("%d", &Choice);
                valid = false;
            }
            else
            {
                for (int j = 0; j < i; j++)
                {
                    if (strcmp(Squad[j], Sin[Choice - 1]) == 0)
                    {
                        printf("Already picked, choose another: ");
                        scanf("%d", &Choice);
                        valid = false;
                        break;
                    }
                }
            }
        }

        Squad[i] = Sin[Choice - 1];
        printf("Slots Filled %d/7\n", i + 1);
    }

    //Show Gacha
    printf("\nCongratulations!\n");
    printf("Your Units are: ");

    for (int i = 0; i < 7; i++)
    {
        if (i < 6)
        {
            printf("%s, ", Squad[i]);
        }
        else
        {
            printf("%s", Squad[i]);
        }
    }

    printf("\n");
}

void ChooseGacha()
{
    int choice;

    while (true)
    {
        scanf("%d", &choice);

        if (choice == 1)
        {
            GirlsFrontline();
            break;
        }
        else if (choice == 2)
        {
            GenshinImpact();
            break;
        }
        else if (choice == 3)
        {
            LimbusCompany();
            break;
        }
        else
        {
            printf("Please select among the choices: ");
        }
    }
}

int main()
{
    srand(time(NULL));

    printf("Welcome to Frontline Company Impact\n");
    printf("A Gacha Coin Flip Based Game where every success is based on a 50/50\n");
    printf("The Three Factions\n");
    printf("1. Girls Frontline - All Units Attack on turn based on Class until Reload\n");
    printf("2. Genshin Impact - Only One Unit in a Squad of 4 per turn, but can attack multiple units\n");
    printf("3. Limbus Company - All Units can Attack Selectively per turn but can be Staggered\n");
    printf("Choose by Number: ");

    ChooseGacha();

    return 0;
}
