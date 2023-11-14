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
                return "Error: Division by zero is not allowed.";
            }
            break;
        default:
            return "Error: Invalid arithmetic operation symbol.";
    }

   return result;
}




