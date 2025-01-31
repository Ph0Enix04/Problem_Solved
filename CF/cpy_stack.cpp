#include <iostream>
#include <stack>
using namespace std;

stack<int> copystack(stack<int> &input)
{
    stack<int> temp;
    while(not input.empty())
    {
        int curr =input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(not temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}

void f(stack<int> &st, stack<int> &result)
{
     
    int curr = st.top();
    st.pop();
    f(st, result);
    result.push(curr); 
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
   // stack<int> res = copystack(st);
    stack<int> res;
    f(st, res);
    while(not res.empty())
    {
        int curr = res.top();
        res.pop();
        cout << curr << "\n";
    }
    return 0;
}