#include <stdio.h>              
#include <stdlib.h> 
#include <time.h>

int main()
{
printf("\t \t \t DEALER'S CHOICE \n");
printf("\t \t \t CREATIVE COMPUTING \n");
printf("\t \t \t MORRISTOWN, NEW JERSEY \n \n \n");
printf("THIS PROGRAM WILL SIMULATE THE T.V. SHOW, DEALER'S CHOICE.\n");
printf("YOU HAVE $100 TO START WITH. ENJOY THE GAME.\n \n");
int O=100;
printf("FOR THE FIRST GAME, WE WILL PLAY ON THE WHEEL OF CHANCE.\n");
printf("THE OBJECT IS SIMPLE. GUESS WHAT SUITE WILL APPEAR ON THE\n");
printf("WHEEL AND YOU WILL GET PAID AT THOSE ODDS IF YOU ARE RIGHT.\n");
printf("THEY ARE AS FOLLOWS:\n \n");
printf("1=DIAMONDS AT 11 TO 1 ODDS          2=SPADES AT 1 TO 1 ODDS.\n");
printf("3=HEARTS AT 3 TO 1 ODDS             4=CLUBS AT 3 TO 1 ODDS.\n");
printf("YOU MAY BET UP TO $25. GOOD LUCK! \n \n");

metka240:

printf("WHAT SUITE DO YOU WANT? ");
int A=0;
scanf("%u", &A);   //u = unsignet integer
if (A > 4 ||  A < 1)
{
    goto metka270;
}
if (A <= 4)
{
    goto metka280;
}

metka270:

printf("***YOU PICKED A WRONG SUITE***\n");
goto metka240;

metka280:

printf("WHAT IS THE BET? ");
int B8=0;
scanf("%u", &B8);
if (B8 > 25 || B8 <=0)
{
    goto metka310;
}
if (B8 <= 25)
{
    goto metka320;
}

metka310:

printf("***YOU BET OVER THE HOUSE LIMIT*** \n");
goto metka280;

metka320:

printf("O.K. NOW THAT YOUR BET IS IN, WE WILL SPIN \n");
printf("THE WHEEL, GOOD LUCK! \n");
printf("THE WHEEL IS SLOWING DOWN. \n");
printf("THE WHEEL IS STOPPING. \n");
printf("THE SUITE IS \n");
srand(time(0));
int Z =rand()%(4-1+1) + 1; //генерация от 1 до 4 по времени
printf("**** %d",Z);
printf(" **** \n");
if (Z==A)
{
    goto metka420;
}
else
{
    goto metka470;
}

metka420:
switch (Z)
{
case 1:
    O=O+(11*B8);
    printf("YOU WIN ON DIAMONDS");
    goto metka480;
    break;
case 2:
    O=O+(1*B8);
    printf("YOU WIN ON SPADES");
    goto metka480;
    break;
case 3:
    O=O+(3*B8);
    printf("YOU WIN ON HEARTS");
    goto metka480;
    break;
case 4:
    O=O+(3*B8);
    printf("YOU WIN ON CLUBS");
    goto metka480;
    break;
default:
    break;
}

metka470:

O=O-(1*B8);
printf("YOU LOSE. \n");
goto metka480;

metka480:
printf("AT THE END OF PART 1, YOU HAVE $%d \n\n\n\n\n",O);
printf("THIS IS THE GAME OF IN BETWEEN. THE OBJECT IS: 5 CARDS WILL \n");
printf("BE DEALT OUT. IF ANY CARD IS LESS THAN A 3 OR GREATER THAN A \n");
printf("10, THE GAME IS OVER. YOU MAY BET UP TO $30. YOUR MONEY \n");
printf("WILL BE DOUBLED EACH TIME YOU ARE RIGHT. GOOD LUCK! \n\n");

metka540:

printf("WHAT IS THE BET? ");
scanf("%u", &A);
if (A > 30)
{
    printf("***YOU BET OVER THE HOUSE LIMIT *** \n");
    goto metka540;
}
int T=0;

int B=0;
metka560:

T=T+1;
srand(time(0));
int CARD =rand()%(12-1+1) + 1; //генерация карты от 1 до 12
printf("CARD NUMBER %d",T);
printf(" IS A %d \n",CARD);
B=B+(2*A);
if (CARD < 3 || CARD > 10)
{
    goto metka630;
}
if (T == 5)
{
    goto metka650;
}

printf("YOU ARE STILL IN THE GAME. YOU HAVE %d \n",B);
printf("STOP OR GO? ");
char answer[4];
scanf("%s", answer);
if (answer[0] == 'G')
{
    goto metka560;
}
if (answer[0] == 'S')
{
    goto metka650;
}

metka630:

O=O-A;
printf("YOU LOST. AT THE END OF PART 2, YOU HAVE $%d\n",O);
goto metka660;

metka650:
B=B+O;
printf("YOU WIN. AT THE END OF PART 2, YOU HAVE $%d\n\n\n\n\n",B);

metka660:
printf("THIS IS THE GAME OF BLACKJACK <DEALER'S CHOICE STYLE>\n");
printf("THE OBJECT IS TO BEAT THE DEALER WITH OVER 17 OR 21 OR\n");
printf("UNDER. YOU MAY BET UP TO $50. YOU MAY STOP WHEN YOU WISH.\n");
printf("IF YOU MAKE BLACKJACK, YOUR MONEY IS DOUBLED.\n");
printf("IF THE HOUSE DEALS OUT LESS THAN A TOTAL OF 17 IN 6 TRIES,\n");
printf("YOU WILL KEEP THE MONEY YOU BET. GOOD LUCK!\n\n");

metka730:
printf("THE DEALER WILL GET HIS CARDS FIRST\n");
int Z5=0;
int Z1=0;
int C=0,C3=0;
printf("HERE I GO\n");
metka760:

srand(time(0));
int Q =rand()%(12-1+1) + 1;
Z5=Q+Z5;
printf("THE CARD IS A %d\n",Q);
C=C+1;
printf("SO FAR:%d\n",Z5);
if (C == 6)
{
    goto metka850;
}

metka800:

if (Z5 < 17)
{
    goto metka760;
}
if (Z5 > 21)
{
    goto metka910;
}
if (Z5 == 21)
{
    goto metka880;
}
if (Z5 < 21)
{
    goto metka870;
}
if (Z5 >= 17)
{
    goto metka870;
}

metka850:

if (Z5 < 17)
{
    goto metka890;
}
if (Z5 >= 17)
{
    goto metka800;
}

metka870:

printf("I STOP. THE TOTAL FOR ME IS %d\n",Z5);
printf("NOW YOU GO\n");
goto metka930;

metka880:

printf("I GOT BLACKJACK\n");
goto metka930;

metka890:

printf("THE HOUSE DELT OUT LESS THAN 17. NOW YOU MUST TRY TO\n");
printf("BEAT ME\n");
goto metka930;

metka910:
printf("I BLEW IT. YOU WIN THE GREATEST AMOUNT ALLOWED TO BE\n");
printf("BET BY THE HOUSE.\n");
goto metka1160;

metka930:
printf("WHAT IS THE BET? ");
scanf("%u", &A);
if (A > O)
{
    printf("***YOU BET OVER WHAT YOU HAVE***\n");
    goto metka930;
}
if (A > 50 || A <= 0)
{
    printf("***YOU BET OVER THE HOUSE LIMIT***\n");
    goto metka930;
}

metka990:

srand(time(0));
int Q1 =rand()%(12-1+1)+1;
printf("YOUR CARD IS A %d\n",Q1);
C3=C3+1;
Z1=Q1+Z1;
printf("SO FAR THE TOTAL FOR YOU IS %d\n",Z1);
if (C3 == 6)
{
    goto metka1090;
}
if (Z1 > 21)
{
    printf("THE DEALER BEAT YOU. YOU LOSE\n");
    O=O-(1*A);
    goto metka1170;
}
printf("STOP OR GO? ");
scanf("%s", answer);
if (answer[0] == 'S')
{
    goto metka1050;
}
if (answer[0] == 'G')
{
    goto metka990;
}

metka1050:

if (Z1 == Z5) //ничья
{
    printf("WE ARE THE SAME SO WE WILL PLAY AGAIN\n");

    goto metka730; //играем заново в блэкджек
}
if (Z1<Z5)
{
    printf("THE DEALER BEAT YOU. YOU LOSE\n");
    O=O-(1*A);
    goto metka1170;
}
if (Z1==21)
{
    printf("YOU BEAT THE DEALER WITH BLACKJACK!!\n");
    O=O+(2*A);
    goto metka1170;
}
if (Z5 < Z1)
{
    printf("THE DEALER LOST. YOU WIN\n");
    O=O+(1*A);
    goto metka1170;
}

metka1090:

if (Z1 < 17)
{
    printf("THE HOUSE DELT OUT LESS THAN 17 IN\n");
    printf("6 TRIES. YOU GET THE MONEY YOU BET\n");
    O=O+(1*A);
    goto metka1170;
}

metka1160:
O=O+50;
printf("YOU KEEP IT WITH OUR BEST WISHES.\n");
goto metka1170;

metka1170:

printf("AT THE END OF PART 3, YOU HAVE $%d\n",O);
if (O <= 0)
{
    goto metka1580;
}
printf("\n\n\n\n\n");
printf("NOW WE ENTER THE LAST CHANCE ROUND. IF YOU MAKE UP TO\n");
printf("$300 YOU WILL BE ABLE TO GO INTO THE BONUS ROUND. THE\n");
printf("OBJECT IS TO GUESS INTO WHICH CATEGORY THE TOTAL OF 5 CARDS\n");
printf("WILL ADD UP TO. THESE ARE THE CATEGORIES:\n\n");
printf("1=31-40 AT 1 TO 1 ODDS     2=41-50 AT 3 TO 1 ODDS\n");
printf("3=21-31 AT 3 TO 1 ODDS     4=6-20 AT 20 TO 1 ODDS\n");
printf("GOOD LUCK!!\n");
printf("AT THIS POINT IN THE GAME YOU HAVE $%d\n",O);

metka1280:

printf("WHAT CATEGORY DO YOU WANT? ");
scanf("%u", &A);   
if (A <= 4)
{
    goto metka1320;
}
if (A > 4)
{
    printf("***YOU BET ON A WRONG CATEGORY***\n");
    goto metka1280;
}

metka1320:
printf("WHAT IS THE BET");
scanf("%u", &B);
if (B <= O)
{
    goto metka1360;
}
if (B > O)
{
    goto metka1350;
}

metka1350:

printf("***YOU BET OVER WHAT YOU HAVE***\n");
goto metka1320;

metka1360:
printf("THE CARDS ARE NOW BEING ADDED UP\n");
printf("GOOD LUCK!\n");

metka1370:

srand(time(0));
Q =rand()%(12-1+1) + 1;
int C1;
C1=C1+1;
printf("CARD NUMBER %d",C1);
printf(" IS A %d\n",Q);
Z=Z+Q;
printf("SO FAR: %d\n",Z);
if (C1 == 5)
{
    goto metka1420;
}
goto metka1370;

metka1420:

switch (A)
{
case 1:
    goto metka1430;
    break;
case 2:
    goto metka1460;
    break;
case 3:
    goto metka1490;
    break;
case 4:
    goto metka1520;
    break;
default:
    break;
}
metka1430:
if (Z<31)
{
    goto metka1540;
}

if (Z<40)
{
    goto metka1550;
}
if (Z > 40)
{
    goto metka1540;
}
metka1460:
if (Z < 41)
{
    goto metka1540;
}

if (Z < 50)
{
    goto metka1560;
}

if (Z > 50)
{
    goto metka1540;
}
metka1490:
if (Z < 21)
{
    goto metka1540;
}

if (Z < 31)
{
    goto metka1560;
}

if (Z > 31)
{
    goto metka1540;
}
metka1520:
if (Z < 6)
{
    goto metka1540;
}

if (Z < 20)
{
    goto metka1570;
}

metka1540:

O=O-(1*B);
printf("YOU LOSE\n");
goto metka1580;

metka1550:
O=O+(1*B);
printf("YOU WIN\n");
goto metka1580;

metka1560:
O=O+(3*B);
goto metka1580;

metka1570:
O=O+(20*B);
printf("YOU WIN\n");
goto metka1580;

metka1580:
printf("AT THE END OF THE GAME YOU HAVE A GRAND TOTAL OF $%d\n",O);







getchar();
getchar();
getchar();
return 0;
}