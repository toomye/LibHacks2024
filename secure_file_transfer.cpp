#include "caesar.hpp"
#include "curl_downloader_alt.hpp"
#include "hash_cpp.h"
#include <iostream>
using namespace std;

int main() {
    
    
/*
    string src, dest;
    int shift=3; //sets shift value
    int option = 1; // 1 to decode 0 to encode
    
    cout << "Enter source file name: ";
    cin >> src;
    cout << "Enter target file name: ";
    cin >> dest;

    int lines_read = 0;

    if (option) {
        lines_read = arya::encode_to_file(dest, src, shift);
    } else {
        lines_read = arya::decode_to_file(dest, src, shift);
    }

    std::cout << "Read " << lines_read << " lines" << std::endl;
*/
    string url_str = "https://www.gutenberg.org/files/73988/73988-0.txt";
	std::string file_output_name = "downloaded_file.txt";
	if (vix::curl_download(file_output_name, url_str)) {
		std::cout<<"File "<<file_output_name<<" was downloaded!"<<std::endl;
	} else {
		std::cout<<"File "<<file_output_name<< "was not downloaded"<<std::endl;
	}

    
    string src, dest,dest2;
    cout << "Enter source file name: ";
    cin >> src;
    cout << "Enter target file name: ";
    cin >> dest;

    int shift=3; //sets shift value
   

    int lines_read = 0;
    lines_read = arya::encode_to_file(dest, src, shift);

    uint64_t password = 15995394761627643730;
    cout <<"Enter password to decrypt"<<std::endl;
    string attempt;
    cin >> attempt;
    
    if (GENHASH(attempt.c_str()) != password) {
        cout << "INCORRECT PASSWORD" << endl;        
    }
    else {
    cout <<"Enter destination"<<std::endl;
    cin >> dest2;
    lines_read = arya::decode_to_file(dest2, dest, shift);
    }


    return 0;
}

