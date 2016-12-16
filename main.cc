#include <cstdlib>
#include "picojson/picojson.h"
#include <fstream>
#include <map>
#include <sstream>


int main(int argc, char** argv){
    std::string s;
    std::stringstream ss;
    while(std::cin) {
       std::getline(std::cin, s);
       std::cerr << s << std::endl;
       ss << s << std::endl;
    }
    picojson::value picojson_value;
    std::string error_string = picojson::parse(picojson_value, ss.str());
    std::cerr << error_string << std::endl;
    std::map<std::string, picojson::value> m = picojson_value.get<picojson::object>();
    std::cerr << m["sn"] << std::endl;
    std::cerr << m["givenName"] << std::endl;
    std::cerr << m["twitter_id"] << std::endl;
    return EXIT_SUCCESS;
}
