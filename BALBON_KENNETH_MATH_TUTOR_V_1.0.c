#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randadd()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%10;
        num2 = rand()%10;
        result = num1 + num2;
        printf("%i + %i = ?:", num1, num2);
        scanf("%i", &answer);
        if(result == answer)
        {
            printf("That's right!\n");
            score = score + 1;
        }
        else
        {
            printf("Incorrect! the correct answer is %i\n", result);
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randadd1()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%100;
        num2 = rand()%100;
        result = num1 + num2;
        printf("%i + %i = ?:", num1, num2);
        scanf("%i", &answer);
        if(result == answer)
        {
            printf("That's right!\n");
            score = score + 1;
        }
        else
        {
            printf("Incorrect! the correct answer is %i\n", result);
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randadd2()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%1000;
        num2 = rand()%1000;
        result = num1 + num2;
        printf("%i + %i = ?:", num1, num2);
        scanf("%i", &answer);
        if(result == answer)
        {
            printf("That's right!\n");
            score = score + 1;
        }
        else
        {
            printf("Incorrect! the correct answer is %i\n", result);
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randmul()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%10;
        num2 = rand()%10;
        result = num1 * num2;
        printf("%i x %i = ?:", num1, num2);
        scanf("%i", &answer);
        if(result == answer)
        {
            printf("That's right!\n");
            score = score + 1;
        }
        else
        {
            printf("Incorrect! the correct answer is %i\n", result);
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randmul1()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%100;
        num2 = rand()%100;
        result = num1 * num2;
        printf("%i x %i = ?:", num1, num2);
        scanf("%i", &answer);
        if(result == answer)
        {
            printf("That's right!\n");
            score = score + 1;
        }
        else
        {
            printf("Incorrect! the correct answer is %i\n", result);
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randmul2()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%500;
        num2 = rand()%500;
        result = num1 * num2;
        printf("%i x %i = ?:", num1, num2);
        scanf("%i", &answer);
        if(result == answer)
        {
            printf("That's right!\n");
            score = score + 1;
        }
        else
        {
            printf("Incorrect! the correct answer is %i\n", result);
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randsub()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%10;
        num2 = rand()%10;
        if(num1>=num2)
        {
            result = num1 - num2;
            printf("%d - %d = ?:", num1, num2);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
        else
        {
            result = num2 - num1;
            printf("%d - %d = ?:", num2, num1);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randsub1()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%100;
        num2 = rand()%100;
        if(num1>=num2)
        {
            result = num1 - num2;
            printf("%d - %d = ?:", num1, num2);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
        else
        {
            result = num2 - num1;
            printf("%d - %d = ?:", num2, num1);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randsub2()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%1000;
        num2 = rand()%1000;
        if(num1>=num2)
        {
            result = num1 - num2;
            printf("%d - %d = ?:", num1, num2);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
        else
        {
            result = num2 - num1;
            printf("%d - %d = ?:", num2, num1);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randdiv()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%10;
        num2 = rand()%10;
        if(num1>=num2)
        {
            result = num1 / num2;
            printf("%d / %d = ?:", num1, num2);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
        else
        {
            result = num2 / num1;
            printf("%d / %d = ?:", num2, num1);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randdiv1()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%100;
        num2 = rand()%100;
        if(num1>=num2)
        {
            result = num1 / num2;
            printf("%d / %d = ?:", num1, num2);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
        else
        {
            result = num2 / num1;
            printf("%d / %d = ?:", num2, num1);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
    }
    printf("Your score is %i/%i", score, item);
}

int randdiv2()
{
    int a, item, num1, num2, result, answer, score = 0;
    srand(time(NULL));
    printf("How many problems do you want to answer?: ");
    scanf("%i", &item);
    for(a = 1; a<=item; a++)
    {
        num1 = rand()%1000;
        num2 = rand()%1000;
        if(num1>=num2)
        {
            result = num1 / num2;
            printf("%d / %d = ?:", num1, num2);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
        else
        {
            result = num2 / num1;
            printf("%d / %d = ?:", num2, num1);
            scanf("%d", &answer);
            if(result == answer)
            {
                printf("That's right!\n");
                score = score + 1;
            }
            else
            {
                printf("Incorrect! the correct answer is %d\n", result);
            }
        }
    }
    printf("Your score is %i/%i", score, item);
}

int main()
{
    char again;
    int x, age;
    printf("What operation are we doing today?:[1=addition, 2=subtraction, 3=multiplication, 4=division]");
    scanf("%d", &x);
    if(x == 1)
    {
        printf("How old are you?: ");
        scanf("%d", &age);
        if(age >= 3 && age <= 6)
        {
            do
            {
                randadd();
                printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
                again = getch();
                if(again == 'n' || again == 'N')
                {}break;
            }while(again == 'Y' || again == 'y');
        }
        else if(age >= 7 && age <= 9)
        {
            do
            {
            randadd1();
            printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
            again = getch();
            if(again == 'n' || again == 'N')
            {break;}
            }while(again == 'Y' || again == 'y');
        }
        else if(age >= 10 && age <= 12)
        {
            do
            {
            randadd2();
            printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
            again = getch();
            if(again == 'n' || again == 'N')
            {break;}
            }while(again == 'Y' || again == 'y');
        }
        else
        {
            printf("Only for ages 3 - 12.");
        }
    }
    else if(x == 2)
    {
        printf("How old are you?: ");
        scanf("%d", &age);
        if(age >= 3 && age <= 6)
        {
            do
            {
                randsub();
                printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
                again = getch();
                if(again == 'n' || again == 'N')
                {break;}
            }while(again == 'Y' || again == 'y');
        }
        else if(age >= 7 && age <= 9)
        {
            do
            {
            randsub1();
            printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
            again = getch();
            if(again == 'n' || again == 'N')
           {break;}
            }while(again == 'Y' || again == 'y');
        }
        else if(age >= 10 && age <= 12)
        {
            do
            {
            randsub2();
            printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
            again = getch();
            if(again == 'n' || again == 'N')
            {break;}
            }while(again == 'Y' || again == 'y');
        }
        else
        {
            printf("Only for ages 3 - 12.");
        }
    }
    else if(x == 3)
    {
        printf("How old are you?: ");
        scanf("%d", &age);
        if(age >= 3 && age <= 6)
        {
            do
            {
                randmul();
                printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
                again = getch();
                if(again == 'n' || again == 'N')
                {break;}
            }while(again == 'Y' || again == 'y');
        }
        else if(age >= 7 && age <= 9)
        {
            do
            {
            randmul1();
            printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
            again = getch();
            if(again == 'n' || again == 'N')
            {break;}
            }while(again == 'Y' || again == 'y');
        }
        else if(age >= 10 && age <= 12)
        {
            do
            {
            randmul2();
            printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
            again = getch();
            if(again == 'n' || again == 'N')
            {break;}
            }while(again == 'Y' || again == 'y');
        }
        else
        {
            printf("Only for ages 3 - 12.");
        }
    }
    else if(x == 4)
    {
        printf("How old are you?: ");
        scanf("%d", &age);
        if(age >= 3 && age <= 6)
        {
            do
            {
                randdiv();
                printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
                again = getch();
                if(again == 'n' || again == 'N')
                {break;}
            }while(again == 'Y' || again == 'y');
        }
        else if(age >= 7 && age <= 9)
        {
            do
            {
            randdiv1();
            printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
            again = getch();
            if(again == 'n' || again == 'N')
            {break;}
            }while(again == 'Y' || again == 'y');
        }
        else if(age >= 10 && age <= 12)
        {
            do
            {
            randdiv2();
            printf("\nDo you want to try again? [Press Y if Yes and N if No]: ");
            again = getch();
            if(again == 'n' || again == 'N')
            {break;}
            }while(again == 'Y' || again == 'y');
        }
        else
        {
            printf("Only for ages 3 - 12.");
        }
    }
}
