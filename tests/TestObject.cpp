#include <gtest/gtest.h>
#include "Application.h"
#include "Document.h"

TEST(Object, ObjectCreation)
{
    Application app = Application::getApplication();
    ASSERT_NO_THROW(app.newDocument("MyDocument"));
}
