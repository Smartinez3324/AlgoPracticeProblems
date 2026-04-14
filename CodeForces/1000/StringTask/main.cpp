#include <iostream>
#include <set>

int main (){
    std::string str, res;
    std::getline(std::cin, str);   
    std::set<char> v = {'A', 'O', 'Y', 'E', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i'};

    int index = str.size();

    for(int i = 0; i < index; i++) {
        char current = str[i];
        if (!v.count(current)) {
            res += '.';
            if ((current <= 90) && (current >= 65)) {
                current = current + 32;
                res += current;
            } else {
                res += current;
            }
        }
    }
    std::cout<<res<<std::endl;
    return 0;
}
