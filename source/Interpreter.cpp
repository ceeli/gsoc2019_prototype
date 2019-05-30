#include "Python.h"
#include <string>
#include "Interpreter.h"


Interpreter& Interpreter::getInterpreter()
{
    static Interpreter i;
    return i;
}

Interpreter::Interpreter()
{
    Py_Initialize();
}

int Interpreter::runString(std::string cmd)
{
    return PyRun_SimpleString(cmd.c_str());
}
