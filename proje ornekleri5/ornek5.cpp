#include <iostream>
using namespace std;
float average(int);
int main(){
    int numbers;
    cout<<"how many numbers will you enter?";
    cin>>numbers;
    cout<<average(numbers);
    return 0;
}
float average(int n){
   float totalaverage=0;
    for(int i=0;i<n;i++){
    	 int number[i];
        cin>>number[i];
        totalaverage+=number[i];
    }
    return totalaverage/n;;
}
