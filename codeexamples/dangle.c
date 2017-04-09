int *dangle()
{
    int i = 69;
    return &i; // Function return address of local variable!
}

int main()
{
    int *p;
    p = dangle();
}
