#include <string>
#include <sstream>
#include <cmath>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
//    std::string result;
//    int ans = 0;
//    if(macAddress == "FF:FF:FF:FF:FF:FF"){
//        result =   "broadcast";
//    }else if(macAddress[1]%2 == 0){
//        result = "uni cast";
//    }else{
//        result = "multicast";
//    }
//    return result;
    std::string hex_ints[6] = {"10","11","12","13","14","15"};
    std::string hex_letters[6] = {"A","B","C","D","E","F"};
    std::string macAddress_subs = macAddress.substr(0,2);
    std::string num;
    std::string result;
    int j = 0;

    for (int count=1; count != -1; count--){
        num = macAddress_subs[count];
        if (int(num[0])>=65 && int(num[0]<=70) ){
            for (int i=0; i < 7; i++){
                if (hex_letters[i] == num){
                    num = hex_ints[i];
                    break;
                };
            };
        };
        j = j + (std::stoi(num))*pow(16, 2-count-1);
    }

    if (j == 255){
        result = "Broadcast";
    } else {
        if (j%2 == 1){
            result = "Multicast";
        } else{
            result = "Unicast";
        }
    }



    return result;
    // make use of control flow statements
    // return result;
}
