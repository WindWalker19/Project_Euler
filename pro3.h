//The prime factors of 13195 are 5, 7, 13 and 29.

//What is the largest prime factor of the number 600851475143 ?


//Using Sieve of Eratosthenes

int proj3(){
	long int num = 10;
	int p = 0;
	long int maxFact;
	long int div =2;
	while(num!=0){
		
		if( num % div != 0){
			div ++;
		}
		else{
			maxFact = num;
			num = num/div;
			if(num == 1){
				printf("%ld is the largest prime factor !\n",maxFact);
            	//ans = 1;
            	break;
			}
		}
	
	}
	return 0;

}