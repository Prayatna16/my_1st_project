#include<sdtio.h>
int main
{
    printf("___________PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS EVEN OR ODD___________\n\n")
    int a;
    printf("Enter a number::\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is an even number....",a)
    }
    else 
    {
        printf("%d is an odd number...",a)
    }
    return 0;
}