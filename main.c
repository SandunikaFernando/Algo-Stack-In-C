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


int isfull(){​​​​​

    

    if(i.top==2){​​​​​

        return 1;

    }​​​​​

    else{​​​​​

        return 0;

    }​​​​​


int isempty(){​​​​​​​

    if(i.top==-1){​​​​​​​
        return 1;
    }​​​​​​​
    else{​​​​​​​
        return 0;
    }​​​​​​​
}​​​​​​​

int main(){

   // call to the functions and create a text menu
}
