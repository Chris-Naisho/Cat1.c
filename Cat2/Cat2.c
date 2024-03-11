/Christopher Salaton ;
//A calculation of an yearly salary of an employee;
#include<stdio.h>
int main (){
float salary,tax=0;
//prompt the user to enter the annual salary 
printf ("Enter yearly salary :") ;
scanf ("%f", &salary) ;

//using the following conditions calculate the tax
If (salary <=400000 ){
tax =salary *0.01;
{else if (salary>400000 && salary <=1000000){
tax=(400000*0.01)+((salary - 400000)*)>0.15;
} else if (salary>1000000){
tax=(400000*0.01)+(600000*0.15)+((salary - 1000000)*0.25);
}
//prompt to calculate the tax
printf ("Tax :%2f/n",tax);

return 0;
}
