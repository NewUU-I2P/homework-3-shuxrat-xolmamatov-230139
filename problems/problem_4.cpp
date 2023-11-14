#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    int ans = 0;
    if(macAddress == "FF:FF:FF:FF:FF:FF"){
        result =   "broadcast";
    }else if(macAddress[1]%2 == 0){
        result = "uni cast";
    }else{
        result = "multicast";
    }
    return result;
    // make use of control flow statements
    // return result;
}
