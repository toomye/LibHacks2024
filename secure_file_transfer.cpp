#include "caesar.hpp"
#include "curl_downloader_alt.hpp"
#include "hash_cpp.h"
#include <iostream>
using namespace std;

int main() {
    
    string src, dest;
    
    cout << "Enter source file name: ";
    cin >> src;
    cout << "Enter target file name: ";
    cin >> dest;
    cout << "Enter the shift amount: ";
    cin >> shift;

    int lines_read = 0;

    if (option) {
        lines_read = arya::encode_to_file(dest, src, shift);
    } else {
        lines_read = arya::decode_to_file(dest, src, shift);
    }

    std::cout << "Read " << lines_read << " lines" << std::endl;

    return 0;
}

