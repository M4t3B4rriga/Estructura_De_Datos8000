#include <iostream>
using namespace::std;
int turno = 1;

void impTablero(string tablero[8][8])
{
    int cont = 0;
    cout << "\311";
    while (cont < 7)
    {
        for (int i = 1; i <= 4; i++)    // dibujando límite superior
        {
            if (i % 4 != 0)
            {
                cout << "\315";
            }
            else
            {
                cout << "\313";
                cont++;
            }
            if (cont == 7)
            {
                cout << "\315\315\315\273" << endl;
            }
        }
    }
    for (int j = 7; j >= 0; j--)
    {
        for (int i = 0; i < 8; i++)
        {
            cout << "\272" << tablero[i][j] << " ";   //imprimiendo tablero
            if (i == 7)
            {
                cout << "\272 " << (j + 1);

            }
        }
        cout << endl;
        if (j != 0)
        {
            cout << "\314";
            cont = 0;
            while (cont <= 7)
            {
                for (int k = 1; k <= 4; k++)
                {
                    if (k % 4 != 0)
                    {
                        cout << "\315"; //dibujando rayas entre cuadrantes
                    }
                    else
                    {
                        cout << "\316";
                        cont++;
                    }

                }
                if (cont == 7)
                {
                    cout << "\315\315\315\271" << endl;
                    cont++;
                }
            }

        }
    }
    cout << "\310";
    cont = 0;
    while (cont < 7)
    {
        for (int i = 1; i <= 4; i++)    // dibujando límite inferior
        {
            if (i % 4 != 0)
            {
                cout << "\315";
            }
            else
            {
                cout << "\312";
                cont++;
            }
            if (cont == 7)
            {
                cout << "\315\315\315\274" << endl;
            }
        }
    }
    for (int i = 65; i < (65 + 8); i++)
    {
        printf("  %c ", i);
        if (i == (65 + 7))
        {
            cout << "\n\n";
            cout << "***********************************\n\n";

        }
    }
}

void iniciaTablero(string tablero[8][8])
{
    for (int i=0;i<8;i++)
 {
  for (int j=0;j<8;j++)
  {
   if (tablero[i][j]=="\0")    //Dibujando espacios vacíos
   {
    tablero[i][j]="  ";
   }
  }
 }
}


int main ()
{
 string tablero[8][8];  //definición de tablero

 iniciaTablero(tablero);
 impTablero(tablero);
}
