#include <string>
#include <sstream>
#include <vector>
#include <functional>

#include <iostream>

std::function<std::string(std::string)> grep(std::string substr) {
    return [substr](std::string str) {
        std::istringstream instream(str);
        std::ostringstream outstream;

        std::string str2;
        while(std::getline(instream, str2)) {
            if(str2.find(substr) != std::string::npos) {
                outstream << str2 << std::endl;

            } // if(str2.find(substr) != std::string::npos);
            
        } // while(!strstream.eof());

        return outstream.str();

    }; // return [substr](std::string str);

} // std::function<std::string(std::string)> grep(std::string substr);
