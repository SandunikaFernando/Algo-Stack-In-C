#include<stdio.h>
struct Stack{

    int top,arr[3];

}i;

void push(int data){​​​​​​​

    i.top++;

    i.arr[i.top]=data;

}​​​​​​​

int pop(){​​​​​​​

    int data;

    data=i.arr[i.top];

    i.top--;

    return data;

}​​​​​​​


// is full function here

// is empty function here

int main(){

   // call to the functions and create a text menu
}
