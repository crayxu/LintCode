class MyQueue {
public:

    stack<int> stack1;
    stack<int> stack2;
    
    MyQueue() {
        // do intialization if necessary
    }

    /*
     * @param element: An integer
     * @return: nothing
     */
    void push(int element) {
        stack1.push(element);
    }


    void transfer() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
    }
    
    /*
     * @return: An integer
     */
    int pop() {
        transfer();
        int temp = stack2.top();
        stack2.pop();
        return temp;
    }

    /*
     * @return: An integer
     */
    int top() {
        transfer();
        return stack2.top();
    }
};
