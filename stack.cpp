#include<iostream>
#include<vector>
using namespace std;
class Stack{
    private:
    vector<int> st;
    public: 
    int d , e;
    void pushData( int a );
    int popData(){
        if ( isEmpty() ) return -1;
        int val = st[ st.size() - 1 ];
        st.pop_back();
        return val;
    }
    int size(){
        return st.size();
    }
    int top(){
        if( isEmpty() ) return -1;
        int val = st[st.size() - 1];
        return val;
    }
    bool isEmpty(){
        if( st.size() < 1 ) return true;
        else return false;
    }
};
void Stack :: pushData(int a ){
    st.push_back(a);
}
int main(){
    Stack s;
    s.pushData(1);
    s.pushData(2);
    cout << "Top of Stack: " << s.top() << endl;
    cout << "Number of Elements: " << s.size() << endl;
    cout << "Removed element: " << s.popData() << endl;
    cout << "Number of Elements: " << s.size() << endl;
    cout << "Top of Stack: " << s.top() << endl;
    cout << "Removed element: " << s.popData() << endl;
    cout << "Number of Elements: " << s.size() << endl;
    if( s.isEmpty() ) cout << "Empty" << endl;
    return 0;
}