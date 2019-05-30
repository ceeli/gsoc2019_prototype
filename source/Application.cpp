#include <string>
#include <exception>
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
    if (!running)
        throw AppNotRunningError();
    Document doc;
    documents[name] = doc;
    return doc;
}

Document Application::getDocument(std::string name)
{
    try {
        return documents.at(name);
    } catch (std::out_of_range& e) {
        throw MissingDocumentError();
    }
}
