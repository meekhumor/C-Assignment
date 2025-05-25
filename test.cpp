#include <bits/stdc++.h>
using namespace std;

vector<int> least(vector<int> v){
    stack<int> st;
    vector<int> res;
    int n = v.size();

    st.push(n-1);
    res.push_back(n+1);
    for(int i = n-2; i>=0; i--){
        while(!st.empty() && v[i] <= v[st.top()]) st.pop();
        if(!st.empty()) res.push_back(st.top()+1);
        else res.push_back(n+1);    
        st.push(i);
    }
    reverse(res.begin(), res.end());
    return res;
}
int largestRectangleArea(vector<int>& heights) {
    vector<int> nle;
    vector<int> ple;
    int n = heights.size();
    nle = least(heights);
    reverse(heights.begin(), heights.end());
    ple = least(heights);

    reverse(heights.begin(), heights.end());

    int mx = 0;
    int i = 0, j = n-1;
    while(j >= 0){
        mx = max(mx, ((nle[i]-(n+1-ple[j]))-1)* heights[i]);
        j--;
        i++;
    }
    return mx;
}

void display(vector<int> v){
    for(int i = 0; i< v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main() {
    system("cls");


    vector<int> v = {1,1};
    vector<int> nle = least(v);
    cout<<"NLE: ";
    display(nle);
    cout<<"PLE: ";
    reverse(v.begin(), v.end());
    vector<int> ple = least(v);
    display(ple);
    

    cout<<"Largest Rectangle Area: "<<largestRectangleArea(v)<<endl;
    return 0;
}