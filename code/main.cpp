#include "raylib.h"
#include <string>
#include <yaml-cpp/yaml.h>
#include <iostream>
using namespace std;
using namespace YAML;
int main(){
    Node config=LoadFile("screencolor.yml");
    string cstr=config["color"].as<string>();
    Color color=RED;
    if (cstr == "RAYBLACK") color=BLACK;
    else if (cstr == "RAYORANGE") color=ORANGE;
    else if (cstr == "RAYGREEN") color=GREEN;
    else if (cstr == "RAYBLUE") color=BLUE;
    else if (cstr == "RAYGREY") color=GRAY;
    InitWindow(1300,1000,"Color Changer");
    float textx=500;
    float texty=450;
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(color);
        DrawText("Welcome to ColorChanger!",textx,texty,50,BLACK);
        EndDrawing();
    }
    CloseWindow();
}
