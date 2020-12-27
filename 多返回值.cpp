#include <iostream>
#include <numeric>
#include <vector>
#include<algorithm>
using namespace std;
bool charge(int a,vector<int>* b,vector<int>* c,vector<int>* d);

int main() {
    vector<int> memory;
    vector<int>* memoryPoint=&memory;
    vector<int> firstVector;
    vector<int>* firstVectorP=&firstVector;
    vector<int> secondVector;
    vector<int>* secondVectorP = &secondVector;
    int bottom,top;
    int serialNumber=1;
    cin>>bottom>>top;
    for (int i = bottom;i<=top;i++){
        if(charge(i,memoryPoint,firstVectorP,secondVectorP)){
            vector<int>::iterator k =memory.end();
            if( find(memory.begin() , memory.end() , i) != k ) continue;
            cout<<serialNumber<<endl;
            cout<<i<<":"<<1<<"+";
            for (unsigned int j = 0 ;j< firstVector.size();j++) {
                cout<<firstVector[j]<<"+";
            }
            cout<<"\b"<<"="<<accumulate(firstVector.begin(),firstVector.end(),1) <<endl;
            cout<<accumulate(firstVector.begin(),firstVector.end(),1)<<":"<<1<<"+";
            for (unsigned int j = 0 ;j< secondVector.size();j++) {
                cout<<secondVector[j]<<"+";
            }
            cout<<"\b"<<"="<<i<<endl;
            firstVector.clear();
            secondVector.clear();
            serialNumber++;
        }
        firstVector.clear();
        secondVector.clear();
    }
    return 0;
}
bool charge(int a,vector<int>* b,vector<int>* c,vector<int>* d){

    for (int i = 2 ; i<a ; i++){
        if(a%i==0){
            (*c).push_back(i);
        }
    }
    int firstSum = accumulate((*c).begin(),(*c).end(),1);

    for (int i = 2 ; i<firstSum ; i++){
        if(firstSum%i==0){
            (*d).push_back(i);
        }
    }
    int secondSum = accumulate((*d).begin(),(*d).end(),1);
    if (secondSum==a) {
        b->push_back(firstSum);
        return true;
    }
    return false;
}



