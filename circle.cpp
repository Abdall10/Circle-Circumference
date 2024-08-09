#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159; // Declare and initialize a constant value for PI
    double radius;
    double circumference;
    double area;
    char choice;

    do { // Start of the do-while loop, which will execute the code inside at least once
        printf("\nEnter the radius of a circle: ");
        // Prompt the user to enter the radius and store it in the 'radius' variable
        scanf("%lf", &radius);

      // Calculate the circumference using the formula 2 * PI * radius
        circumference = 2 * PI * radius; 
     // Calculate the area using the formula PI * radius^2
        area = PI * radius * radius; 

       // Display the calculated circumference
        printf("\nCircumference: %lf", circumference);
         // Display the calculated area
        printf("\nArea: %lf", area);   

       // Prompt the user to enter 'y' to repeat or 'n' to exit
        printf("\n\nDo you want to calculate again? (y/n): "); 
  // The space before %c is important to consume any leftover newline character
        scanf(" %c", &choice);  
    } while(choice == 'y' || choice == 'Y'); // The loop continues if the user inputs 'y' or 'Y'
    return 0;
}
