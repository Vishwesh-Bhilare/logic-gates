
# C Code Documentation: Circuit Testing Program

## Overview

This C program accepts user input in binary format (0 or 1) and tests basic digital circuits: **AND**, **OR**, and **NOR**. The program employs `enum` for circuit types and switch statements to handle logic operations based on user input.

## Features

- Accepts binary input (0 or 1) for two variables.
- Tests and displays the output for the following circuits:
  - **AND**
  - **OR**
  - **NOR**
- Utilizes `enum` for defining circuit types.
- Uses switch statements for circuit operation logic.

## Code Structure

### Includes and Definitions

```c
#include <stdio.h>

enum CircuitType {
    AND,
    OR,
    NOR
};
```

- **`#include <stdio.h>`**: Standard input-output library for using `printf` and `scanf`.
- **`enum CircuitType`**: Defines an enumeration for the circuit types: **AND**, **OR**, **NOR**.

### Function Prototypes

```c
void testCircuit(enum CircuitType type, int input1, int input2);
```

- **`testCircuit`**: Function to evaluate the circuit based on the specified type and inputs.

### Main Function

```c
int main() {
    int input1, input2;
    int circuitChoice;

    printf("Enter first binary input (0 or 1): ");
    scanf("%d", &input1);

    printf("Enter second binary input (0 or 1): ");
    scanf("%d", &input2);

    printf("Choose circuit type:\n");
    printf("0: AND\n1: OR\n2: NOR\n");
    scanf("%d", &circuitChoice);

    if (input1 < 0 || input1 > 1 || input2 < 0 || input2 > 1) {
        printf("Invalid inputs! Please enter 0 or 1.\n");
        return 1;
    }

    testCircuit((enum CircuitType)circuitChoice, input1, input2);
    return 0;
}
```

- Prompts the user for two binary inputs and the desired circuit type.
- Validates the inputs to ensure they are binary (0 or 1).
- Calls `testCircuit` with the selected circuit type and inputs.

### Circuit Testing Function

```c
void testCircuit(enum CircuitType type, int input1, int input2) {
    int output;

    switch (type) {
        case AND:
            output = input1 && input2;
            printf("AND(%d, %d) = %d\n", input1, input2, output);
            break;
        case OR:
            output = input1 || input2;
            printf("OR(%d, %d) = %d\n", input1, input2, output);
            break;
        case NOR:
            output = !(input1 || input2);
            printf("NOR(%d, %d) = %d\n", input1, input2, output);
            break;
        default:
            printf("Invalid circuit type selected.\n");
            break;
    }
}
```

- Evaluates the circuit based on the selected type using a switch statement.
- Calculates and prints the output for the selected circuit.

## Usage Instructions

1. Compile the code using a C compiler:

    ```bash
    gcc -o circuit_tester circuit_tester.c
    ```

2. Run the compiled program:

    ```bash
    ./circuit_tester
    ```

3. Follow the prompts to enter binary inputs and select the circuit type.

## Example

```
Enter first binary input (0 or 1): 1
Enter second binary input (0 or 1): 0
Choose circuit type:
0: AND
1: OR
2: NOR
1
OR(1, 0) = 1
```

# Home Security System

- **AND Gate**: Used to ensure multiple conditions are met before triggering an alarm. For example, both a door sensor and a motion detector must be activated to sound the alarm.
- **OR Gate**: Used to trigger an alarm if any one of several sensors (e.g., smoke, motion, or window sensors) is activated.
- Companies who can potentially use this system: ADT, Ring, SimpliSafe

# Traffic Light Control

- **AND Gate**: Used to control the green light only if both the pedestrian button is not pressed and no vehicle is detected on the cross street.
- **OR Gate**: Used to change the light to red if either the pedestrian button is pressed or a vehicle is detected on the cross street.
- Companies who can potentially use this system: Cubic Corporation, Civis Analytics

# Digital Circuit Design

- **AND Gate**: Used in creating combinational circuits like multiplexers and decoders, which are essential in digital systems.


## Error Handling

- The program checks for valid binary inputs (0 or 1) and will terminate with an error message if invalid input is detected.


#References:
- https://www.geeksforgeeks.org/logic-gates/
- https://www.security.org/home-security-systems/best/
- https://www.w3schools.com/c/v
- and none the less: https://openai.com/chatgpt/

