#include <iostream>
#include "md5.h"

int main() {
    std::string text = "Hello VS Linux";
    std::cout << "Original: " << text << std::endl;

    std::string result = calculate_md5(text);
    std::cout << "MD5 Hash: " << result << std::endl;

    return 0;
}