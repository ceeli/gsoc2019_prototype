#include <string>
#include "Document.h"
#include "Application.h"


bool Application::running = false;


Application& Application::getApplication()
{
    static Application app;
    return app;
}

Document Application::newDocument(std::string name)
{
    Document doc;
    documents[name] = doc;
    return doc;
}

Document Application::getDocument(std::string name)
{
    return documents.at(name);
}
