  
//The program promts the user to enter salary and years 
//They have worked for the company
//The program then calculates their bonus  
#include<cmath>

#include <iostream>

using namespace std;

int main()

{
  
//The program promts the user to enter salary and years 
//They have worked for the company
//The program then calculates their bonus   
int salary,years, bonus;
    
cout<<"enter salary"<<endl;
    
cin>>salary;
    
cout<<"enter years"<<endl;
    
cin>>years;
    
if(years>10)
    
{
        
bonus=salary*0.1;
        
cout<<"net bonus ="<<bonus <<endl;
        
cin>>bonus;
           
}
          
else if((years>=6)&&(years<=10))
          
{
              
bonus=salary*0.08;
              
cout<<"net bonus="<<bonus<<endl;           
cin>>bonus;
          
}
          
else if (years<6)
          
{
              
bonus= salary*0.05;
              
cout<<"net bonus="<<bonus<<endl;         
cin>>bonus;
          
}
          
return 0;
}
