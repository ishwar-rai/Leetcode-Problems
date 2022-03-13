class Solution {
    public boolean isValid(String s) {
        int len = s.length();
        if(len==0) return false;
        Stack<Character> st = new Stack<>();
        for(int i=0; i<len; i++){
            char ch  = s.charAt(i);
            if(ch=='(' || ch=='{' || ch=='[')
                st.push(ch);
            else if(ch==')'){
                if(st.isEmpty()) return false;
                else if(st.peek()!='(') return false;
                else st.pop();
            } else if(ch=='}'){
                if(st.isEmpty()) return false;
                else if(st.peek()!='{') return false;
                else st.pop();
            } else if(ch==']'){
                if(st.isEmpty()) return false;
                else if(st.peek()!='[') return false;
                else st.pop();
            }
        }
        if(st.isEmpty()) return true;
        return false;
    }
}