# compile it
# make sure the msys2 is installed
cd code
g++ main.cpp -o ColorChanger.exe -lraylib -lopengl32 -lgdi32 -lwinmm -lyaml-cpp
echo "Now the main.cpp is compiled"
pause
