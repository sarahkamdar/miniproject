 #include<iostream>
 using namespace std;

 int getdigit(const int no);
 int sumOddDigits(const string CreditCardNo);
 int sumEvenDigits(const string CreditCardNo);

int main(){

    string CreditCardNo;
    int result;
    cout << "Enter your credit card number : ";
    cin >> CreditCardNo;

    result =  sumOddDigits(CreditCardNo) + sumEvenDigits(CreditCardNo);

    if(result % 10 == 0){
        cout << CreditCardNo << " is valid" << endl;
    }
    else{
        cout << CreditCardNo << " is not valid" << endl;
    }
 return 0;
}

int getdigit(const int no){
    return no % 10 + (no / 10) % 10;
}

int sumOddDigits(const string CreditCardNo){
    int sum = 0;
    for(int i = CreditCardNo.size()-1; i >= 0; i-=2){
        sum += getdigit(CreditCardNo[i] - '0');
    }
    return sum;
}

int sumEvenDigits(const string CreditCardNo){
int sum = 0;
    for(int i = CreditCardNo.size()-2; i >= 0; i-=2){
        sum += getdigit((CreditCardNo[i] - '0')*2);
    }
    return sum;
}
