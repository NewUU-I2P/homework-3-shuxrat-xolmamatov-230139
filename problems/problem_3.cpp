#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    if (S == 'M' && height >= 1.85 ){
        return "Tall";
    } else if (S == 'M' && height < 1.70){
        return "Short";
    } else if (S == 'M' && height <= 1.70 && height > 1.85) {
        return "Normal";
    } else if (S == 'F' && height >= 1.75){
        return "Tall";
    } else if (S == 'F' && height < 1.60){
        return "Short";
    } else {
        return "Normal";
    }
    // use return to return your result
    // make use of control flow statements
}