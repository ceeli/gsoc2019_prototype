#include <string>
#include <exception>
#include "Object.h"
#include "Document.h"

Object Document::newObject(std::string name)
{
    Object obj;
    objects[name] = obj;
    return obj;
}

Object Document::getObject(std::string name)
{
    try {
        return objects.at(name);
    } catch (std::out_of_range& e) {
        throw MissingObjectError();
    }
}
