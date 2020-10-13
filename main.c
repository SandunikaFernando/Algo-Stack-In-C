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
}
int isempty(){​​​​​​​
    if(i.top==-1){​​​​​​​
        return 1;
    }​​​​​​​
    else{​​​​​​​
        return 0;
    }​​​​​​​
}​​​​​​​

int main(){

    i.top=-1;
    int Data,op;
    printf("Choos a option \n");
    printf("Press (1) to push data : \n");
    printf("Press (2) to pop data : \n");
    printf("Press (3) to check stack is full : \n");
    printf("Press (4) to check stack is empty : \n");
    printf("Press (5) to check top value : \n");
    printf("Press (6) to exit from code : \n");

    op=0;
    while (op!=6) {​​​​​
        printf("\n");
        printf("Choos option : ");
        scanf("%d",&op);
        if(op==1){​​​​​
            if(!isfull()){​​​​​
                printf("Enter a data : ");
                scanf("%d",&Data);
                push(Data);
            }​​​​​
            else{​​​​​
                printf("Stack is full..! \n");
            }​​​​​
        }​​​​​
        else if(op==2){​​​​​
            if(!isempty()){​​​​​
                printf("%d removed \n",pop());
            }​​​​​
            else{​​​​​
                printf("Stack is empty..! \n");
            }​​​​​
        }​​​​​
        else if(op==3){​​​​​
            if(!isfull()){​​​​​
                printf("Stack is not full \n");
            }​​​​​
            else{​​​​​
                printf("Stack is full..! \n");
            }​​​​​
        }​​​​​
        else if(op==4){​​​​​
            if(!isempty()){​​​​​
                printf("Stack is not empty \n");
            }​​​​​
            else{​​​​​
                printf("Stack is empty..! \n");
            }​​​​​
        }​​​​​
        else if(op==5){​​​​​
            printf("Top value is : %d \n",i.arr[i.top]);
        }​​​​​
        else if (op==6){​​​​​
            break;
        }​​​​​
        else{​​​​​
            printf("invalid operator..! \n");
        }​​​​​
    }​​​​​
}
