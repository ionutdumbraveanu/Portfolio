#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int b, matrice[5][5], i, j, k, vector_simboluri[8] = { 1,2,3,4,5,6,7,8 }, vector_betline[18] = { 8,10,15,20,30,40,50,80,100,150,200,300,400,500,800,1000,1500,2000 }, betline;
char r, bv[11] = "Bun venit!", mesaj1[200] = "Nu ai destui bani!", nm[40] = "Fonduri insuficiente:(";
char caracter_1, caracter_2, caracter_bet;
int credit1, credit2;
char caracter_dublaj[20];
int fifty;

int randNum(int min, int max)
{
    return rand() % max + min;
}

void initializare(int v[5][5])
{
    int i, j;
    for (i = 1; i <= 3; i++)
        for (j = 1; j <= 5; j++)
        {
            v[i][j] = randNum(1, 8);
        }
}

void mesaj_no_money()
{
    system("CLS");
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << " \t \t \t \t \t \t \t \t ";
    cout << nm << endl;

}
void mesaj_minor()
{
    cout << " \t \t \t \t \t \t \t \t Trebuie sa ai peste 18 ani pentru a juca!" << endl;
    cout << " \t \t \t \t \t \t \t \t Apasati orice tasta pentru a iesi !" << endl;

}
void afisare_bara_jos()
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << " \t \t \t \t \t        |'a' = +/-| 'd'= dublaj | 'h' = roll|" << endl;
}
void afisare_matrice(int v[5][5])
{
    int i, j;

    for (i = 1; i <= 3; i++)
    {
        cout << " \t \t \t \t \t \t \t \t    ";
        for (j = 1; j <= 5; j++)
        {

            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void bara_info(int a, int b, int c, int d)
{
    cout << " \t \t \t \t \t     ----------------------------------------------------------" << endl;
    cout << " \t \t \t \t \t     " << "|Lines : 5| Bet/Line: " << a << " |Credit: " << b << " |Bet: " << c << "|" << "Last win: " << d << "|" << endl;
}




inline void delay(unsigned long ms)
{
    Sleep(ms);
}

enum Colors { blue = 1, green, cyan, red, purple, yellow, grey, dgrey, hblue, hgreen, hred, hpurple, hyellow, hwhite };
void coutc(int color, char* output)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, color);
    cout << output;
    SetConsoleTextAttribute(handle, color);
}


int main()
{
    float bet, credit;

    cout << " \t \t \t \t \t \t \t \t Introduceti-va varsta: ";
    int n;
    cin >> n;
    cout << endl;
    if (n < 18)
    {
        k = 1;
    }
    else
    {
        cout << " \t \t \t \t \t \t \t \t " << bv << endl;
        cout << " \t \t \t \t \t \t \t \t " << "Introduceti suma: ";
        cin >> credit;
        credit += 50;
        cout << endl;
        Sleep(1000);
    }

    cout << endl;
    //cout<<"Introduceti suma : ";
    //cin>>credit;
    //cout<<endl;
    //cout<<"Introduceti bet : ";
    //cin>>bet;
    //cout<<endl;
    b = 1;
    betline = vector_betline[b];
    srand(time(NULL));
    caracter_1 = 'h';
    while (caracter_1 == 'h')
    {
        bet = 5 * betline;
        credit = credit - bet;
        /*while(cin.get()=='-')
        {
        	if(b<1)
        		betline=vector_betline[1];
        	betline=vector_betline[b--];
        }
        while(cin.get()=='+')
        {
        	if(b>18)
        		betline=vector_betline[18];
        	betline=vector_betline[b++];
        }*/
        system("CLS");
        if (k == 0)
        {
            initializare(matrice);
            afisare_bara_jos();
            afisare_matrice(matrice);
            credit1 = credit;

            int c = 0, p = 0;

            if (matrice[1][1] == matrice[1][2])
            {
                if (matrice[1][2] == matrice[1][3])
                {
                    if (matrice[1][3] == matrice[1][4])
                    {
                        if (matrice[1][4] == matrice[1][5])
                        {
                            switch (matrice[1][1])
                            {
                            case 1:
                                credit = credit + (100 * bet);
                                break;
                            case 2:
                                credit = credit + (40 * bet);
                                break;
                            case 3:
                                credit = credit + (40 * bet);
                                break;
                            case 4:
                                credit = credit + (50 * bet);
                                break;
                            case 5:
                                p = 1;
                                credit = credit + (40 * bet);
                                break;
                            case 6:
                                credit = credit + (40 * bet);
                                break;
                            case 7:
                                credit = credit + (1000 * bet);
                                break;
                            case 8:
                                credit = credit + (100 * bet);
                                break;
                            }
                            c = 1;
                        }
                        if (c == 0)
                        {
                            switch (matrice[1][1])
                            {
                            case 1:
                                credit = credit + (40 * bet);
                                break;
                            case 2:
                                credit = credit + (10 * bet);
                                break;
                            case 3:
                                credit = credit + (10 * bet);
                                break;
                            case 4:
                                credit = credit + (10 * bet);
                                break;
                            case 5:
                                p = 1;
                                credit = credit + (10 * bet);
                                break;
                            case 6:
                                credit = credit + (10 * bet);
                                break;
                            case 7:
                                credit = credit + (200 * bet);
                                break;
                            case 8:
                                credit = credit + (40 * bet);
                                break;
                            }
                            c = 1;
                        }

                    }
                    if (c == 0)
                    {
                        switch (matrice[1][1])
                        {
                        case 1:
                            credit = credit + (10 * bet);
                            break;
                        case 2:
                            credit = credit + (4 * bet);
                            break;
                        case 3:
                            credit = credit + (4 * bet);
                            break;
                        case 4:
                            credit = credit + (2 * bet);
                            break;
                        case 5:
                            p = 1;
                            credit = credit + (4 * bet);
                            break;
                        case 6:
                            credit = credit + (4 * bet);
                            break;
                        case 7:
                            credit = credit + (20 * bet);
                            break;
                        case 8:
                            credit = credit + (10 * bet);
                            break;
                        }
                    }


                }
                if (p == 0)
                {
                    if (matrice[1][1] == 5)
                    {
                        credit = credit + bet;
                    }
                }
            }
            c = 0;
            p = 0;

            if (matrice[2][1] == matrice[2][2])
            {

                if (matrice[2][2] == matrice[2][3])
                {

                    if (matrice[2][3] == matrice[2][4])
                    {

                        if (matrice[2][4] == matrice[2][5])
                        {
                            switch (matrice[2][1])
                            {
                            case 1:
                                credit = credit + (100 * bet);
                                break;
                            case 2:
                                credit = credit + (40 * bet);
                                break;
                            case 3:
                                credit = credit + (40 * bet);
                                break;
                            case 4:
                                credit = credit + (50 * bet);
                                break;
                            case 5:
                                p = 1;
                                credit = credit + (40 * bet);
                                break;
                            case 6:
                                credit = credit + (40 * bet);
                                break;
                            case 7:
                                credit = credit + (1000 * bet);
                                break;
                            case 8:
                                credit = credit + (100 * bet);
                                break;
                            }
                            c = 1;
                        }
                        if (c == 0)
                        {
                            switch (matrice[2][1])
                            {
                            case 1:
                                credit = credit + (40 * bet);
                                break;
                            case 2:
                                credit = credit + (10 * bet);
                                break;
                            case 3:
                                credit = credit + (10 * bet);
                                break;
                            case 4:
                                credit = credit + (10 * bet);
                                break;
                            case 5:
                                p = 1;
                                credit = credit + (10 * bet);
                                break;
                            case 6:
                                credit = credit + (10 * bet);
                                break;
                            case 7:
                                credit = credit + (200 * bet);
                                break;
                            case 8:
                                credit = credit + (40 * bet);
                                break;
                            }
                            c = 1;
                        }

                    }
                    if (c == 0)
                    {
                        switch (matrice[2][1])
                        {
                        case 1:
                            credit = credit + (10 * bet);
                            break;
                        case 2:
                            credit = credit + (4 * bet);
                            break;
                        case 3:
                            credit = credit + (4 * bet);
                            break;
                        case 4:
                            credit = credit + (2 * bet);
                            break;
                        case 5:
                            p = 1;
                            credit = credit + (4 * bet);
                            break;
                        case 6:
                            credit = credit + (4 * bet);
                            break;
                        case 7:
                            credit = credit + (20 * bet);
                            break;
                        case 8:
                            credit = credit + (10 * bet);
                            break;
                        }
                    }


                }
                if (p == 0)
                {
                    if (matrice[2][1] == 5)
                    {
                        credit = credit + bet;
                    }
                }
            }
            c = 0;
            p = 0;
            if (matrice[3][1] == matrice[3][2])
            {
                if (matrice[3][2] == matrice[3][3])
                {
                    if (matrice[3][3] == matrice[3][4])
                    {
                        if (matrice[3][4] == matrice[3][5])
                        {
                            switch (matrice[3][1])
                            {
                            case 1:
                                credit = credit + (100 * bet);
                                break;
                            case 2:
                                credit = credit + (40 * bet);
                                break;
                            case 3:
                                credit = credit + (40 * bet);
                                break;
                            case 4:
                                credit = credit + (50 * bet);
                                break;
                            case 5:
                                p = 1;
                                credit = credit + (40 * bet);
                                break;
                            case 6:
                                credit = credit + (40 * bet);
                                break;
                            case 7:
                                credit = credit + (1000 * bet);
                                break;
                            case 8:
                                credit = credit + (100 * bet);
                                break;
                            }
                            c = 1;
                        }
                        if (c == 0)
                        {
                            switch (matrice[3][1])
                            {
                            case 1:
                                credit = credit + (40 * bet);
                                break;
                            case 2:
                                credit = credit + (10 * bet);
                                break;
                            case 3:
                                credit = credit + (10 * bet);
                                break;
                            case 4:
                                credit = credit + (10 * bet);
                                break;
                            case 5:
                                p = 1;
                                credit = credit + (10 * bet);
                                break;
                            case 6:
                                credit = credit + (10 * bet);
                                break;
                            case 7:
                                credit = credit + (200 * bet);
                                break;
                            case 8:
                                credit = credit + (40 * bet);
                                break;
                            }
                            c = 1;
                        }

                    }
                    if (c == 0)
                    {
                        switch (matrice[3][1])
                        {
                        case 1:
                            credit = credit + (10 * bet);
                            break;
                        case 2:
                            credit = credit + (4 * bet);
                            break;
                        case 3:
                            credit = credit + (4 * bet);
                            break;
                        case 4:
                            credit = credit + (2 * bet);
                            break;
                        case 5:
                            p = 1;
                            credit = credit + (4 * bet);
                            break;
                        case 6:
                            credit = credit + (4 * bet);
                            break;
                        case 7:
                            credit = credit + (20 * bet);
                            break;
                        case 8:
                            credit = credit + (10 * bet);
                            break;
                        }
                    }


                }
                if (p == 0)
                {
                    if (matrice[3][1] == 5)
                    {
                        credit = credit + bet;
                    }
                }
            }
            c = 0;
            p = 0;
            if (matrice[1][1] == matrice[2][2])
            {
                if (matrice[2][2] == matrice[3][3])
                {
                    if (matrice[3][3] == matrice[2][4])
                    {
                        if (matrice[2][4] == matrice[1][5])
                        {
                            switch (matrice[1][1])
                            {
                            case 1:
                                credit = credit + (100 * bet);
                                break;
                            case 2:
                                credit = credit + (40 * bet);
                                break;
                            case 3:
                                credit = credit + (40 * bet);
                                break;
                            case 4:
                                credit = credit + (50 * bet);
                                break;
                            case 5:
                                p = 1;
                                credit = credit + (40 * bet);
                                break;
                            case 6:
                                credit = credit + (40 * bet);
                                break;
                            case 7:
                                credit = credit + (1000 * bet);
                                break;
                            case 8:
                                credit = credit + (100 * bet);
                                break;
                            }
                            c = 1;
                        }
                        if (c == 0)
                        {
                            switch (matrice[1][1])
                            {
                            case 1:
                                credit = credit + (40 * bet);
                                break;
                            case 2:
                                credit = credit + (10 * bet);
                                break;
                            case 3:
                                credit = credit + (10 * bet);
                                break;
                            case 4:
                                credit = credit + (10 * bet);
                                break;
                            case 5:
                                p = 1;
                                credit = credit + (10 * bet);
                                break;
                            case 6:
                                credit = credit + (10 * bet);
                                break;
                            case 7:
                                credit = credit + (200 * bet);
                                break;
                            case 8:
                                credit = credit + (40 * bet);
                                break;
                            }
                            c = 1;
                        }

                    }
                    if (c == 0)
                    {
                        switch (matrice[1][1])
                        {
                        case 1:
                            credit = credit + (10 * bet);
                            break;
                        case 2:
                            credit = credit + (4 * bet);
                            break;
                        case 3:
                            credit = credit + (4 * bet);
                            break;
                        case 4:
                            credit = credit + (2 * bet);
                            break;
                        case 5:
                            p = 1;
                            credit = credit + (4 * bet);
                            break;
                        case 6:
                            credit = credit + (4 * bet);
                            break;
                        case 7:
                            credit = credit + (20 * bet);
                            break;
                        case 8:
                            credit = credit + (10 * bet);
                            break;
                        }
                    }


                }
                if (p == 0)
                {
                    if (matrice[1][1] == 5)
                    {
                        credit = credit + bet;
                    }
                }

            }
            c = 0;
            p = 0;

            if (matrice[3][1] == matrice[2][2])
            {
                if (matrice[3][1] == matrice[2][2] == matrice[1][3])
                {
                    if (matrice[3][1] == matrice[2][2] == matrice[1][3] == matrice[2][4])
                    {
                        if (matrice[3][1] == matrice[2][2] == matrice[1][3] == matrice[2][4] == matrice[3][5])
                        {
                            switch (matrice[3][1])
                            {
                            case 1:
                                credit = credit + (100 * bet);
                                break;
                            case 2:
                                credit = credit + (40 * bet);
                                break;
                            case 3:
                                credit = credit + (40 * bet);
                                break;
                            case 4:
                                credit = credit + (50 * bet);
                                break;
                            case 5:
                                p = 1;
                                credit = credit + (40 * bet);
                                break;
                            case 6:
                                credit = credit + (40 * bet);
                                break;
                            case 7:
                                credit = credit + (1000 * bet);
                                break;
                            case 8:
                                credit = credit + (100 * bet);
                                break;
                            }
                            c = 1;
                        }
                        if (c == 0)
                        {
                            switch (matrice[3][1])
                            {
                            case 1:
                                credit = credit + (40 * bet);
                                break;
                            case 2:
                                credit = credit + (10 * bet);
                                break;
                            case 3:
                                credit = credit + (10 * bet);
                                break;
                            case 4:
                                credit = credit + (10 * bet);
                                break;
                            case 5:
                                p = 1;
                                credit = credit + (10 * bet);
                                break;
                            case 6:
                                credit = credit + (10 * bet);
                                break;
                            case 7:
                                credit = credit + (200 * bet);
                                break;
                            case 8:
                                credit = credit + (40 * bet);
                                break;
                            }
                            c = 1;
                        }

                    }
                    if (c == 0)
                    {
                        switch (matrice[3][1])
                        {
                        case 1:
                            credit = credit + (10 * bet);
                            break;
                        case 2:
                            credit = credit + (4 * bet);
                            break;
                        case 3:
                            credit = credit + (4 * bet);
                            break;
                        case 4:
                            credit = credit + (2 * bet);
                            break;
                        case 5:
                            p = 1;
                            credit = credit + (4 * bet);
                            break;
                        case 6:
                            credit = credit + (4 * bet);
                            break;
                        case 7:
                            credit = credit + (20 * bet);
                            break;
                        case 8:
                            credit = credit + (10 * bet);
                            break;
                        }
                    }


                }
            }
            cout << endl;
            credit2 = credit;

            bara_info(betline, credit, bet, credit2 - credit1);
            //cout<<"Introduceti j daca vreti sa mariti betul"<<endl;
            cin >> caracter_2;

            if (caracter_2 == 'a')
            {
                cout << "Introduceti -/+" << endl;
                cin >> caracter_bet;
                if (caracter_bet == '-')
                {
                    if (b < 1)
                    {
                        betline = vector_betline[1];
                        cout << "\r";
                        bet = 5 * betline;
                        bara_info(betline, credit, bet, credit2 - credit1);
                        caracter_2 = 'i';
                    }

                    else
                    {
                        b--;
                        betline = vector_betline[b];
                        cout << "\r";
                        bet = 5 * betline;
                        bara_info(betline, credit, bet, credit2 - credit1);
                        caracter_2 = 'i';

                    }

                }
                else if (caracter_bet == '+')
                {
                    if (b > 18)
                    {
                        betline = vector_betline[18];
                        cout << "\r";
                        bet = 5 * betline;
                        bara_info(betline, credit, bet, credit2 - credit1);
                        caracter_2 = 'i';
                    }

                    else
                    {
                        b++;
                        betline = vector_betline[b];
                        cout << "\r";
                        bet = 5 * betline;
                        bara_info(betline, credit, bet, credit2 - credit1);
                        caracter_2 = 'i';
                    }


                }
                else
                    caracter_2 = 'a';
            }
            else if (caracter_2 == 'h')
                caracter_1 = 'h';
            else if (caracter_2 == 'd')
            {
                coutc(red, "Rosu");
                cout << "/";
                coutc(blue, "Albastru");
                cout << endl;
                cin >> caracter_dublaj;
                //toupper(caracter_dublaj);
                fifty = randNum(0, 1);
                if (fifty == 0)
                {
                    cout << "ROSU ";
                    if(strcmp(caracter_dublaj, "ROSU") == 0)
                        credit = credit + (credit2 - credit1) * 2;
                }
                else
                {
                    cout << "ALBASTRU ";
                    if (strcmp(caracter_dublaj, "ALBASTRU") == 0)
                        credit = credit + (credit2 - credit1) * 2;
                }

            }
            k = 0;

            if (credit < bet)
            {
                mesaj_no_money();
                break;
            }


        }
        else
        {
            mesaj_minor();
            caracter_1 = 't';
        }




    }
    return 0;
}


