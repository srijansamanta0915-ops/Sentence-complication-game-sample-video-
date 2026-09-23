#include <stdio.h>

int main()
{
    int choice;
    int score = 0;

    printf("=================================\n");
    printf("       WORD PICTURE MATCHING\n");
    printf("=================================\n\n");

    printf("Match each word with the correct picture.\n\n");

    printf("Pictures:\n");
    printf("1.  [APPLE]\n");
    printf("2.  [CAR]\n");
    printf("3.  [DOG]\n");
    printf("4.  [SUN]\n");
    printf("5.  [BOOK]\n");
    printf("6.  [BALL]\n");
    printf("7.  [TREE]\n");
    printf("8.  [HOUSE]\n");
    printf("9.  [FISH]\n");
    printf("10. [CHAIR]\n");
    printf("11. [CAT]\n");
    printf("12. [PEN]\n");
    printf("13. [FLOWER]\n");
    printf("14. [BIRD]\n");
    printf("15. [TABLE]\n");
    printf("16. [CLOCK]\n");
    printf("17. [PHONE]\n");
    printf("18. [CUP]\n");
    printf("19. [SHOES]\n");
    printf("20. [BOTTLE]\n\n");
    printf("=================================\n");
    printf("             ROUND 1\n");
    printf("=================================\n\n");
    printf("Question 1\n");
    printf("Word: HOUSE\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 8)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! HOUSE is picture number 8.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 2\n");
    printf("Word: APPLE\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! APPLE is picture number 1.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 3\n");
    printf("Word: CLOCK\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 16)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! CLOCK is picture number 16.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 4\n");
    printf("Word: DOG\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! DOG is picture number 3.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 5\n");
    printf("Word: CUP\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 18)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! CUP is picture number 18.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("=================================\n");
    printf("             ROUND 2\n");
    printf("=================================\n\n");
    printf("Question 6\n");
    printf("Word: BIRD\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 14)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! BIRD is picture number 14.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 7\n");
    printf("Word: CAR\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! CAR is picture number 2.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 8\n");
    printf("Word: FLOWER\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 13)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! FLOWER is picture number 13.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 9\n");
    printf("Word: BALL\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 6)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! BALL is picture number 6.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 10\n");
    printf("Word: PHONE\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 17)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! PHONE is picture number 17.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("=================================\n");
    printf("             ROUND 3\n");
    printf("=================================\n\n");

    
    printf("Question 11\n");
    printf("Word: SUN\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 4)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! SUN is picture number 4.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 12\n");
    printf("Word: TABLE\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 15)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! TABLE is picture number 15.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 13\n");
    printf("Word: CAT\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 11)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! CAT is picture number 11.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 14\n");
    printf("Word: BOTTLE\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 20)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! BOTTLE is picture number 20.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 15\n");
    printf("Word: TREE\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 7)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! TREE is picture number 7.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("=================================\n");
    printf("             ROUND 4\n");
    printf("=================================\n\n");
    
    printf("Question 16\n");
    printf("Word: SHOES\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 19)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! SHOES is picture number 19.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 17\n");
    printf("Word: PEN\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 12)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! PEN is picture number 12.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 18\n");
    printf("Word: BOOK\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 5)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! BOOK is picture number 5.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 19\n");
    printf("Word: FISH\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 9)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! FISH is picture number 9.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }
    printf("Question 20\n");
    printf("Word: CHAIR\n");
    printf("Enter the picture number: ");
    scanf("%d", &choice);

    if (choice == 10)
    {
        printf("Correct!\n\n");
        score++;
    }
    else if (choice >= 1 && choice <= 20)
    {
        printf("Wrong! CHAIR is picture number 10.\n\n");
    }
    else
    {
        printf("Invalid choice!\n\n");
    }


    printf("=================================\n");
    printf("       THANK YOU FOR COMING!\n");
    printf("=================================\n\n");

    printf("=================================\n");
    printf("          GAME OVER!\n");
    printf("=================================\n");
    printf("Your Score: %d/20\n", score);

    return 0;
}
