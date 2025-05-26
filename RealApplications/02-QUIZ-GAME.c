#include <ctype.h>
#include <stdio.h>

int main() {
    
    // Questions
    char questions[][50] = {
        "1. What is the capital of Japan?",
        "2. Who developed the theory of relativity?",
        "3. What is the binary value of 5?"
    };

    // Answers to each Questions
    char answers[3] = {
        'B', 
        'C', 
        'A'
    };

    // Choices for each question
    char choices[][20] = {
        "A. Seoul", "B. Tokyo", "C. Beijing", "D. Kyoto",
        "A. Newton", "B. Tesla", "C. Einstein", "D. Bohr",
        "A. 101", "B. 110", "C. 100", "D. 111"
    };

    

    int sizeOfQuestions = sizeof(questions)/sizeof(questions[0]);
    int sizeOfchoices = sizeof(choices)/sizeof(choices[0]);
    int sizeOFAnswers = sizeof(answers)/sizeof(answers[0]);

    char History[sizeOfQuestions];
    char PlayerAnswer;
    int score = 0;

    char buffer[10];


    for (int i = 0; i < sizeOfQuestions; i++) {
        
        printf("###################################################\n");
        
        printf("%s: \n", questions[i]);
        
        // good practice for where the iteration begin and limition to increment
        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", choices[j]);
        }

        printf("###################################################\n");
        
        printf("Your Answer: ");
        // scanf("%c", &PlayerAnswer);
        // getchar();
 
        fgets(buffer, sizeof(buffer), stdin);
        // store the first element of array of buffer which is a character to PlayerAnswer
        PlayerAnswer = toupper(buffer[0]);
    
        History[i] = PlayerAnswer;

        if (PlayerAnswer == answers[i]) {
            score++;
            printf("CORRECT!\n\n");
        } else if(PlayerAnswer > 68 || PlayerAnswer < 65) {
            printf("%c is not in the choices A - D\n\n", PlayerAnswer);
            i--;
        } else {
            printf("WRONG!\n\n");
        }
        
    }

    printf("#######################\n");
    printf("[FINISHED]\n");
    printf("score: %d/%d\n", score, sizeOfQuestions);
    printf("#######################\n\n");

    printf("SUMMARY \n");
    for (int i = 0; i < sizeOfQuestions; i++) {
        printf("###################################################\n");
        printf("%s\n", questions[i]);
        printf("your answer: %c\n", History[i]);
        printf("Correct answer: %c\n", answers[i]);
        printf("###################################################\n\n");
    }

    return 0;
}