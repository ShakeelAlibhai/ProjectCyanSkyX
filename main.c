#include <stdio.h>
#include <time.h>

void calcAdd();
void calcSubtract();
void calcMultiply();
void calcDivide();

int main(void)
{
    const char *name = "Project CyanSky X 1.0";
    const char *version = "Version 1.0";
    puts("PROJECT CYANSKY X");
    int mainChoice = 0;
    unsigned int sentinel = 6;
    while (mainChoice != sentinel)
    {
        printf("Please choose an option:\n"
                "1: Calculator\n"
                "2: Time\n"
                "3: About Programs\n"
                "4: About Project CyanSky X\n"
                "5: Disclaimer\n"
                "%u: Exit\n", sentinel);
        scanf("%d", &mainChoice);
        if(mainChoice == 1)
        {
            int calcChoice = 0;
            unsigned int calcSentinel = 5;
            while(calcChoice != calcSentinel)
            {
                printf("Calculator Options:\n"
                        "1: Add 2 Numbers\n"
                        "2: Subtract 2 Numbers\n"
                        "3: Multiply 2 Numbers\n"
                        "4: Divide 2 Numbers\n"
                        "%u: Exit Calculator\n", calcSentinel);
                scanf("%d", &calcChoice);
                if(calcChoice == 1)
                {
                    calcAdd();
                }
                else if(calcChoice == 2)
                {
                    calcSubtract();
                }
                else if(calcChoice == 3)
                {
                    calcMultiply();
                }
                else if(calcChoice == 4)
                {
                    calcDivide();
                }
                else if(calcChoice != calcSentinel)
                {
                    puts("Error: Unrecognized Choice");
                }
            }
        }
        else if(mainChoice == 2)
        {
            time_t currentTime = time(NULL);
            struct tm * time = localtime(&currentTime);
            printf("%s", asctime(time));
        }
        else if(mainChoice == 3)
        {
            int aboutProgramsChoice = 0;
            unsigned int aboutProgramsSentinel = 3;
            while(aboutProgramsChoice != aboutProgramsSentinel)
            {
                printf("Please choose a program to view information about:\n"
                        "1: Calculator\n"
                        "2: Time\n"
                        "%u: Exit About Programs\n", aboutProgramsSentinel);
                scanf("%d", &aboutProgramsChoice);
                if(aboutProgramsChoice == 1)
                {
                    puts("In the Calculator, you can add, subtract, multiply, and divide numbers.\n"
                            "Note: Accuracy is not guaranteed!");
                }
                else if(aboutProgramsChoice == 2)
                {
                    puts("Displays the date and time.\n"
                            "Note: Accuracy is not guaranteed!");
                }
                else if(aboutProgramsChoice != aboutProgramsSentinel)
                {
                    puts("Error: Unrecognized Choice");
                }
            }
        }
        else if(mainChoice == 4)
        {
            printf("%s\n%s\n", name, version);
        }
        else if(mainChoice == 5)
        {
            puts("1. Neither Project CyanSky X, nor the programmer(s) of Project CyanSky X, nor the distributor(s) of Project CyanSky X,\n"
                    "nor anyone or anything else that is involved with Project CyanSky X, are responsible for any misinformation, any inaccuracy,\n"
                    "any problems, or any harm, whether physical or otherwise, caused by Project CyanSky X or as a result of using Project CyanSky X.\n"
                    "2. Calculations made in Project CyanSky X are not guaranteed to be accurate and/or exact.");
        }
        else if(mainChoice != sentinel)
        {
            puts("Error: Unrecognized Choice");
        }
    }
    return 0;
}

void calcAdd()
{
    float num1, num2;
    printf("%s", "Number 1: ");
    scanf("%f", &num1);
    printf("%s", "Number 2: ");
    scanf("%f", &num2);
    float total = num1 + num2;
    printf("%f", num1);
    printf(" + %f", num2);
    printf(" = %f\n", total);
}

void calcSubtract()
{
    float num1, num2;
    printf("%s", "Number 1: ");
    scanf("%f", &num1);
    printf("%s", "Number 2: ");
    scanf("%f", &num2);
    float total = num1 - num2;
    printf("%f", num1);
    printf(" - %f", num2);
    printf(" = %f\n", total);
}

void calcMultiply()
{
    float num1, num2;
    printf("%s", "Number 1: ");
    scanf("%f", &num1);
    printf("%s", "Number 2: ");
    scanf("%f", &num2);
    float total = num1 * num2;
    printf("%f", num1);
    printf(" * %f", num2);
    printf(" = %f\n", total);
}

void calcDivide()
{
    float num1, num2;
    printf("%s", "Number 1: ");
    scanf("%f", &num1);
    printf("%s", "Number 2: ");
    scanf("%f", &num2);
    float total = num1 / num2;
    printf("%f", num1);
    printf(" / %f", num2);
    printf(" = %f\n", total);
}