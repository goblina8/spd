#include <iostream>
#include <cmath>
#include <stdio.h>
#include "functions.hh"
using namespace std;

int evaluate(int *p, int *r, int *j)
{
    int ready[10], end[10], maximum = -1;
    ready[0] = r[j[0]]; //pierwszy gotowy będzie pierwszy, który się pojawi
    end[0] = ready[0] + p[j[0]]; //czas wykonania to czas przygotowania+czas wykonywania
    for (int i = 1; i < 10; i++)
    {
        ready[i] = max(r[i-1],end[i-1]);
        end[i] = ready[i] + p[i-1];
    }
    for (int i = 0; i < 10; i++)
    {
        if (end[i] > maximum)
        {
            maximum = end[i];
        }
    }
   return maximum;
}