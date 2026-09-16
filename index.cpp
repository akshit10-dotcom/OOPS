#include<bits/stdc++.h>
using namespace std;
// void Data(int &x){
//     x=50;
//     cout<<x<<endl;
// }
// int main(){
//     int m=100;
//     Data(m);
//     cout<<m;
// }
// inline void add(int a,int b){
//     int c=a+b;
//     cout<<c;
// }
// int main(){
//     int a=10;
//     int b=20;
//     add(a,b);
// }
// void Data(string name="Student"){
//     cout<<name<<endl;
// }
// int main(){
//     Data();
//     Data("Akshit");
// }
// template <typename T>
// class Queue {
// private:
//     struct Node {
//         T data;
//         Node* next;
//         Node(const T& v) : data(v), next(nullptr) {}
//     };
//     Node* head;
//     Node* tail;
// public:
//     Queue() : head(nullptr), tail(nullptr) {}
//     ~Queue() {
//         while (!isEmpty()) dequeue();
//     }
//     void enqueue(const T& value) {
//         Node* n = new Node(value);
//         if (tail) {
//             tail->next = n;
//             tail = n;
//         } else {
//             head = tail = n;
//         }
//     }
//     void push(const T& value) {
//         enqueue(value);
//     }
//     T dequeue() {
//         if (isEmpty()) throw std::out_of_range("dequeue from empty queue");
//         Node* tmp = head;
//         T val = tmp->data;
//         head = head->next;
//         if (!head) tail = nullptr;
//         delete tmp;
//         return val;
//     }
//     T pop() {
//         return dequeue();
//     }
//     const T& front() const {
//         if (isEmpty()) throw std::out_of_range("front on empty queue");
//         return head->data;
//     }
//     bool isEmpty() const {
//         return head == nullptr;
//     }
//     void display() const {
//         Node* cur = head;
//         while (cur) {
//             std::cout << cur->data;
//             if (cur->next) std::cout << " -> ";
//             cur = cur->next;
//         }
//         std::cout << '\n';
//     }
// };
// int main() {
//     Queue<int> q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     std::cout << "After enqueue 10,20,30: ";
//     q.display();
//     std::cout << "front(): " << q.front() << '\n';
//     std::cout << "dequeue(): " << q.dequeue() << '\n';
//     std::cout << "After dequeue: ";
//     q.display();
//     q.push(40);
//     q.push(50);
//     std::cout << "After push 40,50: ";
//     q.display();
//     std::cout << "pop(): " << q.pop() << '\n';
//     std::cout << "Final queue: ";
//     q.display();
//     while (!q.isEmpty()) {
//         std::cout << "dequeue: " << q.dequeue() << '\n';
//     } 
//     try {
//         q.front();
//     } catch (const std::exception& e) {
//         std::cout << "Exception calling front on empty queue: " << e.what() << '\n';
//     }

//     return 0;
// }
// class CircularQueue {
// private:
//     int *arr;
//     int capacity; 
//     int front;      
//     int rear;      
//     int count;      

// public:
//     explicit CircularQueue(int size) : capacity(size), front(0), rear(-1), count(0) {
//         if (size <= 0) throw invalid_argument("Queue size must be > 0");
//         arr = new int[capacity];
//     }
//     ~CircularQueue() {
//         delete[] arr;
//     }
//     bool isEmpty() const {
//         return count == 0;
//     }
//     bool isFull() const {
//         return count == capacity;
//     }
//     bool enqueue(int value) {
//         if (isFull()) return false;
//         rear = (rear + 1) % capacity;
//         arr[rear] = value;
//         ++count;
//         return true;
//     }
//     bool dequeue(int &out) {
//         if (isEmpty()) return false;
//         out = arr[front];
//         front = (front + 1) % capacity;
//         --count;
//         return true;
//     }
//     int peek() const {
//         if (isEmpty()) throw runtime_error("Queue is empty");
//         return arr[front];
//     }
//     int size() const {
//         return count;
//     }
//     int maxCapacity() const {
//         return capacity;
//     }
//     void print() const {
//         if (isEmpty()) {
//             cout << "Queue is empty\n";
//             return;
//         }
//         cout << "Queue contents: ";
//         for (int i = 0, idx = front; i < count; ++i, idx = (idx + 1) % capacity) {
//             cout << arr[idx] << (i + 1 == count ? '\n' : ' ');
//         }
//     }
// };
// int main() {
//     try {
//         CircularQueue q(5); // capacity 5
//         cout << "Enqueueing 1..5\n";
//         for (int i = 1; i <= 5; ++i) {
//             if (!q.enqueue(i)) {
//                 cout << "Failed to enqueue " << i << " (queue full)\n";
//             }
//         }
//         q.print();
//         cout << "Attempt enqueue 6 (should fail): ";
//         if (!q.enqueue(6)) cout << "Queue is full\n";

//         cout << "Dequeue two items:\n";
//         int val;
//         for (int i = 0; i < 2; ++i) {
//             if (q.dequeue(val)) cout << "Dequeued: " << val << '\n';
//         }
//         q.print();
//         cout << "Enqueue 6 and 7 to test wrap-around\n";
//         q.enqueue(6);
//         q.enqueue(7);
//         q.print();
//         cout << "Dequeue all items:\n";
//         while (!q.isEmpty()) {
//             q.dequeue(val);
//             cout << val << ' ';
//         }
//         cout << '\n';
//         cout << "Attempt dequeue from empty queue: ";
//         if (!q.dequeue(val)) cout << "Queue is empty\n";
//     } catch (const exception &ex) {
//         cerr << "Error: " << ex.what() << '\n';
//         return 1;
//     }
//     return 0;
// }
// class CircularQueue {
// private:
//     struct Node {
//         int data;
//         Node* next;
//         Node(int val) : data(val), next(nullptr) {}
//     };

//     Node* tail; 
//     size_t count;
// public:
//     CircularQueue() : tail(nullptr), count(0) {}
//     ~CircularQueue() { clear(); }
//     void enqueue(int value) {
//         Node* node = new Node(value);
//         if (!tail) {
//             tail = node;
//             tail->next = tail;
//         } else {
//             node->next = tail->next; 
//             tail->next = node;
//             tail = node;           
//         }
//         ++count;
//     }
//     int dequeue() {
//         if (!tail) throw underflow_error("Queue is empty");
//         Node* head = tail->next;
//         int value = head->data;
//         if (head == tail) {
//             delete head;
//             tail = nullptr;
//         } else {
//             tail->next = head->next;
//             delete head;
//         }
//         --count;
//         return value;
//     }
//     int front() const {
//         if (!tail) throw std::underflow_error("Queue is empty");
//         return tail->next->data;
//     }
//     bool isEmpty() const { return tail == nullptr; }
//     size_t size() const { return count; }
//     void display() const {
//         if (!tail) {
//             cout << "Queue is empty\n";
//             return;
//         }
//         Node* cur = tail->next;
//         do {
//             cout << cur->data << ' ';
//             cur = cur->next;
//         } while (cur != tail->next);
//         cout << '\n';
//     }
//     void clear() {
//         if (!tail) return;
//         Node* cur = tail->next; 
//         tail->next = nullptr;   
//         while (cur) {
//             Node* nxt = cur->next;
//             delete cur;
//             cur = nxt;
//         }
//         tail = nullptr;
//         count = 0;
//     }
// };
// int main() {
//     CircularQueue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     cout << "Queue after enqueues: ";
//     q.display(); 
//     cout << "Front element: " << q.front() << '\n'; // 10
//     int d = q.dequeue();
//     cout << "Dequeued: " << d << '\n'; // 10
//     cout << "Queue now: ";
//     q.display(); 
//     q.enqueue(40);
//     cout << "After enqueue 40: ";
//     q.display(); 
//     while (!q.isEmpty()) {
//         cout << "Popped " << q.dequeue() << '\n';
//     }
//     cout << "Final queue size: " << q.size() << '\n';
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Stack {
//     int *arr;
//     int top;
//     int size;
// public:
//     Stack(int n) {
//         size = n;
//         arr = new int[size];
//         top = -1;
//     }
//     bool isEmpty() {
//         return top == -1;
//     }
//     bool isFull() {
//         return top == size - 1;
//     }
//     void push(int val) {
//         if (isFull()) {
//             cout << "Overflow!" << endl;
//         } else {
//             arr[++top] = val;
//             cout << "Value pushed successfully." << endl;
//         }
//     }
//     int pop() {
//         if (isEmpty()) {
//             cout << "Underflow!" << endl;
//             return -1;
//         }
//         return arr[top--];
//     }
//     int peek() {
//         if (isEmpty()) {
//             cout << "Stack is empty!" << endl;
//             return -1;
//         }
//         return arr[top];
//     }
//     void display() {
//         if (isEmpty()) {
//             cout << "Stack is empty!" << endl;
//             return;
//         }
//         cout << "Stack elements are:\n";
//         for (int i = top; i >= 0; i--) {
//             cout << arr[i] << endl;
//         }
//     }
// };
// int main() {
//     int n;
//     cout << "Enter size of stack: ";
//     cin >> n;
//     Stack stack(n);
//     int option;
//     do {
//         cout << "\n===== STACK MENU =====\n";
//         cout << "1. Push\n";
//         cout << "2. Pop\n";
//         cout << "3. Peek\n";
//         cout << "4. Display\n";
//         cout << "5. Exit\n";
//         cout << "Enter option: ";
//         cin >> option;
//         switch (option) {
//         case 1: {
//             int val;
//             cout << "Enter value: ";
//             cin >> val;
//             stack.push(val);
//             break;
//         }
//         case 2: {
//             int val = stack.pop();
//             if (val != -1)
//                 cout << "Popped value: " << val << endl;
//             break;
//         }
//         case 3: {
//             int val = stack.peek();
//             if (val != -1)
//                 cout << "Top element: " << val << endl;
//             break;
//         }
//         case 4:
//             stack.display();
//             break;
//         case 5:
//             cout << "Exiting..." << endl;
//             break;
//         default:
//             cout << "Invalid option!" << endl;
//         }
//     } while (option != 5);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// class Stack{
//     Node *top;
//     public:
//     Stack(){ 
//         top = NULL;
//     }
//     bool isempty(){
//         return top == NULL;
//     }
//     void push(int x){
//         Node *newNode = new Node(x);
//         newNode -> next = top;
//         top = newNode;
//         cout << "Value pushed is " << x << endl;
//     }
//     void pop(){
//         if(isempty()){
//             cout << "Stack is empty " << endl;
//             return;
//         }
//         Node *temp = top;
//         cout << "Popped value is " << temp -> data << endl;
//         top = top -> next;
//         delete temp;
//     }
//     void peek(){
//         if(isempty()){
//             cout << "Stack is empty " << endl;
//             return;
//         }
//         cout << top -> data;
//     }
//     void display(){
//         if (isempty()){
//             cout << "Stack is empty " << endl;
//             return;
//         }
//         Node *temp = top;
//         while(temp != NULL){
//             cout << temp -> data << " " << endl;
//             temp = temp -> next;
//         }
//         cout << endl;
//     }
// };
// int main(){
//     Stack s;
//     int choice , val;
//     do{
//         cout << "\n===== STACK MENU =====\n";
//         cout << "1. Push\n";
//         cout << "2. Pop\n";
//         cout << "3. Peek\n";
//         cout << "4. Display\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice ";
//         cin >> choice;
//         switch(choice){
//             case 1:
//             cout << "Enter the value to be printed ";
//             cin >> val;
//             s.push(val);
//             break;
//             case 2:
//             s.pop();
//             break;
//             case 3:
//             s.peek();
//             break;
//             case 4:
//             s.display();
//             break;
//             case 5:
//             cout << "Exiting the program ";
//         }
//     }while(choice != 5);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int precedence(char c){
//     if(c == '^'){
//         return 3;
//     }
//     else if(c == '*' || c == '/' || c == '%'){
//         return 2;
//     }
//     else if(c == '+' || c == '-'){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// bool isrightas(char c){
//     return c == '^';
// }
// string intopost(string s){
//     stack<char> st;
//     string ans = "";

//     for(char c : s){
//         if(isalnum(c)){
//             ans += c;
//         }
//         else if(c == '('){
//             st.push(c);
//         }
//         else if(c == ')'){
//             while(!st.empty() && st.top() != '('){
//                 ans += st.top();
//                 st.pop();
//             }
//             if(!st.empty())
//                 st.pop();
//         }
//         else{
//             while(!st.empty() &&
//                   ((precedence(st.top()) > precedence(c)) ||
//                   (precedence(st.top()) == precedence(c) && !isrightas(c))))
//             {
//                 ans += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }

//     while(!st.empty()){
//         ans += st.top();
//         st.pop();
//     }

//     return ans;
// }
// int main() {
//     string infix, postfix;

//     cout << "Enter infix expression: ";
//     cin >> infix;
//     postfix = intopost(infix);
//     cout << "Postfix expression: " << postfix << endl;

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int precedence(char c){
//     if(c == '^')
//         return 3;
//     else if(c == '*' || c == '/' || c == '%')
//         return 2;
//     else if(c == '+' || c == '-')
//         return 1;
//     else
//         return -1;
// }

// bool isrightas(char c){
//     return c == '^';
// }

// string intopre(string s){
//     stack<char> st;
//     string ans = "";

//     for(char c : s){
//         if(isalnum(c)){
//             ans += c;
//         }
//         else if(c == ')'){
//             st.push(c);
//         }
//         else if(c == '('){
//             while(!st.empty() && st.top() != ')'){
//                 ans += st.top();
//                 st.pop();
//             }
//             if(!st.empty())
//                 st.pop();
//         }
//         else{
//             while(!st.empty() &&
//                   ((precedence(st.top()) > precedence(c)) ||
//                   (precedence(st.top()) == precedence(c) && isrightas(c))))
//             {
//                 ans += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }

//     while(!st.empty()){
//         ans += st.top();
//         st.pop();
//     }

//     return ans;
// }
// int main(){
//     string infix, prefix;

//     cout << "Enter infix expression: ";
//     cin >> infix;
//     reverse(infix.begin(), infix.end());
//     prefix = intopre(infix);
//     reverse(prefix.begin(),prefix.end());
//     cout << "Prefix expression: " << prefix << endl;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int evaluate(string postfix){
//     stack <int> s;
//     for(char c : postfix){
//         if(isdigit(c)){
//             s.push(c - '0');
//         }
//         else{
//             int op1, op2;
//             op2 = s.top();
//             s.pop();
//             op1 = s.top();
//             s.pop();
//             int result;
//             switch(c){
//                 case '+':
//                 result = op1 + op2;
//                 break;
//                 case '-':
//                 result = op1 - op2;
//                 break;
//                 case '*':
//                 result = op1 * op2;
//                 break;
//                 case '/':
//                 result = op1 / op2;
//                 break;
//                 case '%':
//                 result = op1 % op2;
//                 break;
//                 case '^':
//                 result = pow(op1,op2);
//                 break;
//             }
//             s.push(result);
//         }
//     }
//     return s.top();
// }
// int main(){
//     string postfix;
//     cout << "Enter the postfix expression : ";
//     cin >> postfix;
//     cout << evaluate(postfix);
//     return 0;
// }
#include<iostream>
using namespace std;
// class student{
//     public:
//     string name;
//     int Rollno;
//     void input(string name,int Rollno){
//         this->name=name;
//         this->Rollno=Rollno;
//     }
//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Rollno : "<<Rollno<<endl;
//     }
//     void displayGrade(int grade){
//         if(grade>=65){
//             cout<<"1st Division"<<endl;
//         }
//         else if(grade>=45 && grade<65){
//             cout<<"2nd Division"<<endl;
//         }
//         else{
//             cout<<"Fail"<<endl;
//         }
//     }
// };
// int main(){
//     student s;
//     s.input("Akshit",23);
//     s.display();
//     s.displayGrade(78);
//     student s1;
//     s1.input("Ash",34);
//     s1.display();
//     s1.displayGrade(56);
// }
// void value(int n){
//     n=50;
// }
// void reference(int &n){
//     n=50;
// }
// int main(){
//     int m=100;
//     value(m);
//     cout<<"Call by value "<<m<<endl;
//     reference(m);
//     cout<<"Call by reference "<<m<<endl;
//     return 0;
// }
// inline int add(int a,int b){
//     return a+b;
// }
// string name(string name="student"){
//     return name;
// }
// int add(int a){
//     return a*2;
// }
// double add(double a){
//     return a*3;
// }
// int main(){
//     int d=10;
//     int e=20;
//     cout<<"Inline add funtion "<<add(d,e)<<endl;
//     cout<<"Default value "<<name()<<endl;
//     cout<<"Passed value "<<name("Vikas Sir")<<endl;
//     int a=10;
//     double b=10.1;
//     cout<<"Function overloading "<<add(a)<<endl;
//     cout<<"Function overloading "<<add(b)<<endl;
// }


//wap using c++ features using auto and based for loop to traverse and display elements and collection
// wap to store attendance of 6 students in a vector<int> collection use range based for loop with auto to display all the attendance percentage and count how many students have attendance more than 75
// int main(){
//     vector<int> attendance={80,70,90,60,85,75};
//     int count=0;
//     for(int value: attendance){
//         cout<<"Attendance: "<<value<<"%"<<endl;
//         if(value>=75){
//             count++;
//         }
//     }
//     cout<<"Number of students with attendance more than 75%: "<< count << endl;
// }
// wap to store monthly salary of employees in a vector<double> collection use range based for loop with auto to display the following:
// display all employees salary
// calculate the total salary of emp
// find the highest salary emp
// count how many emp havee a salary > 50000
// calculate the avg salary
// int main(){
//     vector<double> salary={45000.50, 55000.75, 60000.00, 48000.25, 52000.80, 70000.90};
//     double totalSalary=0;
//     int count=0;
//     double highestSalary=0;
//     for(auto s:salary){
//         cout<<"Employee Salary: "<<s<<endl;
//         totalSalary+=s;
//     }
//     for(auto s:salary){
//         if(s>50000){
//             count++;
//         }
//     }
//     for(auto s: salary){
//         if(s>highestSalary){
//             highestSalary=s;
//         }
//     }
//     cout<<"The total salary of employees is: "<<totalSalary<<endl;
//     cout<<"The highest salary of employee is: "<<highestSalary<<endl;
//     cout<<"Number of employees with salary greater than 50000: "<<count<<endl;
//     double avgSalary=totalSalary/salary.size();
//     cout<<"Average salary of employees is: "<<avgSalary<<endl;
// }
// design a class to represent a bank account with proper data hiding and the members function for deposit,withdrawl,show balance
// class BankAccount{
//     private:
//     string accountHolderName;
//     int accountNumber;
//     double balance;
//     public:
//     BankAccount(string name,int accNo,double bal){
//         accountHolderName=name;
//         accountNumber=accNo;
//         balance=bal;
//     }
//     void deposit(double amount){
//         if(amount>0){
//             balance+=amount;
//             cout<<"Deposited: "<<amount<<endl;
//         }
//         else{
//             cout<<"Invalid deposit amount"<<endl;
//         }
//     }
//     void withdraw(double amount){
//         if(amount>0 && amount<=balance){
//             balance-=amount;
//             cout<<"Withdrawn: "<<amount<<endl;
//         }
//         else{
//             cout<<"Invalid withdrawal amount or insufficient balance"<<endl;
//         }
//     }
//     void showBalance(){
//         cout<<"Account Holder: "<<accountHolderName<<endl;
//         cout<<"Account Number: "<<accountNumber<<endl;
//         cout<<"Current Balance: "<<balance<<endl;
//     }
// };
// int main(){
//     BankAccount account("John Doe", 123456, 1000.0);
//     account.showBalance();
//     account.deposit(500.0);
//     account.showBalance();
//     account.withdraw(200.0);
//     account.showBalance();
//     account.withdraw(2000.0); // Invalid withdrawal
//     return 0;
// }
// Banker's Algorithm - Simple Version
// Just checks if the current state is SAFE or UNSAFE
// int main() {
//     int processes = 5;   
//     int resources = 3;   
//     int available[3] = {3, 3, 2};
//     int maxDemand[5][3] = {{7, 5, 3},{3, 2, 2},{9, 0, 2},{2, 2, 2},{4, 3, 3}};
//     int allocation[5][3] = {{0, 1, 0},{2, 0, 0},{3, 0, 2},{2, 1, 1},{0, 0, 2}};
//     int need[5][3];
//     for(int i = 0;i<processes;i++){
//         for(int j = 0;j<resources;j++) {
//             need[i][j] = maxDemand[i][j] - allocation[i][j];
//         }
//     }
//     bool finish[5] = {false, false, false, false, false};
//     int work[3];
//     for (int j = 0; j < resources; j++)
//         work[j] = available[j];
//     int safeSequence[5];
//     int count = 0;
//     while (count < processes) {
//         bool found = false;
//         for (int i = 0; i < processes; i++) {
//             if (finish[i]) continue;
//             bool canRun = true;
//             for (int j = 0; j < resources; j++) {
//                 if (need[i][j] > work[j]) {
//                     canRun = false;
//                     break;
//                 }
//             }
//             if(canRun){
//                 for(int j=0;j<resources;j++)
//                     work[j]+=allocation[i][j];
//                 safeSequence[count]=i;
//                 count++;
//                 finish[i]=true;
//                 found=true;
//             }
//         }
//         if (!found) break;
//     }
//     if(count==processes){
//         cout << "System is in a SAFE state.\n";
//         cout << "Safe sequence: ";
//         for(int i = 0; i < processes; i++){
//             cout<<"P"<<safeSequence[i];
//             if (i < processes-1) 
//             cout<<"->";
            
//         }
//         cout << "\n";
//     } 
//     else{
//         cout<<"System is NOT in a safe state (deadlock possible).\n";
//     }
//     return 0;
// }
// class BankAccount{
//     private:
//         int A1=101;
//         int B1=45000;
//         int A2=102;
//         int B2=62000;
//     friend void compare(BankAccount b);
// };
// void compare(BankAccount b){
//     if(b.B1>b.B2){
//         cout<<"A1 "<<b.A1<<" has the higher balance."<<endl;
//     }
//     else{
//         cout<<"A2 "<<b.A2<<" has the higher balance."<<endl;
//     }
// }
// int main(){
//     BankAccount s1;
//     compare(s1);
// }
// class student{
//     private:
//         int roll=101;
//         int marks=72;
//     friend class teacher;
// };
// class teacher{
//     void checkResult(){
//         if(s.marks>=40){
//             cout<<"Student "<<s.marks<<": Pass"
//         }
//     }
// }
//Priority queue
// class Node {
// public:
//     int data;
//     int priority;
//     Node* next;
//     Node(int d, int p) {
//         data = d;
//         priority = p;
//         next = nullptr;
//     }
// };
// class PriorityQueue {
// private:
//     Node* front;
// public:
//     PriorityQueue() {
//         front = NULL;
//     }
//     void push(int data, int priority) {
//         Node* newNode = new Node(data, priority);
//         if (front == NULL || priority > front->priority) {
//             newNode->next = front;
//             front = newNode;
//         }
//         else {
//             Node* temp = front;
//             while (temp->next != NULL &&
//                    temp->next->priority >= priority) {
//                 temp = temp->next;
//             }
//             newNode->next = temp->next;
//             temp->next = newNode;
//         }
//     }
//     void pop() {
//         if (front == NULL) {
//             cout << "Priority Queue is empty!" << endl;
//             return;
//         }
//         Node* temp = front;
//         cout << "Deleted element: " << temp->data << endl;
//         front = front->next;
//         delete temp;
//     }
//     void display() {
//         if (front == NULL) {
//             cout << "Priority Queue is empty!" << endl;
//             return;
//         }
//         Node* temp = front;
//         cout << "Element\tPriority" << endl;
//         while (temp != NULL) {
//             cout << temp->data << "\t" << temp->priority << endl;
//             temp = temp->next;
//         }
//     }
//     void peek() {
//         if (front == NULL) {
//             cout << "Priority Queue is empty!" << endl;
//         }
//         else {
//             cout << "Highest Priority Element: "
//                  << front->data << endl;
//         }
//     }
// };
// int main() {
//     PriorityQueue pq;
//     pq.push(10, 2);
//     pq.push(20, 5);
//     pq.push(30, 1);
//     pq.push(40, 4);
//     cout << "Priority Queue:" << endl;
//     pq.display();
//     cout << endl;
//     pq.peek();
//     cout << endl;
//     pq.pop();
//     cout << "\nAfter deletion:" << endl;
//     pq.display();
//     return 0;
// }
// class student{
//     public:
//     string name;
//     int rollno,marks;
//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Rollno : "<<rollno<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };
// int main(){
//     student s;
//     cout<<"Enter name: ";
//     cin>>s.name;
//     cout<<"Enter roll no: ";
//     cin>>s.rollno;
//     cout<<"Enter marks: ";
//     cin>>s.marks;
//     s.display();
// }
// class emp{
//     private:
//     int id,salary;
//     string name;
//     public:
//     void input(string name,int id,int salary);
//     void display();
// };
// void emp::input(string name,int id,int salary){
//     this->name=name;
//     this->id=id;
//     this->salary=salary;
// }
// void emp::display(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"Id : "<<id<<endl;
//     cout<<"Salary : "<<salary<<endl;
// }
// int main(){
//     emp e;
//     e.input("Akshit",101,90000);
//     e.display();
//     return 0;
// }
// void callv(int a,int b){
//     int c=a;
//     a=b;
//     b=c;
//     cout<<a<<" and "<<b;
// }
// void callr(int& a,int& b){
//     int c=a;
//     a=b;
//     b=c;
//     cout<<a<<" and "<<b;
// }
// int main(){
//     cout<<"Call by value: ";
//     callv(10,20);
//     cout<<endl;
//     cout<<"Call by reference: ";
//     int a=10;
//     int b=30;
//     callr(a,b);
// }
// class student{
//     public:
//     int age;
//     student(int age){
//         this->age=age;
//     }
//     void display(){
//         cout<<"Age: "<<student::age<<endl;
//     }
// };
// int main(){
//     student s(20);
//     s.display();
//     return 0;
// }
// class student{
//     string name;
//     int marks;
//     public:
//     student(){
//         cout<<"Default constructor called"<<endl;
//     }
//     student(string name,int marks){
//         this->name=name;
//         this->marks=marks;
//     }
//     student(student &s){
//         name=s.name;
//         marks=s.marks;
//     }
//     void show(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Marks: "<<marks<<endl;
//     }
// };
// int main(){
//     student s;
//     student s1("Akshit",90);
//     student s2=s1;
//     s1.show();
//     s2.show();
// }
// void towerofhanoi(char source,char aux,char dest,int n){
//     if(n==1){
//         cout<<"Move disk from "<<source<<" to "<<dest<<endl;
//     }
//     else{
//         towerofhanoi(source,dest,aux,n-1);
//         cout<<"Move disk from "<<source<<" to "<<dest<<endl;
//         towerofhanoi(aux,source,dest,n-1);
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number of disks: ";
//     cin>>n;
//     towerofhanoi('A','B','C',n);
//     return 0;
// }
// You have small bars of 1 kilogram of chocolate and big bars of 5 kilograms of chocolate. You must build a package weighing exactly goal kilograms, using the big bars first.

// If it is possible, print the number of small bars used. If it is not possible, print -1.

// Input Format

// A single line containing three space-separated integers small big goal.

// Constraints

// 0 <= small, big <= 10^6
// 0 <= goal <= 10^9
// Output Format

// A single line containing the number of small bars used, or -1 if the goal cannot be reached.
// int main(){
//     int small, big, goal;
//     cin >> small >> big >> goal;
//     int maxBigBars = goal / 5;
//     if (maxBigBars > big) {
//         maxBigBars = big;
//     }
//     int remainingWeight = goal - (maxBigBars * 5);
//     if (remainingWeight <= small) {
//         cout << remainingWeight << endl;
//     } else {
//         cout << -1 << endl;
//     }
//     return 0;
// }
// The bonus paid by a company is Bonus = Salary * 5 / 100. A company pays this bonus only to employees whose years of service are strictly greater than 5. All other employees get a bonus of 0.

// You are given the employee's Salary (a real number) and the employee's years of service Years (an integer) on a single line, separated by a space. Print the bonus with exactly two digits after the decimal point.

// Input Format

// A single line containing a real number Salary and an integer Years, separated by one space.

// Constraints

// 0 <= Salary <= 10^7
// 0 <= Years <= 60
// Output Format

// A single line containing the bonus amount with exactly two decimal places.
// int main() {
//     double salary;
//     int years;
//     cin >> salary >> years;
//     if(years > 5) {
//         double bonus = salary * 5 / 100;
//         cout << fixed << setprecision(2) << bonus << endl;
//     } else {
//         cout << fixed << setprecision(2) << 0.00 << endl;
//     }
// }
// Five integers A, B, C, D and E are given on a single line, separated by spaces. Print the value of the expression

// A + B * C - D / E
// where every operation is applied in the standard C++ operator precedence order and / is integer division that truncates toward zero.

// Input Format

// A single line containing five space-separated integers A B C D E.

// Constraints

// -1000 <= A, B, C, D <= 1000
// 1 <= E <= 1000
// Output Format

// A single line containing the value of A + B * C - D / E evaluated with C++ integer semantics.
// int main() {
//     int A, B, C, D, E;
//     cin >> A >> B >> C >> D >> E;
//     int result = A + B * C - D / E;
//     cout << result << endl;
//     return 0;
// }
// int main() {
//     int A, B, C, D, E;
//     cin >> A >> B >> C >> D >> E;
//     int result;
//     if(E == 0){
//         result = A + B * C;
//     }
//     else{
//         result = A + B * C - D / E;
//     }
//     cout << result << endl;
//     return 0;
// }
// int main() {
//     long long A, B, C, D, E;
//     cin >> A >> B >> C >> D >> E;
//     long long result;
//     if (E != 0) {
//         result = A + B * C - D / E;
//     }
//     else {
//         result = A + B * C;
//     }
//     cout<<result<<endl;
//     return 0;
// }
// void merge(int arr[], int l, int m, int r) {
//     int i=l;
//     int j=m+1;
//     int k=0;
//     int temp[r-l+1];
//     while(i<=m && j<=r){
//         if(arr[i]<= arr[j]){
//             temp[k]=arr[i];
//             k++;
//             i++;
//         }
//         else{
//             temp[k]=arr[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<=m){
//         temp[k]=arr[i];
//         k++;
//         i++;
//     }
//     while(j<=r){
//         temp[k]=arr[j];
//         k++;
//         j++;
//     }
//     for(k=0; k<=(sizeof(temp)/sizeof(temp[0])-1); k++){
//         arr[l+k]=temp[k];
//     }
// }
// void mergesort(int arr[],int l,int r) {
//     if(l<r){
//         int m=l +(r-l) / 2;
//         mergesort(arr,l,m);
//         mergesort(arr,m+1,r);
//         merge(arr,l,m,r);
//     }
// }
// int main() {
//     int arr[]={38, 27, 43, 3, 9, 82, 10};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     mergesort(arr, 0, n - 1);
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// int main() {
//     vector<int> numbers = {10, 20, 30, 40, 50};

//     cout << "Elements of the collection:" << endl;

//     for (auto x : numbers) {
//         cout << x << " ";
//     }

//     return 0;
// }
// class BankAccount {
// private:
//     double balance;
// public:
//     BankAccount(double initialBalance) {
//         balance = initialBalance;
//     }
//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//             cout << "Amount deposited: " << amount << endl;
//         }
//     }

//     void withdraw(double amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//             cout << "Amount withdrawn: " << amount << endl;
//         } else {
//             cout << "Insufficient balance!" << endl;
//         }
//     }

//     void displayBalance() {
//         cout << "Current Balance: " << balance << endl;
//     }
// };

// int main() {
//     BankAccount account(5000);

//     account.displayBalance();
//     account.deposit(2000);
//     account.withdraw(1500);
//     account.displayBalance();

//     return 0;
// }
// class Student {
// private:
//     string name;
//     int age;
// public:
//     Student() {
//         name = "Unknown";
//         age = 0;
//         cout << "Default constructor called" << endl;
//     }
//     Student(string n, int a) {
//         name = n;
//         age = a;
//         cout << "Parameterized constructor called" << endl;
//     }
//     Student(const Student &s) {
//         name = s.name;
//         age = s.age;
//         cout << "Copy constructor called" << endl;
//     }
//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
//     ~Student() {
//         cout << "Destructor called for " << name << endl;
//     }
// };

// int main() {
//     Student s1;
//     s1.display();

//     Student s2("Akshit", 20);
//     s2.display();

//     Student s3 = s2;
//     s3.display();

//     return 0;
// }
// class Student {
// private:
//     int marks;
//     static int count;
// public:
//     Student(int m) {
//         marks = m;
//         count++;
//     }
//     static void displayCount() {
//         cout << "Number of students: " << count << endl;
//     }
//     friend void displayMarks(Student s);
// };
// int Student::count = 0;
// void displayMarks(Student s) {
//     cout << "Marks: " << s.marks << endl;
// }

// int main() {
//     Student s1(85);
//     Student s2(90);
//     Student s3(78);

//     Student::displayCount();

//     displayMarks(s1);
//     displayMarks(s2);
//     displayMarks(s3);

//     return 0;
// }p
// class Number {
// private:
//     int value;
//     public:
//     Number(int v = 0) {
//         value = v;
//     }
//     Number add(Number n) {
//         Number result;
//         result.value = value + n.value;
//         return result;
//     }

//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Number n1(10);
//     Number n2(20);

//     Number n3 = n1.add(n2);

//     cout << "First number: ";
//     n1.display();

//     cout << "Second number: ";
//     n2.display();

//     cout << "Sum: ";
//     n3.display();

//     return 0;
// }
// int recursiveFactorial(int n) {
//     if (n <= 1) {
//         return 1;
//     }
//     return n * recursiveFactorial(n - 1);
// }
// int main(){
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     int result = recursiveFactorial(number);
//     cout << "Factorial of " << number << " is: " << result << endl;
//     return 0;
// }
// int recursivepower(int base,int exponent) {
//     if (exponent == 0) {
//         return 1;
//     }
//     return base*recursivepower(base,exponent - 1);
// }
// int main(){
//     int base,exponent;
//     cout<<"Enter base and exponent: ";
//     cin>>base>>exponent;
//     int result=recursivepower(base,exponent);
//     cout << base << "^" << exponent << " is: " << result << endl;
//     return 0;
// }
// int recursivefibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return recursivefibonacci(n - 1) + recursivefibonacci(n - 2);
// }
// int main(){
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     cout << "Fibonacci series up to " << n << " terms: ";
//     for (int i = 0; i < n; i++) {
//         cout << recursivefibonacci(i) << " ";
//     }
//     cout << endl;
//     return 0;
// }
// long recursivegcd(long a,long b) {
//     if (b == 0) {
//         return a;
//     }
//     return recursivegcd(b, a % b);
// }
// int main(){
//     long a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     long result=recursivegcd(a,b);
//     cout << "GCD of " << a << " and " << b << " is: " << result << endl;
//     return 0;
// }
// int partition(vector <int> &arr,int low,int high) {
//     int pivot=arr[high]; 
//     int i=low-1; 
//     for (int j=low;j<high;j++) {
//         if(arr[j]<pivot) {
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[high]);
//     return i +1;
// }
// int quicksort(vector <int> &arr,int low,int high) {
//     if(low<high){
//         int pi=partition(arr,low,high);
//         quicksort(arr,low,pi-1);
//         quicksort(arr,pi+1,high);
//     }
// }
// int main(){
//     vector<int> arr={10,7,8,9,1,5};
//     int n=arr.size();
//     quicksort(arr,0,n- 1);
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// binary search using reursion
// int recursiveBinarySearch(vector<int> &arr,int low,int high,int target) {
//     if(low>high){
//         return -1; 
//     }
//     int mid=low+(high-low)/2;
//     if(arr[mid]==target){
//         return mid; 
//     }
//     else if(arr[mid]>target){
//         return recursiveBinarySearch(arr,low,mid-1,target);
//     }
//     else{
//         return recursiveBinarySearch(arr,mid+1,high,target);
//     }
// }
// int main(){
//     vector<int> arr={2,3,4,10,40};
//     int target=10;
//     int n=arr.size();
//     int result=recursiveBinarySearch(arr,0,n-1,target);
//     if(result==-1){
//         cout<<"Element not found in the array"<<endl;
//     }
//     else{
//         cout<<"Element found at index: "<<result<<endl;
//     }
//     return 0;
// }
// Program to reverse the given number using Recursion
// int reverseNumber(int n,int rev=0) {
//     if(n==0){
//         return rev;
//     }
//     rev=rev*10+n%10;
//     return reverseNumber(n/10,rev);
// }
// int main(){
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     int reversed=reverseNumber(number);
//     cout<<"Reversed number: "<<reversed<<endl;
//     return 0;
// }
// Finding sum of the digits of the number using recursion
// int sumOfDigits(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return n % 10 + sumOfDigits(n / 10);
// }
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     int sum = sumOfDigits(number);
//     cout << "Sum of digits: " << sum << endl;
//     return 0;
// }
// To check if the given string is a palindrome using Recursion
// int isPalindrome(string str,int start,int end) {
//     if(start>=end){
//         return 1; 
//     }
//     if(str[start]!=str[end]){
//         return 0; 
//     }
//     return isPalindrome(str,start+1,end-1);
// }
// int main(){
//     string str;
//     cout<<"Enter a string: ";
//     cin>>str;
//     int n=str.length();
//     if(isPalindrome(str,0,n-1)){
//         cout<<"The string is a palindrome."<<endl;
//     }
//     else{
//         cout<<"The string is not a palindrome."<<endl;
//     }
//     return 0;
// }
// int partition(vector<int> &arr,int low,int high) {
//     int pivot=arr[high]; 
//     int i=low-1; 
//     for (int j=low;j<high;j++) {
//         if(arr[j]<pivot) {
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[high]);
//     return i +1;
// }
// int medianquicksort(vector<int> &arr,int low,int high) {
//     if(low<high){
//         int pi=partition(arr,low,high);
//         medianquicksort(arr,low,pi-1);
//         medianquicksort(arr,pi+1,high);
//     }
// }
// int main(){
//     vector<int> arr={10,7,8,9,1,5};
//     int n=arr.size();
//     medianquicksort(arr,0,n- 1);
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
int partition(vector<int> &arr,int low,int high) {
    int pivot=arr[high]; 
    int i=low-1; 
    for(int j=low;j<high;j++) {
        if(arr[j]<pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
int radomizequick_sort(vector<int> &arr,int low,int high) {
    if(low<high){
        int randomIndex=low+rand()%(high - low + 1);
        swap(arr[randomIndex],arr[high]);
        int pi=partition(arr,low,high);
        radomizequick_sort(arr,low,pi-1);
        radomizequick_sort(arr,pi+1,high);
    }
}
int main(){
    vector<int> arr={10,7,8,9,1,5};
    int n=arr.size();
    radomizequick_sort(arr,0,n- 1);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}