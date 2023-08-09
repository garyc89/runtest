#include "mbed.h"

// main() runs in its own thread in the OS


InterruptIn button(PA_5);

// Interrupt service routine (ISR) to be called when the button is pressed
void button_pressed() {
    printf("Button pressed\n");
}

int main() {
    // Attach the button_pressed() function to the falling edge (button press) of the button pin
    button.fall(&button_pressed);

    // Keep the program running
    while (1) {
    
    }
}
