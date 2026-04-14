#include <fstream>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <string>
#include <filesystem>


namespace fs = std::filesystem;
std::ifstream openFile(std::string);

int main(int argc, char *argv[]) {
    // std::cout << -123/100 << std::endl;

    if (argc != 2) {
        std::cout << "Must specify a file to read, like ./star2 input_1.txt"
            << std::endl;
        return 0;
    }

    std::string path = argv[1];

    // Check if file exists
    if (!fs::exists(fs::path(path))) {
        std::cout << "File does not exist..." << std::endl;;
        return 0;
    }

    std::ifstream fstream = openFile(path);
    std::string line{};
    int pointerPos = 50;
    int cnt = 0;

    while (std::getline(fstream, line)) { 
        char dir = line[0];
        int distance = std::stoi(line.substr(1, line.length()));
        int temp = pointerPos;

        if (dir == 'L'){
            pointerPos = pointerPos - distance;
            if (abs(pointerPos) < abs(distance)){
                cnt++;
                if (temp/100 < pointerPos/100) {
                    cnt += abs(temp/100 - pointerPos/100);
                }
            }

        } else {
            pointerPos = pointerPos + distance;
            if (abs(pointerPos) < 100 - abs(distance)){
                cnt++;
                if (temp/100 > pointerPos/100) {
                    cnt += abs(temp/100 - pointerPos/100);
                }
            } 
        }

        if ((pointerPos % 100) == 0) {
            cnt++;
        }
    }
    std::cout << cnt << std::endl;
}

// Creates an ifstream on the file that was provided.
std::ifstream openFile(std::string filename) {
    std::ifstream fileStream(filename);
    if (!fileStream.is_open()) {
        throw std::invalid_argument("File specified cannot be opened...");
    }
    return fileStream;
}
