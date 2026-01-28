// in this problem we have to find the majority element means we have to find the element that occurs more than n/2 (size/2);
/*
#include<map>
int majorityElement(vector<int> v) {
	map<int,int>mapp;
	for(int i=0 ;i<v.size() ;i++){
		mapp[v[i]]++; // this will mark the occurence of the element 
	}
	for(auto it:mapp){  
		if(it.second>(v.size()/2)){ // if the number occures more than n/2
				return it.first;
		}
	}
	return -1 ;

}
*/
// optimal solution 
/*
int majorityElement(vector<int> v) {
	int count=0;
	int el;

	for(int i=0 ;i<v.size() ;i++){
		if(count==0){
			count=1;
			el=v[i];
		}
		else if (v[i]==el){
			count++;
		}
		else{
			count--;
		}
	}
	int count1=0;  // dont do the above step if question mentions that it always contail majority element 
	for(int i=0;i<v.size();i++){
		if(v[i]==el){
			count1++;
		}
	}
	if(count1>(v.size()/2)){
		return el;
	}

	return -1 ;
}
*/