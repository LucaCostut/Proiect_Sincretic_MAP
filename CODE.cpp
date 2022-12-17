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
            if(tabla[lin][col] == -1)
                cout<<"* ";
            else
                cout<<"@ ";
        cout<<"\n";
    }
    cout<<"\n<------------------>\n\n";
}

int main ()
{
    return 0;

    int mama;
    
}