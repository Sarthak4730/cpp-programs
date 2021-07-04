#include<iostream.h>
#include<conio.h>

int fact(int x);

void main ()
{
 int factorial=1, n;
 clrscr();
 cout<<"enter the number"<<endl;
 cin>>n;
 if(n<0)
 {
  cout<<"no factorial for -ve number!!";
 }else{
   factorial = fact(n);
   cout<<"factorial is :"<<factorial;
 }
 getch();
}

int fact(int x){
int factresult = 1;
if(x == 0 || x ==1)
{
  factresult = 1;
}else
{
 while(x >= 1)
  {
   factresult =factresult * x;
   x--;
  }
}

return factresult;
}
