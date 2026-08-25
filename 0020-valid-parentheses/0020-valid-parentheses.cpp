class Solution {
public:
    bool isValid(string s) {
        int n= s.size();
        if(n%2!=0) return false;
        stack<char> st;
        for (auto it: s){
            if(st.empty()==true) st.push(it); 
            else if(it =='(' || it == '[' || it == '{') st.push(it);
            else{
                if(it==')' && st.top()=='(') st.pop();
                else if(it==']' && st.top()=='[') st.pop();
                else if(it=='}' && st.top()=='{') st.pop();
                else return false;
            }
        }
        if(st.empty()==true) return true;
        else return false;
            // if(st.empty()==true){
            //     if(it == '(' || it =='[' || it == '{') st.push(it);
            //     else return false;
            // }
            // else{
            //     if(st.top()=='('){
            //         if( it == ']' || it == '}') return false;
            //         else st.push(it);
            //     }
            //     else if(st.top()=='['){
            //         if( it == ')' || it == '}') return false;
            //         else st.push(it);
            //     }
            //     else if(st.top() == '{'){
            //         if( it == ')' || it == ']') return false;
            //         else st.push(it);
            //     }
            //     else {
            //         if(st.top()=='[' && it == ']'){
            //             st.pop();
            //         }
            //         else if(st.top()=='{' && it == '}'){
            //             st.pop();
            //         }
            //         else if(st.top()=='(' && it == ')'){
            //             st.pop();
            //         }
            //         else return false;
                
            //     }
            // }
        
        
    }
};