#include <iostream>

void foo(std::string& buf)
{
    buf.resize(4000000, 1);

    std::cout << "done" << std::endl;
}

int main()
{
    std::string buf;
    foo(buf);

    std::cout << buf;
    return 0;
}