#include <iostream>
#include "Application.h"
#include "Interpreter.h"
#include "Document.h"
#include "Object.h"


int main()
{
    Application::runApplication();
    Document doc = Application::getApplication().newDocument("MyDoc");
    Object obj = doc.newObject("MyObject");
    std::cout << obj.getData() << std::endl;
    Interpreter::getInterpreter().runString("print (\"Hello World\")");
}
