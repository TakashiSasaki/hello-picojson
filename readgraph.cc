#include <cstdlib>
#include "picojson/picojson.h"
#include <fstream>
#include <map>
#include <sstream>


int main(int argc, char** argv){
    picojson::value picojson_value;
    std::string error_string = picojson::parse(picojson_value, std::cin);
    std::cerr << error_string << std::endl;
    std::map<std::string, picojson::value> m = picojson_value.get<picojson::object>();
    std::cerr << "-------NODES------------\n";
    std::cerr << m["nodes"] << std::endl;
    std::cerr << "-------EDGES------------\n";
    std::cerr << m["edges"] << std::endl;
    return EXIT_SUCCESS;
}
