//STL:Standard Template Library
//STL Component:Containers,Algorithm,Iterators
//Inside main int and double value:10^6 and outside main 10^7
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int arr[5];
//int arr[5]={1};
//int main(){
//	int arr[5];//Garbage value
//	for(int i=0;i<5;i++){
//		cout<<arr[i];
//	}
//	int arr[5]={1};
//    int arr[5];
//    array<int,5>arr={1};
//	for(int i=0;i<5;i++){
//		cout<<arr[i];
//	}
//	for(auto it=arr.begin();it!=arr.end();it++){
//		cout<<*it<<endl;
//	}
//	return 0;
//}


//begin,end,rbegin,rend,at,fill,front,back,size
int main(){
 vector<int> v;
for(int i=0;i<5;i++){
		int element;
		cin>>element;
		v.push_back(element);
	}
    // using begin() to print vector
    for (auto it = v.begin();it != v.end(); ++it)
        cout << ' ' << *it;
    return 0;
}
