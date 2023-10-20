
int x ;
int arr[5];
int top = -1;

push(x)
{
arr[++top] = x;
}

pop()
{
top--;
}

top()
{
top();
}
size()
{
int size = top ()+1; index starts from 0
}
empty()
{
return (top()==-1);
}
