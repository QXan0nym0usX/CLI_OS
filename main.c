#include <stdint.h>

void main() {
    // Initialize your kernel here
    init_kernel();

    // Main loop
    while (1) {
        char buffer[128];
        printf(">>> ");
        fgets(buffer, sizeof(buffer), stdin);

        // Parse and execute command
        execute_command(buffer);
    }
}

void init_kernel() {
    // Initialization code here
}

void execute_command(char* command) {
    // Command execution logic here
    printf("Received command: %s\n", command);
}
