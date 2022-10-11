// PQ stores elements in descending order
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Max PQ" << endl;
    priority_queue<int> pq;
    pq.push(2); pq.push(4); pq.push(7); pq.push(11);
    cout << pq.top() << endl; // 11
    pq.pop();
    cout << pq.top() << endl; // 7

    cout << endl << "Min PQ" << endl;
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(2); pq1.push(4); pq1.push(7); pq1.push(11);
    cout << pq1.top() << endl; // 2
    pq1.pop();
    cout << pq1.top() << endl; // 4
}