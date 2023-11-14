#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    int ans = 0;
    if(macAddress == "FF:FF:FF:FF:FF:FF"){
        return "broadcast";
    }else if(macAddress[1]%2 == 0){
        return "unicast";
    }else{
        return "multicast";
    }

    // make use of control flow statements
    // return result;
}
