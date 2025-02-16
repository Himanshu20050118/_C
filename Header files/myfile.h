int digit_count(int);
int digit_count(int n)
{
int count=0,num=n;
while(n!=0)
{
    n=n/10;
    count++;
}
return count;
}