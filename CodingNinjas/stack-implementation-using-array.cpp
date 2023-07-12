#include <bits/stdc++.h>

class Stack
{

public:
    int head;
    int size;
    int *stk;

    Stack(int capacity)
    {

        head = -1;
        size = capacity;
        stk = new int[capacity];
    }

    void push(int num)
    {
        if (head < size - 1)
            stk[++head] = num;
    }

    int pop()
    {
        if (head > -1)
        {
            int k = stk[head];
            stk[head--] = -1;
            return k;
        }
        else
            return -1;
    }

    int top()
    {
        return (-1 < head && head < size) ? stk[head] : -1;
    }

    int isEmpty()
    {
        return (head == -1) ? 1 : 0;
    }

    int isFull()
    {
        return (head == size - 1) ? 1 : 0;
    }
};