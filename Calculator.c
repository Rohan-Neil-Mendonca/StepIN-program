void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}


int main()
{
    void (*func[])(int, int) = {add, subtract};    // func is an array of function pointers
    unsigned int ch, a=100, b=23;

    printf("Enter Choice: 0 for add, 1 for subtract \n");
    scanf("%d", &ch);

   //printf("Enter values for two integers \n");
    //scanf("%d\t%d", &a,&b);

    if (ch > 2){
        printf("NOT VALID");
        return 0;
    }

    (*func[ch])(a, b);

    return 0;
}
