#pragma once

#include <string>
#include <unordered_map>
#include "Document.h"

class AppNotRunningError : public std::exception {};
class MissingDocumentError : public std::exception {};

class Application {
    public:
        static void runApplication() { running = true; }
        static Application& getApplication();
        Document newDocument(std::string name);
        Document getDocument(std::string name);
    private:
        static bool running;
        std::unordered_map<std::string, Document> documents;
};
