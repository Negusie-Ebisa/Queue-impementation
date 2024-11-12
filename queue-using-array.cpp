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
//function to remove element from queue
void dequeue ( )
{
 if( isempty() )
  cout<<"Queue is empty\n";
 else
 if( front == rear )
  front = rear = -1;
 else
  front++;
}
//function to display element at front
void showfront( )
{
 if( isempty())
  cout<<"Queue is empty\n";
 else
  cout<<"element at front is:"<<A[front]<<"\n";
}
//function to display elements of the queue
void displayQueue()
{
 if(isempty())
  cout<<"Queue is empty\n";
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<A[i]<<" ";
  cout<<"\n";
 }
} 
int main()
{
//inserting elements in queue
 cout<<"Inserting elements in queue\n";
 enqueue(2);
 displayQueue();
 enqueue(3);
 displayQueue();
 enqueue(5);
 displayQueue();
 enqueue(7);
 displayQueue();
 enqueue(8);
displayQueue();
 //queue is full
 enqueue(9);
 //show element at front
 showfront();
 Codewhoop
Data Structures
View All
String
Array
Linked List
Sorting
Stack
Queue
Searching
Trees
Operators
Numbers
Web Development
View All
JavaScript
Tools
Python
Vue JS
Nginx
MongoDB
React JS
#Queue using array

Queue is a linear data structure which follows FIFO i.e. First-In-First-Out method.

The two ends of a queue are called Front and Rear.

Initially when the queue is empty both front and rear are equal to -1.

Insertion takes place at the Rear and the elements are accessed or removed from the Front.

Applications of queues in computer world :

Scheduling : CPU Scheduling , Job Scheduling.
Buffers : I/O Buffers.
Operations

enqueue() : Insertion of new element in queue.
dequeue() : Removal of element at front from queue.
showfront() : To show the element at front.
isempty() : To check if queue is empty.
Suppose we have this queue of size 5.


And we have to insert the element 8 in the queue, so we will increment rear by one and insert 8 at rear.

While inserting (enqueue) we have to consider two special cases:

Queue is empty - then initially front and rear will be -1 so we will increment rear and insert the element at rear and we will make front = 0 i.e. both front and rear will point to the first element.
Queue is full - then we cannot insert any more elements in the queue.
Similarly if we have to remove the first element from the queue, then we will simply increment front by one.


While removing (dequeue) elements from the queue we also have two special cases:

Queue is empty - in that case front and rear both will be equal to -1 and as there are no elements in the queue we cannot perform dequeue operation.
Queue has only one element - in that case front will be equal to rear and we will make both equal to -1.
#Source Code - C++
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
//function to remove element from queue
void dequeue ( )
{
 if( isempty() )
  cout<<"Queue is empty\n";
 else
 if( front == rear )
  front = rear = -1;
 else
  front++;
}
//function to display element at front
void showfront( )
{
 if( isempty())
  cout<<"Queue is empty\n";
 else
  cout<<"element at front is:"<<A[front]<<"\n";
}
//function to display elements of the queue
void displayQueue()
{
 if(isempty())
  cout<<"Queue is empty\n";
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<A[i]<<" ";
  cout<<"\n";
 }
}

int main()
{
 //inserting elements in queue
 cout<<"Inserting elements in queue\n";
 enqueue(2);
 displayQueue();
 enqueue(3);
 displayQueue();
 enqueue(5);
 displayQueue();
 enqueue(7);
 displayQueue();
 enqueue(8);

 displayQueue();
 // queue is full
 enqueue(9);
 //show element at front
 showfront();
 cout<<"Removing elements from queue\n";
 //removing elements from the queue
 dequeue();
 displayQueue();
 dequeue();
 displayQueue();
 dequeue();
 displayQueue();
 dequeue();
 displayQueue();
 dequeue();

 return 0;
}
