void sort4Integers(int a, int b, int c, int d)
{
  if(a>b)
  {
    b=a+b;
    a=b-a;
    b=b-a;
  }
  if(c>d)
  {
    d=c+d;
    c=d-c;
    d=d-c;
  }
  if(a>c)
  {
    c=a+c;
    a=c-a;
    c=c-a;
  }
  if(b>d)
  {
    d=b+d;
    b=d-b;
    d=d-b;
  }
  if(b>c)
  {
    c=b+c;
    b=c-b;
    c=c-b;
  }
  printf("%d\n%d\n%d\n%d",a,b,c,d);
}
