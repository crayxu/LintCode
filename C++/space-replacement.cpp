class Solution {
public:
    /*
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        
        if (length <= 0) {
            return 0;
        }

        int originalLength = 0;
        int numberOfSpace = 0;
        int i = 0;
        
        while (string[i] != '\0') {
            originalLength++;
    
            if (string[i] == ' ') {
                numberOfSpace++;
            }
    
            i++;
        }
        
        int newLength = originalLength + numberOfSpace*2;

        int indexOfOriginal = originalLength;
        int indexOfNew = newLength;
        
        while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal) {
            if (string[indexOfOriginal] == ' ') {
                string[indexOfNew] = '0';
                indexOfNew--;
                string[indexOfNew] = '2';
                indexOfNew--;
                string[indexOfNew] = '%';
                indexOfNew--;
            } else {
                string[indexOfNew] = string[indexOfOriginal];
                indexOfNew--;
            }
            indexOfOriginal--;
        }
        return newLength;
    }
};
