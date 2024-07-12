#include<iostream>
using namespace std ;
class ATM{
    float balance;
    int pincode;
     int success;
    public:
   
    ATM(float b,int p){
        balance=b;
        pincode=p;

    }
     void check(){
        cout<<balance<<" rupess "<<endl;

    }
    int setpin(int r ){
        if(pincode==r){
            return true ;
        }else{
            return false;
        }
    }
     int setwithdraw( int amount){
          if(balance>=amount){
        balance=balance-amount;
        return true;
        }else{
          return false;      
        }      
     }
    void setdeposit(int amount){
        balance=balance+amount;
        cout<<"deposite succesfully..."<<endl;
     }
    int transfer(int amount,  ATM receiver ){
       
        success= setwithdraw(amount);
        if(success){
            receiver.setdeposit(amount);
            return true;
           
            }
             else{
                false;
            }
        }  
};
int main(){
    ATM b(10000,1234);
    char w ; int n,pin , amount,success,right;
    cout<<" WELCOME TO BANK  "<<endl;
     cout<<"enter pin code : "<<endl;
     cin>>pin;
right= b.setpin(pin);
  if(right){
    cout<<"1. check balance "<<endl;
    cout<<"2.withdraw money   "<<endl;
    cout<<"3.deposite money"<<endl;
    cout<<"4. transfer money"<<endl;
    cout<<"5. exit          "<<endl;
  
do
{
   cout<<" press a one key :"<<endl;1234
   cin>>n;
   switch (n)
   {
   case 1:
    cout<<"your balance are :"<<endl;
    b.check();
     break;
   case 2:
   cout<<" enter a withdraw amount "<<endl;
   cin>>amount;
   success = b.setwithdraw( amount);
   if(success){
    cout<<"withdow sucessfully"<<endl;
   }
   else{
    cout<<"balance a lesser then amount"<<endl;
   }
    break;
    case 3:
    cout<<"enter a diposite money"<<endl;
    cin>>amount;
    b.setdeposit(amount);
    break;
    case 4:
    cout<<"enter a transfer money"<<endl;
    cin>>amount;
    success=b.transfer(amount,b);
    if(success){
        cout<<"TRANSFER SUCCESFULL"<<endl;
    }
    else{
        cout<<"TRANSFER NOT SUCCESFULL :"<<endl;
    }
    break;
    case 5:
    exit(1);
   default:
   cout<<" sahi choose krle bkl "<<endl;
    break;
   }
   cout<<"again use of Atm"<<"[yes and no]"<<endl;
    cin>>w;
} while (w =='y');


}else{
    cout<<" pincode worng"<<endl;
}
}

