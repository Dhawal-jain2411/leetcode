class MinStack {
public:
     stack<long long> st;
    long long min;

    MinStack() {
        min = LLONG_MAX;  
    }

    void push(int value) {
        long long val = value; 
        if (st.empty()) {
            min = val;
            st.push(val);
        } else {
            if (min > val) {
                 st.push(2LL * val - min);
                min = val;
            } else {
                st.push(val);
            }
        }
    }

    void pop() {
        if (st.empty()) return;  
        
        if (st.top() < min) {
             min = (2LL * min) - st.top();
        }
        st.pop();
    }

    int top() {
        if (st.top() < min) {
              return min;
        } else {
            return st.top();
        }
    }

    int getMin() { 
        return min; 
    }
};