//num of steps to reduce a number to zero

class Solution {
public:
    int numberOfSteps(int num) {
        int counter = 0;
        
        while (num != 0) {
            (num % 2) ? num -= 1 : num /= 2;
            counter++;
        }
        return counter;
    }
};
