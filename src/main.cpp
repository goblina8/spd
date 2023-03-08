#include <iostream>
#include <cmath>
#include <stdio.h>
#include "RandomNumberGenerator.h"
#include "functions.hh"

using namespace std;

int main()
{
    RandomNumberGenerator rng(1);
    int rj[10];
    int pj[10];
    int j[10]; //kolejnosc
    int suma = 0;
    int suma1;
    cout << "pj: ";
    for (int i = 0; i < 10; i++)
    {
        pj[i] = rng.nextInt(1,29);
        printf("%d ", pj[i]);
        suma = suma + pj[i];
    }
    cout << endl << "rj: ";;
    for (int i = 0; i < 10; i++)
    {
        rj[i] = rng.nextInt(1,suma);
        printf("%d ", rj[i]);
    }
    cout << endl << "j :";
    for (int i = 0; i < 10; i++)
    {
        j[i] = i+1;
        printf("%d ", j[i]);
    }
    cout << endl << "wartość funkcji celu: ";
    int tym = j[0];
    j[0] = j[1];
    j[1] = tym;
    cout << evaluate(pj,rj,j) << endl;
    return 0;
}
