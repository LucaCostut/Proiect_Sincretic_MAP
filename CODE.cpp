#include <iostream>
using namespace std;
#define linMax 8
#define colMax 8
//Functia de initializare cu 0 pe toate pozitiile.
void InitializareTabla(int tabla[linMax][colMax])
{
    for (int lin=0;lin<linMax;lin++)
        for(int col=0;col<colMax;col++)
            tabla[lin][col]=0;
}
//Functia de afisare.
void Afisare(int tabla[linMax][colMax])
{
    for(int lin=0;lin<linMax;lin++)
    {
        cout<<" ";
        for(int col=0;col<colMax;col++)
         {
            if(tabla[lin][col] == -1)
                cout<<"* ";
            else
                cout<<"@ ";
         }
        cout<<"\n";
    }
    cout<<"\n<------------------>\n\n";
}
void fct(int tabla[linMax][colMax],int lin,int &sol)
{
    if(lin==linMax)
    {
        /*Afisare(tabla); -- Am comentat aceasta linie pentru ca sa nu se mai afiseze toate posibilitatile de a pune turele si ca sa returneze direct numarul de solutii */
                             //Se apeleaza functia de afisare a tablei atunci cand toate cele 8 ture au fost amplasate
        sol++; //Se incrementeaza numarul de solutii     
    }
    else
    {
        for(int col=0;col<colMax;col++)
            if(tabla[lin][col]==0)
            {
                for (int i = 0; i < linMax; i++)
                {   if(i == lin)
                        continue;
                    else
                        tabla[i][col]= -1;
                }
                fct(tabla,lin + 1,sol);
                for (int i = 0; i < linMax; i++)
                    tabla[i][col] = 0;
            }
    }
}
int main ()
{

    int tabla[linMax][colMax];
    int lin=0;
    int sol=0;
    InitializareTabla(tabla);
    fct(tabla,lin,sol);
    cout<<"Numarul final de solutii pentru "<<linMax<<" linii"<<"si "<<colMax<<" coloane este:"<< sol;
    return 0;
    
}