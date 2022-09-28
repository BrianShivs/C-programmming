#include <iostream>

using namespace std;

int main()

{
    
int age;
   
 //The program prompts for age 
cout<<"enter your age"<<endl;
    
cin>>age;
    
if (age>=18)
{
    
//The program tells you if you can vote or not
cout<<"you are eligible to vote"<<endl;
    
}
   
else if (age<18){
        
cout<<"you are not eligible to vote"<<endl;
  
}
    


return 0;

}