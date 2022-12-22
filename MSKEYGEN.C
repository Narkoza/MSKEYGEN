 /* **************************************** */
 /* ***   MSKEYGEN by NaRk0zA (C) 2022   *** */
 /* **************************************** */

 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 #include <time.h>

 char kc;
 int timer = 0;
 unsigned short int x_amount = 0;
 unsigned short int day = 0;
 unsigned short int year = 95;
 unsigned short int x[7];
 unsigned short int y[5];
 unsigned short int z = 0;
 unsigned short int aElements = 0;
 unsigned short int min_range = 0;
 unsigned short int max_range = 9;

 int irand(int min, int max);
 void Menu();
 void Win95oem();
 void Win95cd();
 void Office95();

 int irand(int min, int max)
 {
    return ((double)rand() / ((double)RAND_MAX + 1.0)) * (max - min + 1) + min;
 }

 void Win95oem()
 {
    clrscr();

    x[0] = 0;
    x_amount = 8;

    printf("WINDOWS 95 OEM KEY: \n\n");

    /* 001 - 366 */

    day = irand(1, 366);

    if(day < 10)
    {
       printf("00%u", day);
    }
    else if(day >= 10 && day < 100)
    {
       printf("0%u", day);
    }
    else
    {
       printf("%u", day);
    }

    /* 95 - 02 */

    year = irand(95, 102);

    switch(year)
    {
         case 100:
	         year = 0;
	         printf("0%u", year);
	         break;
         case 101:
	         year = 1;
	         printf("0%u", year);
	         break;
         case 102:
	         year = 2;
	         printf("0%u", year);
	         break;
         default:
	         printf("%u", year);
	         break;
    }

    printf("-OEM-0");

    /* SUMA CYFR PODZIELNA PRZEZ 7 */

    while((x_amount%7) != 0)
    {
       x_amount = 0;

       for(aElements=0; aElements<6; aElements++)
       {
	         if(aElements==5)
	         {
	            min_range = 1;
	            max_range = 7;
	         }
	         else
	         {
	            min_range = 0;
	            max_range = 9;
	         }

	         x[aElements] = irand(min_range, max_range);
	         x_amount += x[aElements];
       }
    }

    for(aElements=0; aElements<6; aElements++)
    {
       printf("%u", x[aElements]);
    }

    printf("-");

    /* 5 LOSOWYCH CYFR */

    for(aElements=0; aElements<5; aElements++)
    {
         y[aElements] = irand(0, 9);
         printf("%u", y[aElements]);
    }

    printf("\n\nWanna generate another one? (Y/N) ");
    kc = getch();
    printf("\n");

    switch(kc)
    {
	      case 'y':
		      Win95oem();
		      break;
	      case 'n':
		      Menu();
		      break;
	      default:
		      Menu();
		      break;
    }
 }

 void Win95cd()
 {
    clrscr();

    x[0] = 0;
    x_amount = 8;

    printf("WINDOWS 95 10-DIGIT KEY: \n\n");

    /* 000-998 Z WYJATKIEM 333, 444, 555, 666, 777, 888, 999 */

    z = irand(0, 998);

    switch(z)
    {
         case 333:
		      z = irand(0, 998);
		      break;
         case 444:
		      z = irand(0, 998);
		      break;
         case 555:
		      z = irand(0, 998);
		      break;
         case 666:
		      z = irand(0, 998);
		      break;
         case 777:
		      z = irand(0, 998);
		      break;
         case 888:
		      z = irand(0, 998);
		      break;
         default:
         break;
    }

    if(z<10)
	   printf("00%u", z);
    else if(z>=10 && z<100)
	   printf("0%u", z);
    else
    {
	   printf("%u", z);
    }

    printf("-");

    /* SUMA CYFR PODZIELNA PRZEZ 7 */

    while((x_amount%7) != 0)
    {
       x_amount = 0;

       for(aElements=0; aElements<7; aElements++)
       {
	         x[aElements] = irand(0,9);
	         x_amount += x[aElements];
       }
    }

    for(aElements=0; aElements<7; aElements++)
    {
       printf("%u", x[aElements]);
    }

    printf("\n\nWanna generate another one? (Y/N) ");
    kc = getch();
    printf("\n");

    switch(kc)
    {
	      case 'y':
		      Win95cd();
		      break;
	      case 'n':
		      Menu();
		      break;
	      default:
		      Menu();
		      break;
    }
 }

 void Office95()
 {
    clrscr();

    x[0] = 0;
    y[0] = 0;
    x_amount = 8;

    printf("OFFICE 95 KEY: \n\n");

    /* 3 LOSOWE CYFRY */

    for(aElements=0; aElements<3; aElements++)
    {
       y[aElements] = irand(0,9);
       printf("%u", y[aElements]);
    }

    printf("-");

    /* SUMA CYFR PODZIELNA PRZEZ 7 */

    while((x_amount%7) != 0)
    {
       x_amount = 0;

       for(aElements=0; aElements<7; aElements++)
       {
	         x[aElements] = irand(0,9);
	         x_amount += x[aElements];
       }
    }

    for(aElements=0; aElements<7; aElements++)
    {
       printf("%u", x[aElements]);
    }

    printf("\n\nWanna generate another one? (Y/N) ");
    kc = getch();
    printf("\n");

    switch(kc)
    {
	      case 'y':
		      Office95();
		      break;
	      case 'n':
		      Menu();
		      break;
	      default:
		      Menu();
		      break;
    }
 }

 void Menu()
 {
    clrscr();
    printf("===============================================\n");
    printf("= Win95 & Office95 KeyGen by NaRk0zA (C) 2022 =\n");
    printf("===============================================\n\n");
    printf("[1] Windows 95 OEM Key\n");
    printf("[2] Windows 95 10-digit Key\n");
    printf("[3] Office95 Key\n");
    printf("[q] Quit to DOS\n\n");
    printf("Enter a choice: ");

    kc = getch();

    printf("\n");

    while(kc != 'q')
    {
	      timer++;
	      srand(time(0)*timer);

	      switch(kc)
	      {
		      case '1':
			      Win95oem();
			      break;
		      case '2':
			      Win95cd();
			      break;
		      case '3':
			      Office95();
			      break;
		      case 'q':
			      exit(0);
			      break;
		      default:
			      Menu();
			      break;
	      }
    }
 }

 void main()
 {
    Menu();
 }