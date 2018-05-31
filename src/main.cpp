
#include <cstdlib>
#include <iostream>

template <typename CharT, typename Traits = std::char_traits<CharT>>
std::basic_ostream<CharT, Traits>&
NL (std::basic_ostream<CharT, Traits>& outputStream)
{
    return outputStream << outputStream.widen('\n');
};

int main(int argc, char *argv[])
{
    std::cout << "Hello, World!\n";

    return EXIT_SUCCESS;
}
