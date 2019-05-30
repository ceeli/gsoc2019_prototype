#pragma once

#include <string>


class Interpreter {
    public:
        Interpreter();
        static Interpreter& getInterpreter();
        void runString(std::string cmd);
};
