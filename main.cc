#include <stdlib.h>
#include "picojson/picojson.h"
#include <fstream>


int main(int argc, char** argv){
    std::string s;
    while(std::cin) {
       std::getline(std::cin, s);
       std::cerr << s << std::endl;
    }
    return EXIT_SUCCESS;
}
