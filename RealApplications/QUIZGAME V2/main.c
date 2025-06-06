#include <complex.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
// variables
//

#define MAX_QUESTIONS 100
#define MAX_LEN 1000

char Questions[MAX_QUESTIONS][MAX_LEN];
char answer_list[MAX_QUESTIONS * 4][MAX_LEN];
char answer_key[MAX_QUESTIONS];

int howManyQuestions = 0;

char questions[] = "src/questions.txt";
char AnswersSrc[] = "src/answers.txt";
char AnswerKEy_list[] = "src/keyAnswers.txt";

char answers[MAX_QUESTIONS];
int score = 0;

//
// prototypes funcions
//

int get_questions(char []);
int get_answers(char []);
int get_keyanswer(char []);
void printQandA();
void Quizloop();


//               //
// MAIN FUNCTION //
//               //

int main() {
    int buffer = 0;

    do {

        printf("\n#####################################\n");
        printf("\nQUIZ GAME\n\nstart [ 1 ]\nwriteQ/A [ 2 ]\nquit [ 3 ]\n");
        printf("\n#####################################\n");
        printf("PRESS (1 2 3): ");
        
        scanf("%d", &buffer);
        while (getchar() != '\n');  // flush stdin
        
        if (buffer == 1) {
            Quizloop();       
        } else if (buffer == 3) {
            
            printf("\n[ THANKS FOR PLAYING! ]\n");
        }

    } while (buffer != 3);

    

    return 0;
}





//                  //
//  FUNCTIONSSSSSS  //
//                  //

void Quizloop()
{
    get_questions(questions);
    get_answers(AnswersSrc);
    get_keyanswer(AnswerKEy_list);

    char answer_buffer[10];
    score = 0;
    for (int i = 0; i < howManyQuestions; i++) {
        
        printf("\n%d. %s\n",i + 1, Questions[i]);

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", answer_list[j]);
        }

        printf("Your answer: ");
        if (fgets(answer_buffer, sizeof(answer_buffer), stdin)) {
            answer_buffer[strcspn(answer_buffer, "\n")] = 0;
            answers[i] = toupper(answer_buffer[0]);

            if (answers[i] == answer_key[i]) {
                score++;
            } else if (answers[i] > 68 || answers[i] < 65 || answers[i] == '\n') {
                i--;
            }

        } else {
            answers[i] = 'X';
        }

        
        printf("%d", score);
    }
}

int get_questions(char filename[])
{
    FILE *file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        fprintf(stderr, "Error opening %s\n", filename);
        return 0;
    } else {
        char buffer[MAX_LEN];
        int i = 0;
        while (fgets(buffer, sizeof(buffer), file_ptr) != NULL && i < MAX_QUESTIONS) {
            buffer[strcspn(buffer, "\n")] = 0;
            strncpy(Questions[i], buffer, MAX_LEN - 1);
            Questions[i][MAX_LEN - 1] = '\0'; // Always null-terminate manually
            i++;    
        }

        howManyQuestions = i;

        fclose(file_ptr);
        return i;       
    }
}



int get_answers(char filename[])
{
    FILE *file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        fprintf(stderr, "Error opening %s\n", filename);
        return 0;
    } else {
        char buffer[MAX_LEN];
        int i = 0;
        while (fgets(buffer, sizeof(buffer), file_ptr) != NULL && i < MAX_QUESTIONS) {
            buffer[strcspn(buffer, "\n")] = 0;
            strncpy(answer_list[i], buffer, MAX_LEN - 1);
            answer_list[i][MAX_LEN - 1] = '\0'; // Always null-terminate manually
            i++;    
        }

        fclose(file_ptr);
        return i;       
    }
}

int get_keyanswer(char filename[])
{
    FILE *file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        fprintf(stderr, "Error opening %s\n", filename);
        return 0;
    } else {
        char buffer[MAX_LEN];
        int i = 0;
        while (fgets(buffer, sizeof(buffer), file_ptr) != NULL && i < MAX_QUESTIONS) {
            buffer[strcspn(buffer, "\n")] = 0;
            answer_key[i] = toupper(buffer[0]);
         //   strncpy(answer_key[i], buffer, MAX_LEN - 1);
         //   answer_key[i][MAX_LEN - 1] = '\0'; // Always null-terminate manually
            i++;    
        }

        fclose(file_ptr);
        return i;       
    }
}