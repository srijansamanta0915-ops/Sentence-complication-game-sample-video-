#include <stdio.h>

int main()
{
    int choice;
    int score = 0;

    printf("========================================\n");
    printf("       SENTENCE COMPLETION GAME\n");
    printf("========================================\n\n");

    printf("Complete the sentence by choosing the correct word \n");
    printf("Enter the number of your answer \n\n");


    // Question 1
    printf("1: The boy is drinking ____ \n");
    printf("   1: Water\n");
    printf("   2: Running\n");
    printf("   3: Blue\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Water \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Water \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 2
    printf("2: The cat is sleeping ____ the chair \n");
    printf("   1: On\n");
    printf("   2: Running\n");
    printf("   3: Quickly\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is On \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is On \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 3
    printf("3: Riya went to school ____ she finished breakfast:\n");
    printf("   1: Because\n");
    printf("   2: After\n");
    printf("   3: Blue\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 1)
    {
        printf("Wrong! The correct answer is After \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is After \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 4
    printf("4: I stayed at home ____ it was raining:\n");
    printf("   1: Because\n");
    printf("   2: Before\n");
    printf("   3: Quickly\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Because \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Because \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 5
    printf("5: ____ the teacher entered the class, the students became quiet.\n");
    printf("   1: Before\n");
    printf("   2: When\n");
    printf("   3: Although\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 1)
    {
        printf("Wrong! The correct answer is When \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is When \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 6
    printf("6: The girl is ____ a book.\n");
    printf("   1: Reading\n");
    printf("   2: Red\n");
    printf("   3: Slowly\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Reading \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Reading \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 7
    printf("7: The dog ran ____ the garden.\n");
    printf("   1: In\n");
    printf("   2: Happy\n");
    printf("   3: Eat\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is In \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is In \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 8
    printf("8: I brush my teeth ____ I go to bed.\n");
    printf("   1: Before\n");
    printf("   2: Blue\n");
    printf("   3: Running\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Before \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Before \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 9
    printf("9: She was tired, ____ she continued studying.\n");
    printf("   1: But\n");
    printf("   2: Water\n");
    printf("   3: Tall\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is But \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is But \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 10
    printf("10: We went outside ____ the rain stopped.\n");
    printf("   1: After\n");
    printf("   2: Green\n");
    printf("   3: Singing\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is After \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is After \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 11
    printf("11: The baby is crying ____ she is hungry.\n");
    printf("   1: Because\n");
    printf("   2: Quickly\n");
    printf("   3: Yellow\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Because \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Because \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 12
    printf("12: He walked ____ to school.\n");
    printf("   1: Slowly\n");
    printf("   2: Apple\n");
    printf("   3: Blue\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Slowly \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Slowly \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 13
    printf("13: The children played ____ the park.\n");
    printf("   1: In\n");
    printf("   2: Hungry\n");
    printf("   3: Sleep\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is In \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is In \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 14
    printf("14: I will call you ____ I reach home.\n");
    printf("   1: When\n");
    printf("   2: Red\n");
    printf("   3: Eating\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is When \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is When \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 15
    printf("15: She wore a jacket ____ it was cold.\n");
    printf("   1: Because\n");
    printf("   2: Running\n");
    printf("   3: Green\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Because \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Because \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 16
    printf("16: The teacher gave us homework ____ the class ended.\n");
    printf("   1: Before\n");
    printf("   2: Blue\n");
    printf("   3: Quickly\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Before \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Before \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 17
    printf("17: Rahul was hungry, ____ he ate a sandwich.\n");
    printf("   1: So\n");
    printf("   2: Tall\n");
    printf("   3: Sleeping\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is So \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is So \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 18
    printf("18: The bird flew ____ the tree.\n");
    printf("   1: Over\n");
    printf("   2: Happy\n");
    printf("   3: Eating\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Over \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Over \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 19
    printf("19: We stayed inside ____ it was raining heavily.\n");
    printf("   1: Because\n");
    printf("   2: Before\n");
    printf("   3: Slowly\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Because \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Because \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Question 20
    printf("20: I finished my homework ____ I watched television.\n");
    printf("   1: Before\n");
    printf("   2: Blue\n");
    printf("   3: Running\n");

    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice == 2)
    {
        printf("Wrong! The correct answer is Before \n\n");
    }
    else if (choice == 3)
    {
        printf("Wrong! The correct answer is Before \n\n");
    }
    else
    {
        printf("Invalid choice \n\n");
    }


    // Final Result
    printf("========================================\n");
    printf("             GAME RESULT\n");
    printf("========================================\n");

    printf("Your score is: %d out of 20\n", score);

    if (score == 20)
    {
        printf("Excellent! You answered all sentences correctly \n");
    }
    else if (score >= 12)
    {
        printf("Good job! You answered most sentences correctly \n");
    }
    else if (score >= 1)
    {
        printf("Keep practicing sentence completion \n");
    }
    else
    {
        printf("Try again and practice more \n\n BEST OF LUCK \n");
    }

    printf("\n IMPORTANT MESSAGE \n\n  This game is for awareness and learning purposes only \n\n");
    printf("\nAGAIN \n\n It cannot diagnose Developmental Language Disorder \n\n");

    return 0;
}
