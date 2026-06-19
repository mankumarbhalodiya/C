#include <stdio.h>
int main()
{
    int percentage, final;
    printf("Enter percentage :");
    scanf("%d", &percentage);
    final= percentage/10;
    switch (final
    
    
    )
    {
    case 10:
    printf("DISTINCTION");
    break;
    case 9:
    printf("DISTINCTION");
    break;
    case 8:
    printf("DISTINCTION");
    break;
    case 7:
    printf("DISTINCTION");
    break;
    case 6:
    printf("FIRST CLASS");
    break;
    case 5:
    printf("SECOND CLASS");
    break;
    case 4:
    printf("PASS CLASS");
    break;
   
    default:
    printf("FAIL");
    break;

    
    

    }
    return 0;
}
