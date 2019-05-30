#pragma once

#include <string>
#include <unordered_map>
#include "Object.h"

class MissingObjectError : public std::exception {};

class Document {
    public:
        Object newObject(std::string name);
        Object getObject(std::string name);
    private:
        std::unordered_map<std::string, Object> objects;
};
