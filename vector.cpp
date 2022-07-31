#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> n;
    
    n.assign(4,1);

   cout<<"The contents are: ";
   for(int i = 0; i<n.size(); i++){
       cout<<n[i]<<" ";
   }

   n.push_back(6);
   int len = n.size()-1;
   cout<<"The last element is: "<<n[len];

    // n.pop_back();
     cout<<"\nThe contents are: ";
   for(int i = 0; i<n.size(); i++){
       cout<<n[i]<<" ";
   }

   n.insert(n.begin(), 5);
   cout<<"The first element is: "<< n[0];

    cout<<"The contents are: ";
   for(int i = 0; i<n.size(); i++){
       cout<<n[i]<<" ";
   }

   n.clear();
   int size = n.size();
   cout<<"\n Now the size is: "<<size;

   for(int i = 0; i<5; i++){
       n.push_back(i);
   }

   cout<<"Ouput from begin and end: ";
//    three ways to traverse in vector with for loop

//    for(auto a = n.begin(); a != n.end(); a++){
//        cout<<*a<<" ";
//    }

  for(auto c:n){
      cout<<c<<" ";
  }
  
// for(int i = 0; i<n.size(); i++){
//     cout<<i<<" ";
// }
   return 0;
}