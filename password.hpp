#include "hash_cpp.h"
#include <iostream>
#include <fstream>
#include <cstring>

namespace password {

    uint64_t encrypt_password(const char password){
        std::size_t length = std::strlen(password);
        unsigned int length2 = static_cast<unsigned int>(length);
        constexpr auto hash_value = UIRN(password, length2);
        return hash_value;
    }

}
