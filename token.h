#include <string>
#ifndef TOKEN_H
#define TOKEN_H

class token{
    public:
        std::string name;
        int location;

        std::string getLocation();
        std::string setLocation();
};



#endif