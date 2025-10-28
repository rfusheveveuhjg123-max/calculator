#include <iostream>
using namespace std;
int main(){
    cout<<"Enter your name : ";
    string username;
    cin>>username;
    cout<<"Welcome the calculator "+ username<<endl;
    cout<< "1 or 2 or 3 or 4 or 5 "<<endl;
    cout<<"Enter the number of arithmetic values : ";
    string answer;
    cin>>answer;
    if (answer=="2"){
         cout<<"Enter the first number : " ;
         int y;
         cin>>y;
         cout<<"Enter the sacond number : ";
         int r;
         cin>>r;
         cout<<"Enter operation + or - or * or / or % : ";
         string t;
         cin>>t;
         if (t=="+"){
                cout<<y+r;

         }
         else if (t=="-"){
                cout<<y-r;
         }
         else if (t=="*"){
                cout<<y*r;

         }
         else if(t=="/"){
              cout<<y/r;

         }
         else if(t=="%"){
              cout<<y%r;

       }
       else{
              cout<<"invalid option";
       }
     

              }     
              else if(answer=="3"){
                     cout<<"Enter the first number : ";
                     int a;
                     cin>>a ;
                     cout<<"Enter the second number : ";
                     int z;
                     cin>>z;
                     cout<<"Enter the thired number : ";
                     int q;
                     cin>>q;
                     cout<<"Enter operation + or - or * or / or % : ";
                     string answer1;
                     cin>> answer1;
                     if (answer1=="+"){
                            cout<<a+z+q;

                     }
                     else if (answer1=="-"){
                            cout<<a-z-q;

                     }
                     else if (answer1=="*"){
                            cout<<a*z*q;
                     }
                     else if (answer1=="/"){
                            cout<<a/z/q;

                     }
                     else if (answer1=="%"){
                            cout<<a%z%q;

                     }
                     else{
              cout<<"invalid option";
       }
                           

              }
               else if(answer=="4"){
                                   cout<<"Enter the first number : ";
                                   int i;
                                   cin>>i;
                                   cout<<"Enter the second number : ";
                                   int b;
                                   cin>>b;
                                   cout<<"Enter the thired number : ";
                                   int k;
                                   cin>>k;
                                   cout<<"Enter the fourd number : ";
                                   int c;
                                   cin>>c;
                                   cout<<"Enter operation + or - or * or / or % : ";
                                   string answer2;
                                   cin>>answer2;
                                   if (answer2=="+"){
                                          cout<<i+b+k+c;

                                   }
                                   else if (answer2=="-"){
                                          cout<<i-b-k-c;

                                   }
                                   else if(answer2=="*"){
                                          cout<<i*b*c*k;

                                   }
                                   else if(answer2=="/"){
                                          cout<<i/b/c/k;
                                   }
                                   else if (answer2=="%"){
                                          cout<<i%b%c%k;

                                   }
                                   else{
              cout<<"invalid option";
       }


                            }
                            else if (answer=="5")
                            {
                                   cout<<"Enter the first number : ";
                                   int j;
                                   cin>>j;
                                   cout<<"Enter the second number : ";
                                   int u;
                                   cin>>u;
                                   cout<<"Enter the thired number : ";
                                   int v;
                                   cin>>v;
                                   cout<<"Enter the fourd number : ";
                                   int d;
                                   cin>>d;
                                   cout<<"Enter the fifth number : ";
                                   int g;
                                   cin>>g;
                                   cout<<"Enter operation + or - or * or / or % : ";
                                   string answer3;
                                   cin>>answer3;
                                   if (answer3=="+"){
                                          cout<<j+g+d+v+u;

                                   }
                                   else if  (answer3=="-"){
                                          cout<<j-g-d-v-u;

                                   }
                                   else if (answer3=="*"){
                                          cout<<j*g*d*v*u;

                                   }
                                   else if (answer3=="/"){
                                          cout<<j/g/d/v/u;

                                       }
                                         else if (answer3=="%"){
                                          cout<<j%g%d%v%u;

                                   }
                                   else {
                                          cout<<"invalid option";
                                   }



                            }
                            

 
     }    
