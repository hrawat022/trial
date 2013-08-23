#include<stdio.h>
//comment
struct stack
{
    int top;
    char info[100];
};
void cal(char []);
void push(struct stack *, char);
char pop(struct stack *);
main()
{
    char in[100];
    int i;
    for(i=0;(in[i]=getchar())!='\n';i++)
    {

    }
    in[i]='\0';
    cal(in);
    return(0);
}
void cal(char in[100])
{
    int i,t=0;
    char c,k;
    struct stack s;
    s.top=-1;
    for(i=0;(c=in[i])!='\0';i++)
    {
        if(c=='(' || c=='{' || c=='[')
           push(&s,c);
        if(c==')')
        {
            k=pop(&s);
            if(k!='(')
            {
                printf("FALSE ( \n");
                t++;
                break;
            }
        }
        if(c=='}')
        {
            k=pop(&s);
            if(k!='{')
            {
                printf("FALSE { \n");
                t++;
                break;
            }
        }
        if(c==']')
        {
            k=pop(&s);
            if(k!='[')
            {
                printf("FALSE ]\n");
                t++;
                break;
            }
        }
    }
    if(t==0)
    printf("True\n");
}
void push(struct stack *ps, char c)
{
    ps->info[++(ps->top)]=c;
    return;
}
char pop(struct stack *ps)
{
    return(ps->info[(ps->top)--]);
}









