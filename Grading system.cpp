#include <iostream>
#include <string>

std::string calculateGrade(int mark) {
    if (mark < 0 || mark > 100) {
        return "Invalid Mark";
    } else if (mark >= 90) {
        return "A (Excellent)";
    } else if (mark >= 80) {
        return "B (Good)";
    } else if (mark >= 70) {
        return "C (Average)";
    } else if (mark >= 60) {
        return "D (Pass)";
    } else {
        return "F (Fail)";
    }
}

int main() {
    int studentMark;

    std::cout << "Enter the student's numerical mark (0-100): ";
    
    if (!(std::cin >> studentMark)) {
        std::cerr << "Error: Invalid input. Please enter a number." << std::endl;
        return 1;
    }

    std::string grade = calculateGrade(studentMark);
    std::cout << "\n--- Grading Results ---" << std::endl;
    std::cout << "Mark Entered: " << studentMark << std::endl;
    std::cout << "Letter Grade: " << grade << std::endl;
    std::cout << "-----------------------" << std::endl;

    return 0;
}
