

int PGCD(int a, int b)
{
    if (a == b)
        return a;
    if (a > b)
        return PGCD(a-b, b);
    return PGCD(a, b-a);
}
