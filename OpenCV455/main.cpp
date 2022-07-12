#include <iostream>
#include <filesystem> // C++17
#include "src/tutorialsDemo/2_1_ImageSimaple.h"

using namespace std;
int main(int argc, char** argv)
{
    imagesimple::ImageSimple is;
    auto curDir = filesystem::current_path().string();
    is.showImage(curDir + "\\images\\1.jpg", 3000); // 文件路径
    is.writeImage(curDir + "\\images\\1.jpg", curDir + "\\images\\1_new.jpg"); // 文件路径
    return 0;
}