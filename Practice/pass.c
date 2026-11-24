#include <stdio.h>
#include <string.h>

struct Question {
    char question[200];
    char options[4][100];
    char correctOption;
};

int askQuestion(struct Question q) {
    char answer;
    printf("\n%s\n", q.question);
    for (int i = 0; i < 4; i++) {
        printf("%c) %s\n", 'A' + i, q.options[i]);
    }
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (answer >= 'a' && answer <= 'z') {
        answer -= 32;
    }
    if (answer == q.correctOption) {
        printf(" Correct!\n");
        return 1;
    } else {
        printf(" Wrong! Correct answer was %c.\n", q.correctOption);
        return 0;
    }
}

int main() {
    // C Programming questions
    struct Question cQuestions[] = {
        {"Which data type is used to store text in C?",
         {"int", "float", "char", "double"}, 'C'},
        {"Which loop runs at least once in C?",
         {"for", "while", "do-while", "none"}, 'C'},
        {"What does 'printf' function do?",
         {"Reads input", "Outputs text", "Stores data", "Compiles code"}, 'B'},
        {"Which symbol is used for comments in C?",
         {"//", "/* */", "#", "Both A and B"}, 'D'},
        {"What is the size of 'int' typically?",
         {"1 byte", "2 bytes", "4 bytes", "8 bytes"}, 'C'},
        {"Which keyword is used to declare a constant?",
         {"final", "const", "constant", "#define"}, 'B'}
    };
    int cCount = sizeof(cQuestions)/sizeof(cQuestions[0]);

    // General Knowledge questions
    struct Question gkQuestions[] = {
        {"What is the capital of France?",
         {"Berlin", "Madrid", "Paris", "Rome"}, 'C'},
        {"Who wrote 'Hamlet'?",
         {"Mark Twain", "William Shakespeare", "Charles Dickens", "J.K. Rowling"}, 'B'},
        {"Which planet is known as the Red Planet?",
         {"Earth", "Mars", "Jupiter", "Venus"}, 'B'},
        {"Who painted the Mona Lisa?",
         {"Van Gogh", "Picasso", "Da Vinci", "Michelangelo"}, 'C'},
        {"Which is the largest ocean on Earth?",
         {"Atlantic", "Indian", "Pacific", "Arctic"}, 'C'},
        {"In which year did World War II end?",
         {"1945", "1939", "1918", "1965"}, 'A'}
    };
    int gkCount = sizeof(gkQuestions)/sizeof(gkQuestions[0]);

    // International GK questions
    struct Question intlGkQuestions[] = {
        {"Which country has the largest population?",
         {"India", "USA", "China", "Russia"}, 'C'},
        {"The Great Barrier Reef is located in which country?",
         {"Australia", "USA", "South Africa", "Brazil"}, 'A'},
        {"What is the currency of Japan?",
         {"Dollar", "Yen", "Euro", "Won"}, 'B'},
        {"Which city hosted the 2016 Summer Olympics?",
         {"Beijing", "London", "Rio de Janeiro", "Tokyo"}, 'C'},
        {"Mount Everest is located in which mountain range?",
         {"Alps", "Rockies", "Himalayas", "Andes"}, 'C'},
        {"Which is the smallest country by area?",
         {"Monaco", "Vatican City", "Maldives", "San Marino"}, 'B'}
    };
    int intlGkCount = sizeof(intlGkQuestions)/sizeof(intlGkQuestions[0]);

    // Full Meaning questions
    struct Question fullMeaningQuestions[] = {
        {"What does CPU stand for?",
         {"Central Processing Unit", "Computer Personal Unit", "Control Program Unit", "Central Print Unit"}, 'A'},
        {"What does RAM stand for?",
         {"Random Access Memory", "Readily Available Memory", "Run Access Mode", "Read Access Memory"}, 'A'},
        {"What does USB stand for?",
         {"Universal Serial Bus", "Universal System Board", "User Serial Bus", "Unified Serial Bus"}, 'A'},
        {"What does HTTP stand for?",
         {"HyperText Transfer Protocol", "HighText Transfer Protocol", "HyperText Transmission Program", "HyperText Transfer Program"}, 'A'},
        {"What does PDF stand for?",
         {"Portable Document Format", "Public Document File", "Portable Data Format", "Program Document Format"}, 'A'},
        {"What does SQL stand for?",
         {"Structured Query Language", "Simple Query Language", "Structured Question Language", "Sample Query Language"}, 'A'}
    };
    int fullMeaningCount = sizeof(fullMeaningQuestions)/sizeof(fullMeaningQuestions[0]);

    int topicChoice;
    printf("===== Welcome to the Quiz Game =====\n");
    printf("Choose a topic:\n");
    printf("1) C Programming\n2) General Knowledge\n3) International GK\n4) Full Meaning\n");
    printf("Enter your choice: ");
    scanf("%d", &topicChoice);

    struct Question *selectedQuestions = NULL;
    int selectedCount = 0;

    switch(topicChoice) {
        case 1:
            selectedQuestions = cQuestions;
            selectedCount = cCount;
            break;
        case 2:
            selectedQuestions = gkQuestions;
            selectedCount = gkCount;
            break;
        case 3:
            selectedQuestions = intlGkQuestions;
            selectedCount = intlGkCount;
            break;
        case 4:
            selectedQuestions = fullMeaningQuestions;
            selectedCount = fullMeaningCount;
            break;
        default:
            printf("Invalid choice! Exiting.\n");
            return 0;
    }

    int score = 0;
    for (int i = 0; i < selectedCount; i++) {
        score += askQuestion(selectedQuestions[i]);
    }

    printf("\nYour final score: %d out of %d\n", score, selectedCount);
    if (score == selectedCount) {
        printf(" Excellent! Perfect Score!\n");
    } else if (score >= selectedCount / 2) {
        printf(" Good job! You passed.\n");
    } else {
        printf(" Better luck next time.\n");
    }

    return 0;
}
