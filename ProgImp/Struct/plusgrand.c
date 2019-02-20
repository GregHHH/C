#include <stdio.h>

struct vecteur
{
    int vec[100];
    int nbelemnt;
};

vec_t appartient(x, v)
{

}


vec_t plusgrand(v)
{

}
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
    int nb, x;
    nb = 20;
    v = remplir(nb);
    afficher(v);
    printf("Le plus grand est %d /d\n", plusgrand(v));
    for (x = 0, x < 23; x= x + 1)
    if(appartient(x,v))
        printf("%d" appartient au vecteur\n",x);
   else
        printf("%d" n'appartient pas au vecteur8n",x);
