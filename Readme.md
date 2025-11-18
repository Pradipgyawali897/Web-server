Webserver made from scratch to run this use the command 
clang++ -std=c++17 -O2 -march=native -Wall -Wextra -Wpedantic     main.cpp     Networking/Sockets/*.cpp     Networking/Server/*.cpp     Networking/Handler/*.cpp     Networking/PathHandler/*.cpp     Networking/Filehandeler/render.cpp          -o webserver -lpthread && echo "DONE! Run ./webserver now"


 