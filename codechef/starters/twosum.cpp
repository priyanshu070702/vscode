#include <iostream>
using namespace std;

int main(){
    int nums[1000];
    int target,n,i;
    cout<<"enter n";
        cin>>n;
    for(int i=0;i<n;i++){
       cin>>nums[i];
    }
    cin>>target;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
            cout<<"["<<i<<","<<i+1<<"]";
        }
        }
        }
    /*do{
        cout<<"["<<i<<","<<i+1<<"]";
        i++;
    }
    while(nums[i]+nums[i+1]==target);
    */
   return 0;
}
