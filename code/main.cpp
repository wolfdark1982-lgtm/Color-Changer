# creating the application
#include "raylib.h"
# needed for yaml-cpp
#include <string>
# using on yaml-cpp
#include <yaml-cpp/yaml.h>
# adding some prints
#include <iostream>
# adding namespaces
using namespace std;
using namespace YAML;
# start the code
int main(){
    # printing the text
    cout<<"Welcome to Color Changer"<<endl;
    # load the yaml file
    Node config=LoadFile("screencolor.yml");
    string cstr=config["color"].as<string>();
    # default color of screencolor.yml
    Color color=RED;
    # all colors for yaml
    if (cstr == "RAYBLACK") color=BLACK;
    else if (cstr == "RAYORANGE") color=ORANGE;
    else if (cstr == "RAYGREEN") color=GREEN;
    else if (cstr == "RAYBLUE") color=BLUE;
    else if (cstr == "RAYGREY") color=GRAY;
    # creating Window Box
    InitWindow(1300,1000,"Color Changer");
    # creating variables
    float textx=500;
    float texty=450;
    while (!WindowShouldClose()){
        # Begins Drawing
        BeginDrawing();
        # Changing the BackGround Color
        ClearBackground(color);
        # Welcome Sign
        DrawText("Welcome to ColorChanger!",textx,texty,50,BLACK);
        # End Drawing
        EndDrawing();
    }
    # Closes Window
    CloseWindow();
    # returning to 0
    return 0;
}
