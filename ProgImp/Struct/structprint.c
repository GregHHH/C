#include <stdio.h>

struct vecteur
{
    int vec[100];
    int nbelemnt;
};

typedef struct vecteur vec_t; /* norme _t = type */
/* vecteurs de type vec_t */





void afficher(vec_t v)
{
   int i;
   for(i =0; i < v.nbelemnt;i = i + 1)
   {
    printf("%d\n", v.vec[i]);
   }
}




/* void remplir(int nb,int vec[100]*/
vec_t remplir(int nb)
{
    vec_t v;
    int i, pred, ante, crt;
    v.nbelemnt = nb;
    pred = 1;
    ante = 1;
    v.vec[0] = 1;
    v.vec[1] = 1;
    
    for (i = 2;i < nb; i = i+1)
    {
        crt = (pred*ante)%23;
        v.vec[i] = crt;
        ante = pred;
        pred = crt;
    }
    return v;
}

int main()
{
     vec_t v;
     int nb;
     vec_t vec;
     
     nb = 30;
     v = remplir(nb);
     afficher(v);
}
