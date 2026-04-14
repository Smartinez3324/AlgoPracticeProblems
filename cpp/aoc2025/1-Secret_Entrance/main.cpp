#include <iostream>
#include <fstream>
#include <ostream>
#include <stdexcept>
#include <string>

std::ifstream openFile (std::string);

int main (int argc, char *argv[]) {
    
    if (argc != 1) {
        std::cout << "Must specify a file to read, like ./main input_1.txt";
        return 0;
    }

    std::ifstream stream = openFile(argv[1]);   


}

// Creates an ifstream on the file that was provided.
std::ifstream openFile (std::string filename) {
    std::ifstream fileStream(filename);
    if (!fileStream.is_open()) {
        throw std::invalid_argument("File specified cannot be opened...");
    }
    return fileStream; 
}
