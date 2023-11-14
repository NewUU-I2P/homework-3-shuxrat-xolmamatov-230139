

float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
    switch (operation) {
        case '+':
            result = x + y;
            return result;
            break;
        case '-':
            result = x - y;
            return result;
            break;
        case '*':
            result = x * y;
            return result;
            break;
        case '/':
            if (y != 0) {
                result = x / y;
                return result;
            } else {
                return std::nanf("");
            }
            break;
        default:
            return std::nanf("");
    }

   return result;
}




