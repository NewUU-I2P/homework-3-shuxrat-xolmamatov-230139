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
                return "is not devisible";
            }
            break;
        default:
            return "error";
    }

   return result;
}




