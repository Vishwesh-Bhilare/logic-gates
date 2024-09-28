#include <stdio.h>
#include <string.h>

int main() {
    enum Level { LOW, HIGH };
    int user_ip;
    char IP1[5], IP2[5];
    char circuit[10];

    // Accepting user input for logic gates with validation
    while (1) {
        printf("Current state of Current A?\n0 - Low | 1 - High\n");
        scanf("%d", &user_ip);
        if (user_ip == 0) {
            strcpy(IP1, "low");
            break;
        } else if (user_ip == 1) {
            strcpy(IP1, "high");
            break;
        } else {
            printf("Error: Please enter 0 or 1 only.\n");
        }
    }

    // Accepting user input for another logic gate with validation
    while (1) {
        printf("Current state of Current B?\n0 - Low | 1 - High\n");
        scanf("%d", &user_ip);
        if (user_ip == 0) {
            strcpy(IP2, "low");
            break;
        } else if (user_ip == 1) {
            strcpy(IP2, "high");
            break;
        } else {
            printf("Error: Please enter 0 or 1 only.\n");
        }
    }

    // Output the states
    printf("Current A is %s\n", IP1);
    printf("Current B is %s\n", IP2);

    // DECIDING WHICH CIRCUIT TO INITIATE
    printf("Which circuit is to be tested: ");
    scanf("%s", circuit);

    // CIRCUITS
    if (strcmp(circuit, "and") == 0 || strcmp(circuit, "AND") == 0 || strcmp(circuit, "And") == 0) { // AND gate
        printf("▁ ▂ ▄ ▅ ▆ ▇ █   🎀  INITIATING AND GATE  🎀   █ ▇ ▆ ▅ ▄ ▂ ▁\n");

        if (strcmp(IP1, "high") == 0 && strcmp(IP2, "high") == 0) {
            printf("AND circuit will be ACTIVE since both inputs are HIGH\n");
        } else {
            printf("AND circuit will be NON-ACTIVE\n");
        }
    } else if (strcmp(circuit, "or") == 0 || strcmp(circuit, "OR") == 0 || strcmp(circuit, "Or") == 0) { // OR gate
        printf("▁ ▂ ▄ ▅ ▆ ▇ █   🎀  INITIATING OR GATE  🎀   █ ▇ ▆ ▅ ▄ ▂ ▁\n");

        if (strcmp(IP1, "high") == 0 || strcmp(IP2, "high") == 0) {
            printf("OR circuit will be ACTIVE.\n");
        } else {
            printf("OR circuit will be NON-ACTIVE.\n");
        }
    } else if (strcmp(circuit, "nor") == 0 || strcmp(circuit, "NOR") == 0 || strcmp(circuit, "Nor") == 0) { // NOR gate
        printf("▁ ▂ ▄ ▅ ▆ ▇ █   🎀  INITIATING NOR GATE  🎀   █ ▇ ▆ ▅ ▄ ▂ ▁\n");

        if (strcmp(IP1, "high") == 0 && strcmp(IP2, "high") == 0) {
            printf("NOR circuit will be NON-ACTIVE.\n");
        } else if (strcmp(IP1, "high") == 0 || strcmp(IP2, "high") == 0) {
            printf("NOR circuit will be ACTIVE.\n");
        } else {
            printf("NOR circuit will be NON-ACTIVE.\n");
        }
    } else {
        printf("Unknown circuit type.\n");
    }

    return 0;
}
