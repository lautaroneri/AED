#include <iostream>
#include <fstream>
int main() {
    std::ofstream archivo;
    std::cout << "Hello, World!" << std::endl;
    std:archivo.open("C:\\Users\\Lautaro\\Desktop\\AED\\output.txt");
    archivo<<"Hello, World!";

    archivo.close();
    return 0;

}


