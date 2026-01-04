#include <bits/stdc++.h>
using namespace std;
 
// void function does not return anything
void print(){
    cout << "vedant";
}

// int function will return an output
int sum(int a,int b){
    return a + b;
}

//main function where we pass the inputs for our functions
int main() {
    print();
    int s = sum(5, 5);
    cout << s;
    return 0;
}

//containers:

//1) pairs
void explainPair(){
    pair<int, int> p = {1,3};
    
    cout << p.first << " " << p.second;
    
    pair<int, pair<int, int>> p = {1, {3,4}};
    
    cout << p.first << " " << p.second.second << " " << p.second.first;
    
    pair<int, int> arr[] = { {1,2}, {2,5}, {5,1}};
    
    cout << arr[1].second;
}

//2) Vectors : Vector is Dynamic in nature so you can increase the its size whenever you wish to ; arrays is fixed in size so we can't modify its size after declaration
void explainVector(){
    vector<int> v;
    
    v.push_back(1); //push 1 into vector
    v.emplace_back(2); //vector's size is changed and 2 is pushed into vector and it's faster than push back 
    vector<pair<int, int>>vec; //vector pair
    
    v.push_back({1, 2}); //pair
    v.emplace_back(1, 2);
    
    vector<int> v(5, 100); // vector of value 100 five time
    
    vector<int> v(5); //vector with five zero or garbage values;
    
    vector<int> v1(5, 20); //vector of 20 five times: {20, 20, 20, 20, 20}
    vector<int> v2(v1); // copy of vector v1
    
    
    //Iterators in vector
    vector<int>::iterator it = v.begin(); //v.begin() points to memory address location not element address and to access the element we have to put * (star) let's say vector is {10,20,30,40}
   it++;
   cout << *(it) << " "; //it will print every element in vector one by one
   
   it = it + 2;
   cout << *(it) << " ";
   
   //another iterators 
   vector<int>::iterators it = v.end(); //end: end points to a memory location which is right after memory location ex; {10,20,30,40} so end will point to memory locaiton which is next to 40 ; it will point to 40 when we do i--
   
   vector<int>::iterators it = v.rend(); // reverse end
   vector<int>::iterators it = v.rbegin(); //reverse begin
   
   cout << v[0] << " " << v.at(0);
   cout << v.back() << " "; //{10,20,30} v.back() point to elements which is 30
   
   for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
       cout << *(it) << " "; //it will print entire vector with * star one by one till it reached last guy
   }
   
   for (auto it = v.begin(); it != v.end(); it++){
       cout << *(it) << " "; //auto iterator does not have to define datatype it can detect automatically
   }
   
   for (auto it : v) {
       cout << it << " "; // iterate on datatype
   }
   
   //Erase in vector
   //{10, 20, 12, 23}
   v.erase(v.begin() + 1); // {10, 12, 23}
   
   //{10, 20, 12, 23, 35}
   v.erase(v.begin() + 2, v.begin() + 4) // {10, 20, 35} start, end
   
   //Insert functions : in Vector insert function takes a lot time complexity
   vector<int>v(2, 100); //{100, 100}
   v.insert(v.begin(), 300); //{300, 100, 100}
   v.insert(v.begin() + 1, 2, 10) //{300, 10, 10, 100, 100}
   
   //size
   // {10, 20}
   cout << v.size(); //2
   
   //{10, 20}
   v.pop_back(); //10 ; last element was removed from vector
   
   //v1 -> {10, 20}
   //v2 -> {30, 40}
   v1.swap(v2); //v1 -> {30, 40} , v2 -> {10, 20}
   
   v.clear(); //erases the entire vector
   
   cout << v.empty(); // return true if vector is empty or false if it has element
}

//List : List as same as vector but list gives us front operations as well 
void explainList() {
    list<int> ls;
    
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}
    
    ls.push_front(5); // {5, 2, 4}
    
    ls.emplace_front(); // {2, 4}
    // rest functions same as vector
}

void explainDeque() {
    
    deque<int> dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}
    
    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}
    //rest functions same as vector
}

//Stack : LIFO = Last In First Out, Indexing is not allowed in Stack; Push, Pop & Top are (o)1 linear time operations in stack   
void explainStack() {
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}
    
    cout << st.top(); // prints 5
    
    st.pop(); // {3, 3, 2, 1}
    
    cout << st.top(); // 3
    
    cout << st.size(); // 4
    
    cout << st.empty(); // It will return false cause stack is not empty
    
    stack<int>st1, st2;
    st1.swap(st2);
}

//Queue : FIFO = First In, First Out
void explainQueue() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}
    
    q.back() += 5 // {1, 2, 9}
    
    cout << q.front(); // Q prints 1 {1, 2, 9}
    
    q.pop(); // {2, 9}
    
    cout << q.front(); // prints 2
}

//Priority Queue : Push, Pop happens in log(n) time complexity while top takes (o) 1 time.

// MaxHeap
void explainPQ() {
    priority_queue<int>pq;
    
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}
    
    cout << pq.top(); // prints 10
    
    pq.pop(); // {8, 5, 2}
    
    cout << pq.top(); // prints 8
    
//MinHeap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}
    
    cout << pq.top(); // prints 2
}

//Set : Set stores only unique elements in sorted order; In set everything happens in logarithmic time complexity 
void explainSet(){
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    
    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // it will returns an iterator which points to the 3 ;
    
    // {1, 2, 3, 4, 5}
    auto it = st.find(6); // we dont have that element it will return st.end()
    
    // {1, 4, 5}
    st.erase(5); //erases 5 takes logarithmic time
    
    int cnt = st.count(1);
    
    auto it = st.find(3);
    st.erase(it); // it takes constant time
    
    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    autp it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last]
}

//MultiSet: It sorts the elements and it also stores duplicate elements
void explainMultiSet() {
    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    
    ms.erase(1); // all 1's erased 
    
    int cnt = ms.count(1);
    
    //only a single one erased
    ms.erase(ms.find(1));
    
    //{1, 1, 1}
    ms.erase(ms.find(1), ms.find(1) + 2); // {1}
}

//unordered_set: It stores only unique element and stored them in unsorted - randomized order
void explainSet() {
    unordered_set<int> st;
    //works in (o)1 time complexity in worst case for all operations
}

//Map : 1) map stores everything in respect of key-value pair and key stays unique and it can be of any datatype 2) map stores unique keys in sorted order
void explainMap() {
    
    map<int, int> mpp;
    
    map<int, pair<int, int>> mpp;
    
    map<pair<int, int>, int> mpp;
    
    mpp[1] = 2; // key is 1 and value is 2
    mpp.emplace({3, 1}); // key is 3 and value 1
    mpp.insert({2, 4}); // key is 2 and value is 4
    
    mpp[{2, 3}] = 10; // key is {2, 3} and value is 10
    
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }
    
    //[{1,2},{3,4},{5,6}]
    auto it = mpp.find(3);
    cout << *(it).second; // it will return 6
    
    auto it = mpp.find(5); // it will return mp.end() cause we dont have that element
}

//MultiMap: it can store multiple keys and its in sorted order 
void explainMultimap(){
    
}

//UnorderedMap: it will not store in sorted order as well as it will only have unique keys. It works in (o)1 constant time.
void explainUnorderedMap(){
    
}

 
