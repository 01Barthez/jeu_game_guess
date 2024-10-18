#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
    
float aleatoire()
{
    float random=0, max=1.0;
    random = ((float)rand() / (float)RAND_MAX)*max;
    return random;
} 

int min(int a)
{
    return floor(10*a - 7*a*aleatoire());
}

int max(int a)
{
    return floor(20*a + 20*a*aleatoire());
}

int guess(int min, int max)
{
    return floor(min + (max - min + 1)*aleatoire()); 
}

float gap_base(int I, int E)
{
    int a=2.16, b=0.016, c=1.23, d=-0.013, e=0.00011, f=-0.13, g=0.00017; 
    return (a + b*I + c*E + d*E*I + e*pow(I,2) + f*pow(E,2) + g*E*pow(I,2));
}

int gap1(int I, int E)
{
    return round(gap_base(I, E));
}

int gap2(int I, int E)
{
    return round(gap_base(I, E) * (7.0 / 12.0));
}

int score(int N, int E)
{
    float fact1=0,fact2=0,fact3;
    int score=0;
        fact1 = ((float)(N/(N+log(N+1))));
        fact2 = (float)(1-1/(exp(-0.1*(E-10*N)) + 1));
        fact3 = (float)(N/100);
        score = floor((float)(fact1*fact2 + fact3)*200);
    return score;
}
