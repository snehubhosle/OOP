#include <iostream>
#include <string>
using namespace std;
int max,i,ele;
class Queue {
    int front = -1, rear = -1;

public:
    int max;
    int Q[100];
    void check();
    void display();
    void dequeue();
    void enqueue();
    void peak();
}q;

void Queue::display() {
    if (front == -1) 
    {
        cout << "Queue is empty" << endl;
    } else 
    {
        cout << "Queue elements are: " << endl;
        for (int i = front; i <= rear; i++) 
        {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
}

void Queue::check() {
    if (front == -1 || rear == -1)
     {
        cout << "Queue is empty" << endl;
    }
     else  
     {
        cout << "Queue is full" << endl;
     } 
    
}

void Queue::dequeue()
 {
    if (rear == -1 || front == -1) 
    {
        cout << "Queue is underflow" << endl;
    }
     else
      {
        cout << "Dequeue element is: " << Q[front] << endl;
        front++;
    }
}

void Queue::enqueue()
 {
    if (rear == max - 1)
     {
        cout << "Queue is overflow...!!" << endl;
     } 
    else
     { 
        for(i=0;i < max; i++)
        {
        int ele;
        cout << "Enter element to enqueue: ";
        cin >> ele; 
        rear++;
        Q[rear] = ele;
        }
        front=0;
     }
}

void Queue::peak() 
{
    if (rear == -1 || front == -1)
     {
        cout << "No element found at top, Queue is empty" << endl;
    }
     else
     {
        cout << "Top element is: " << Q[front] << endl; 
    }
}

int main()
 {

  
    int ch;
    do
     {
        cout << "Enter choice: "<<endl;
        cout << "1. Check if queue is empty or not" << endl;
        cout << "2. Display Queue elements" << endl;
        cout << "3. Enqueue the elements" << endl;
        cout << "4. Dequeue the elements" << endl;
        cout << "5. Display peak value" << endl;
        cin >> ch;

        switch (ch)
         {
            case 1:
                q.check();
                break;
            case 2:
                q.display();
                break;
            case 3:
            
        cout << "Enter the size of queue: ";
        cin >> q.max;
                q.enqueue(); 
                break;
            case 4:
                q.dequeue();
                break;
            case 5:
                q.peak();
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (ch != 5); 

    return 0;
}
