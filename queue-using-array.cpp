#include <iostream>
using namespace std;

#define SIZE 5
int A[SIZE];
int front = -1;
int rear = -1;
//function to check if queue is empty
bool isempty()
{
 if(front == -1 && rear == -1)
 return true;
 else
 return false;
}
//function to insert element in queue
//function to insert element in queue
void enqueue ( int value )
{
 if (rear == SIZE-1)
  cout<<"Queue is full \n";
 else
 {
  if( front == -1)
   front = 0;
  rear++;
  A[rear] = value;
 }
}

