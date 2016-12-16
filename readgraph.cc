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
    std::cout << "-------NODES------------\n";
    std::cout << m["nodes"] << std::endl;
    std::cout << "-------EDGES------------\n";
    std::cout << m["edges"] << std::endl;

    std::cout << "-------NODES------------\n";
    picojson::array & nodes = m["nodes"].get<picojson::array>();
    for(picojson::array::iterator i = nodes.begin(); i != nodes.end(); ++i) {
        std::cout << *i << std::endl;
    }

    std::cout << "-------EDGES------------\n";
    picojson::array & edges = m["edges"].get<picojson::array>();
    for(picojson::array::iterator i = edges.begin(); i != edges.end(); ++i) {
        std::cout << *i << std::endl;
    }
    return EXIT_SUCCESS;
}
