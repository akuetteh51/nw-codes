#include <iostream>
using namespace std;

//variables declaration and function
int length();
int longest();
int Check();
int val_angle();
int T1;
int T2;
 int T3;
int sum;

int main(){
// calling functions
length();
longest();

Check();
val_angle();
return 0;
}
//taking inputs for length
int length(){

cout<<"please Enter the length of the first stick (as T1): "<<endl;
cin>>T1;
cout<<"please Enter the length of the Second stick (as T2): "<<endl;
cin>>T2;
cout<<"please Enter the length of the Third stick (as T3): "<<endl;
cin>>T3;

/*
break;


}
cout<<"the lenght shouldnt be equal to zero\n .please enter new values\n";
else{
continue;
}*/



return 0;
}
int longest(){
if (T1>T2 and T1>T3) {
cout<<"T1 is greater\n";
return T1;
}
if(T2>T1 and T2>T3) {
cout<<"T2 is greater\n";
return T2;
}
if(T3>T1 and T3>T2){
cout<<"T3 is greater\n";
return T3;
}

return 0;
}
int Check(){
if( T1 and T2 and T3 != 0){
sum = T1+T2>T3 or T1+T3>T2  or T2+T3 >T1;
cout<<"the parameters given can form a triangle\n";
return true;

}
else{
cout<<"the parameters given can not form a triangle\n";
return false;

}



}


int val_angle(){
//answer to c II. if angle is greater 
//than 90 then the triangle is obtuse
if(sum){
if(T1 == T2 or T1 == T3  or T2 == T3 ){

cout<<"one angle is greater than Pi/2"<<endl;
}
}
//answer to c II. if angle is equal 
//to 90 then the triangle is right angle triangle

 else if (T1^2 + T2^2 ==T3^2 or T1^2 + T3^2 ==T2^2 or T3^2 + T2^2 == T1^2){
cout<<"one angle is equal to pi/2"<<endl;
}

return 0;
}
