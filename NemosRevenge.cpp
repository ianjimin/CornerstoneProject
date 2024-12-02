#include <iostream>
#include <string>

void explainDesign();
void concludeGame(); // Declaration of concludeGame function

// Function to pause and wait for user input before continuing
void waitForUser() {
    std::cout << "\nPress Enter to continue... (Press enter again if nothing happens)";
    std::cin.ignore();  // Ignore the newline character after user input
    std::cin.get();     // Wait for user to press Enter
}

// Function to set up the story where the player is a future fish
void futureFishIntro() {
    std::cout << "\n*Beep Beep* Welcome, Time Traveler!\n\n";
    std::cout << "You are a fish from the year 3024, sent back in time to investigate the famous\n";
    std::cout << "Berlin Aquarium disaster of 2022.\n\n";
    std::cout << "Your mission is to uncover what caused the AquaDom to collapse. You will swim through time,\n";
    std::cout << "gather clues, and learn about the engineering behind large aquariums.\n\n";
    std::cout << "Use your futuristic fish skills to analyze the materials, the structure,\n";
    std::cout << "and any signs of weakness.\n\n";
    std::cout << "Ready to begin your mission?\n\n";
    waitForUser();
}

// Function to simulate swimming through the aquarium and collecting clues
void investigateAquarium() {
    std::string choice;
    std::cout << "\nYou swim toward the massive AquaDom. The structure looks impressive, but something feels off.\n";
    std::cout << "You need to investigate the walls and the water pressure.\n\n";

    waitForUser(); // Pause before starting investigation

    // First clue: Investigating the aquarium walls
    std::cout << "Where would you like to investigate first?\n";
    std::cout << "a) The bottom of the tank\nb) The middle of the tank\nc) The top of the tank\n";
    std::cout << "Your choice: ";
    std::cin >> choice;

    std::cout << "\n";
    if (choice == "a" || choice == "A") {
        std::cout << "As you swim near the bottom, you notice the walls are thick, but there's a small crack forming.\n";
        std::cout << "The pressure here is much higher than at the top, so even tiny cracks can be dangerous!\n\n";
    } else if (choice == "b" || choice == "B") {
        std::cout << "The middle section seems fine. The water pressure here is lower, and the walls seem stable,\n";
        std::cout << "but you notice some signs of wear. Could this be due to material fatigue over time?\n\n";
    } else if (choice == "c" || choice == "C") {
        std::cout << "At the top, the water pressure is the lowest, and the walls are thinner.\n";
        std::cout << "Everything looks fine here. However, this area expands and contracts the most with temperature changes.\n\n";
    }

    waitForUser(); // Pause before investigating material choice

    // Second clue: Investigating material choice
    std::cout << "Next, you decide to investigate the material used for the tank. What would you like to do?\n";
    std::cout << "a) Analyze the glass material\nb) Analyze the joints and seams\n";
    std::cout << "Your choice: ";
    std::cin >> choice;

    std::cout << "\n";
    if (choice == "a" || choice == "A") {
        std::cout << "Your futuristic scanner reveals that the tank is made of acrylic glass.\n";
        std::cout << "It is strong but has started to show signs of tiny cracks due to the constant stress and water pressure.\n";
        std::cout << "Over time, these cracks can expand, leading to failure.\n\n";
    } else if (choice == "b" || choice == "B") {
        std::cout << "You swim closer to the joints and seams, where different sections of the tank are connected.\n";
        std::cout << "Your scanner detects signs of stress at the seams, likely caused by thermal expansion.\n";
        std::cout << "The joints are vulnerable to cracking over time.\n\n";
    }

    std::cout << "You've gathered enough clues! Let's analyze your findings.\n\n";
    waitForUser();
}

// Function to explain the material choices and construction of the AquaDom
void explainDesign() {
    std::cout << "\nNow that you've gathered some clues, let's analyze the design of the AquaDom!\n\n";

    std::cout << "The AquaDom was made of acrylic glass, a strong and transparent material used for large aquariums.\n";
    std::cout << "Acrylic glass is lighter and more impact-resistant than regular glass, but it still needs to be carefully\n";
    std::cout << "designed to handle the immense water pressure from the 1,000,000 liters of water inside.\n\n";

    waitForUser(); // Pause before showing the next section of information

    std::cout << "Here are some key engineering factors:\n\n";

    std::cout << "1. **Water Pressure:**\n";
    std::cout << "   Water pressure increases with depth. The bottom of the AquaDom had to withstand much more pressure than the top.\n";
    std::cout << "   This pressure puts stress on the acrylic walls. If the walls are not thick enough or have flaws, cracks can form.\n\n";

    waitForUser(); // Pause before continuing

    std::cout << "2. **Material Fatigue:**\n";
    std::cout << "   Over time, materials can weaken due to constant stress, temperature changes, and exposure to sunlight.\n";
    std::cout << "   Even strong acrylic can develop tiny cracks that grow if not detected early.\n\n";

    waitForUser(); // Pause before continuing

    std::cout << "3. **Thermal Expansion:**\n";
    std::cout << "   Acrylic and other materials expand and contract with temperature changes.\n";
    std::cout << "   If the material expands too much, it can cause stress at the joints or weaker sections, leading to cracking.\n\n";
    waitForUser();
}

// Function to test the player's knowledge on engineering design
void engineeringQuiz() {
    int score = 0;
    std::string answer;

    std::cout << "\nLet's see how much you've learned about the engineering behind the AquaDom.\n\n";

    // Question 1
    std::cout << "1. Why is acrylic often used in large aquariums instead of regular glass?\n";
    std::cout << "a) It's lighter and more impact-resistant\nb) It's cheaper\nc) It never cracks\n";
    std::cout << "Your answer: ";
    std::cin >> answer;
    if (answer == "a" || answer == "A") {
        std::cout << "Correct! Acrylic is strong and lightweight, making it perfect for large structures.\n\n";
        score++;
    } else {
        std::cout << "Incorrect. Acrylic is used because it's stronger and more impact-resistant than regular glass.\n\n";
    }

    waitForUser(); // Pause before next question

    // Question 2
    std::cout << "2. How does water pressure change as you go deeper into an aquarium?\n";
    std::cout << "a) It decreases\nb) It stays the same\nc) It increases\n";
    std::cout << "Your answer: ";
    std::cin >> answer;
    if (answer == "c" || answer == "C") {
        std::cout << "Correct! Water pressure increases with depth, putting more stress on the bottom of the tank.\n\n";
        score++;
    } else {
        std::cout << "Incorrect. Water pressure increases as you go deeper, which can cause cracking if the walls aren't strong enough.\n\n";
    }

    waitForUser(); // Pause before next question

    // Question 3
    std::cout << "3. Why is it important to inspect large aquariums regularly?\n";
    std::cout << "a) To clean the glass\nb) To feed the fish\nc) To check for material fatigue and cracks\n";
    std::cout << "Your answer: ";
    std::cin >> answer;
    if (answer == "c" || answer == "C") {
        std::cout << "Correct! Regular inspections help find small cracks before they become dangerous.\n\n";
        score++;
    } else {
        std::cout << "Incorrect. Regular inspections are essential to catch problems like material fatigue.\n\n";
    }

    std::cout << "You scored " << score << " out of 3!\n\n";
    if (score == 3) {
        std::cout << "Great job! You're on your way to becoming an engineering expert!\n\n";
    } else {
        std::cout << "Good try! Keep learning about engineering and how things like this happen.\n\n";
    }
    waitForUser();
}

// Function to simulate decision-making about the design of the AquaDom
void designChoices() {
    std::string choice;
    std::cout << "As a futuristic fish engineer, it's time to think about how the AquaDom could have been designed better.\n";
    std::cout << "What would you have changed?\n\n";

    std::cout << "a) Use thicker walls at the bottom\n";
    std::cout << "b) Add more support beams\n";
    std::cout << "c) Regular maintenance and crack inspection\n";
    std::cout << "Your choice: ";
    std::cin >> choice;

    std::cout << "\n";
    if (choice == "a" || choice == "A") {
        std::cout << "Good choice! Thicker walls at the bottom would better handle the increased water pressure.\n";
    } else if (choice == "b" || choice == "B") {
        std::cout << "Extra support is always helpful, especially for such a large structure.\n";
    } else if (choice == "c" || choice == "C") {
        std::cout << "Regular maintenance is key! Small cracks can grow quickly if they're not repaired.\n";
    }

    std::cout << "You've completed your mission!\n\n";
    waitForUser();
}

// Function to wrap up the game with a final message guiding players to the aquarium model
void concludeGame() {
    std::cout << "\nYour investigation is complete!\n";
    std::cout << "Now, look at the aquarium model beside the computer.\n";
    std::cout << "Your task is to fill the water to the ideal level:\n";
    std::cout << "- Too low, and the fish won’t have enough space.\n";
    std::cout << "- Too high, and it risks collapsing the tank!\n\n";
    std::cout << "Watch the light indicator:\n";
    std::cout << "- Green light: You’ve reached the safe water level — mission accomplished!\n";
    std::cout << "- Red light: The water level is too high — reduce the water to save the structure!\n";
    std::cout << "\nGood luck, Time Traveler!\n";
}

int main() {
    futureFishIntro();
    investigateAquarium();
    explainDesign();
    engineeringQuiz();
    designChoices();
    concludeGame(); // Call the new function to conclude the game with final instructions
    return 0;
}