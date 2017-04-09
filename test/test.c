#include <stdio.h>
#include "test.h"
#include "app.h"

#define CNORM "\x1B[0m"
#define CRED "\x1B[31m"
#define CGRN "\x1B[32m"

#define NO_TEST_CASE 3

int main()
{
    int a = 0;
    int i = 0;
    int result = 0;

    printf("Enter test case no(0 for all): ");
    scanf("%d",&a);

    if(0 == a)
    {
        a = 1;
        printf("Automating all test cases\n");
        while(a < NO_TEST_CASE + 1)
        {
            if(!execute_test_cases(a)) 
                printf("%sERROR%s in case %d\n",CRED,CNORM,a);
            else 
                printf("Test Case %sPASSED%s %d\n",CGRN,CNORM,a);
            a++;
        }
    }
    else
    {
        if(!execute_test_cases(a)) 
            printf("%sERROR%s in case %d\n",CRED,CNORM,a);
        else 
            printf("Test Case %sPASSED%s %d\n",CGRN,CNORM,a);
        a++;
    }
    return 1;
}

int execute_test_cases(int a)
{
    int result = 0;
    switch(a)
    {
        case 1:
            {
                result = test_case_1();
            }
            break;

        case 2:
            {
                result = test_case_2();
            }
            break;

        case 3:
            {
                result = test_case_3();
            }
            break;

        default:
            {
                printf("Invalid test case no \n");
            }
            break;
    }
    return result;
}

int test_case_1()
{
    return (add(2,3) == 5)?1:0;
}

int test_case_2()
{
    return (add(2,1) == 3)?1:0;
}

int test_case_3()
{
    return (add(8,2) == 10)?1:0;
}
