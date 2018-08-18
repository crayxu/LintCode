class MinStack {
public:

    stack<int> s;
    stack<int> min_s;
    
    MinStack() {
        // do intialization if necessary
    }

    /*
     * @param number: An integer
     * @return: nothing
     */
    void push(int number) {
        // write your code here
        if (min_s.size() == 0) {
            min_s.push(number);
        } else if (min_s.size() != 0) {
            if (number <= min_s.top()) {
                min_s.push(number);
            }
        }
        
        s.push(number);
    }

    /*
     * @return: An integer
     */
    int pop() {
        // write your code here
        int pop_val = s.top();
        s.pop();
        if (pop_val == min_s.top()) {
            cout << "I am in";
            min_s.pop();
        }
        return pop_val;
    }

    /*
     * @return: An integer
     */
    int min() {
        // write your code here
        return min_s.top();
    }
};