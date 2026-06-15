#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

int main()
{
    string exp;

    cout << "Enter Postfix Expression: ";
    cin >> exp;

    stack<int> st;

    for(char ch : exp)
    {
        if(isdigit(ch))
        {
            st.push(ch - '0');
        }
        else
        {
            int val2 = st.top();
            st.pop();

            int val1 = st.top();
            st.pop();

            switch(ch)
            {
                case '+':
                    st.push(val1 + val2);
                    break;

                case '-':
                    st.push(val1 - val2);
                    break;

                case '*':
                    st.push(val1 * val2);
                    break;

                case '/':
                    st.push(val1 / val2);
                    break;
            }
        }
    }

    cout << "Result = " << st.top();

    return 0;
}