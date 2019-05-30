#include <gtest/gtest.h>
#include "Application.h"
#include "Document.h"
#include "Interpreter.h"

TEST(Interpreter, RunString)
{
    ASSERT_EQ(Interpreter::getInterpreter().runString("print (\"Hello World\")"), 0);
}

TEST(Application, NotRunning)
{
    Application app = Application::getApplication();
    ASSERT_THROW(app.newDocument("MyDocument"), AppNotRunningError);
}

TEST(Application, NewDocument)
{
    Application::runApplication();
    Application app = Application::getApplication();
    ASSERT_NO_THROW(app.newDocument("MyDocument"));
    ASSERT_NO_THROW(app.getDocument("MyDocument"));
}

TEST(Application, MissingDocument)
{
    Application::runApplication();
    Application app = Application::getApplication();
    ASSERT_THROW(app.getDocument("MyDocument"), MissingDocumentError);
}
