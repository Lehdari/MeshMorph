//
// Created by lehdari on 26.5.2019.
//

#include "OpenGLUtils/App.hpp"


int main(int argv, char** args)
{
    App app;

    Mesh bunny;
    bunny.loadFromObj(std::string(GRAPHICSUTILS_RES_PATH) + "models/bunny.obj");
    app.addMesh(std::move(bunny));
    app.loop();

    return 0;
}