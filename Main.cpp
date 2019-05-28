#include "Application.h"
#include "Interpreter.h"


int main()
{
    Application::runApplication();
    Application::getApplication().newDocument("MyDoc");
    Interpreter::getInterpreter().runString("print (\"Hello World\")");
}
