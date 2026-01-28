// arm strong number is a number whose addition of cubes of all numbers is similar to that number 
// 1634 1*1*1+6*6*6+3*3*3+4*4*4=1634 then it is a armstrong number 
/*
bool checkArmstrong(int n){
	int number=n;
	int sum=0;
	while(n>0){
		int digit=n%10;
		sum=sum+(digit*digit*digit);
		n=n/10;
	}
	if(sum==number){
		return true ;
	}
	else{
		return false ;
	}
}

*/