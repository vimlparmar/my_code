#include <iostream>
#include <stdexcept>

int main() {
    try {
        // Some code that might throw exceptions
        int a = 10;
        int b = 0;
        if (b == 0) {
            throw std::runtime_error("Division by zero is not allowed.");
        }
        int result = a / b;
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Caught a runtime_error: " << e.what() << std::endl;
    }
    catch (const std::logic_error& e) {
        std::cerr << "Caught a logic_error: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Caught a general exception: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Caught an unknown exception." << std::endl;
    }

    return 0;
}