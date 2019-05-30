#pragma once

#include <string>


class Interpreter {
    public:
        Interpreter();
        static Interpreter& getInterpreter();
        int runString(std::string cmd);
};
