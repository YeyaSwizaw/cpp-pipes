#include "grep.hpp"
#include "pipes.hpp"

std::function<std::string(std::string)> addLine(std::string str1) {
    return [str1](std::string str2) {
        std::ostringstream str;

        str << str2 << std::endl;
        str << str1;

        return str.str();

    }; // return [str1](std::string str2);

} // std::function<std::string(std::string)> addLine(std::string str1);

void print(std::string str) {
    std::cout << str;

} // void print(std::string str);

int main(int argc, char* argv[]) {
    std::string("Hello") 
        | addLine("What is this madness")
        | addLine("Mellow")
        | addLine("Cheesecake")
        | grep("el")
        | print;

} // int main(int argc, char* argv);
