#include<stdio.h>
struct Stack{

    int top,array[3];

}st;

void push(int data){​​​​​​​
    st.top++;
    st.array[st.top]=data;
}​​​​​​​

int pop(){​​​​​​​
    int data;
    data=st.array[st.top];
    st.top--;
    return data;
}​​​​​​​


int isfull(){​​​​​
   if(st.top==2){​​​​​
        return 1;
    }​​​​​
    else{​​​​​
        return 0;
    }​​​​​
}
int isempty(){​​​​​​​
    if(st.top==-1){​​​​​​​
        return 1;
    }​​​​​​​
    else{​​​​​​​
        return 0;
    }​​​​​​​
}​​​​​​​

int main(){

    st.top=-1;
    int Data,inp;
    printf("Choos a option from following.. \n");
    printf("Press Number 1 to push data : \n");
    printf("Press Number 2 to pop data : \n");
    printf("Press Number 3 to check stack is full : \n");
    printf("Press Number 4 to check stack is empty : \n");
    printf("Press Number 5 to check top value : \n");
    printf("Press Number 6 to exit from code : \n");

    inp=0;
    while (inp!=6) {​​​​​
        printf("\n");
        printf("Please enter a option : ");
        scanf("%d",&inp);
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
        else if(inp==2){​​​​​
            if(!isempty()){​​​​​
                printf("%d removed \n",pop());
            }​​​​​
            else{​​​​​
                printf("Stack is empty..! \n");
            }​​​​​
        }​​​​​
        else if(inp==3){​​​​​
            if(!isfull()){​​​​​
                printf("Stack is not full \n");
            }​​​​​
            else{​​​​​
                printf("Stack is full..! \n");
            }​​​​​
        }​​​​​
        else if(inp==4){​​​​​
            if(!isempty()){​​​​​
                printf("Stack is not empty \n");
            }​​​​​
            else{​​​​​
                printf("Stack is empty..! \n");
            }​​​​​
        }​​​​​
        else if(inp==5){​​​​​
            printf("Top value is : %d \n",st.arr[st.top]);
        }​​​​​
        else if (inp==6){​​​​​
            break;
        }​​​​​
        else{​​​​​
            printf("invalid Input..! \n");
        }​​​​​
    }​​​​​
}
