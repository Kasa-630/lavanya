#include<stdio.h>
int main(){
	int n1,n2,n3,n4,n5,p1,p2,p3,p4,p5;
	float w1=0,w2=0;
	printf("Q1.PIN code in india was introduced in the year\n1.1972\t2.1975\t3.1976\t4.1982\n");
	printf("enter the option by player 1:");
	scanf("%d",&n1);
	printf("enter the option by player 2:");
	scanf("%d",&p1);
	if(n1==1){
		w1+=1;
	}
	else{
		w1-=0.25;
	}
	if(p1==1){w2+=1;
	}
	else{w2-=0.25;
	}
	system("cls");
	printf("Q2.which city the longest flyover of india is located\n1.mumbai\t2.pune\n3.chennai\t4.hyderabad\n");
	printf("enter the option by player 1:");
	scanf("%d",&n2);
	printf("enter the option by player 2:");
	scanf("%d",&p2);
	if(n2==4){
		w1+=1;
	}
	else{
		w1-=0.25;
	}
	if(p2==4){w2+=1;
	}
	else{w2-=0.25;
	}
	system("cls");
	printf("Q3.which one is the least populated state of india\n1.arunachal pradesh\t2.sikkim\t3.nagaland\t4.gao\n");
	printf("enter the option by player 1:");
	scanf("%d",&n3);
	printf("enter the option by player 2:");
	scanf("%d",&p3);
	if(n3==2){
		w1+=1;
	}
	else{
		w1-=0.25;
	}
	if(p3==2){w2+=1;
	}
	else{w2-=0.25;
	}
	system("cls");
	printf("Q4.which one is the most populated state of india\n1.bihar\t2.maharashtra\t3.uttar pradesh\t4.madhya pradesh\n");	
    printf("enter the option by player 1:");
	scanf("%d",&n4);
	printf("enter the option by player 2:");
	scanf("%d",&p4);
	if(n4==3){
		w1+=1;
	}
	else{
		w1-=0.25;
	}
	if(p4==3){w2+=1;
	}
	else{w2-=0.25;
	}
	system("cls");
	printf("Q5.which state has the largest number of buddists in india\n1.gujarat\t2.karnataka\t3.jarkhand\t4.maharashtra\n");
	printf("enter the option by player 1:");
	scanf("%d",&n5);
	printf("enter the option by player 2:");
	scanf("%d",&p5);
	if(n5==4){
		w1+=1;
	}
	else{
		w1-=0.25;
	}
	if(p5==4){w2+=1;
	}
	else{w2-=0.25;
	}
	system("cls");
	if(w1>=2.5&&w2>=2.5){
		printf("Both are qualified:\n");
		printf("scores of A:%f and B:%f\n",w1,w2);
		if(w1>w2){
			
			printf("*******A wins********");
		}
		else if(w1==w2){printf("TIE:");
		}
		else{
			printf("*******B wins*********");
		}
	}
	else if(w1>=2.5&&w2<2.5){
		printf("score of A:%f\n",w1);
		printf("**********A wins*********");
	}
	else if(w2>=2.5&&w1<2.5){
		printf("score of B:%f\n",w2);
		printf("********B wins**********");
	}
	else{
		printf("Both are disqualified:");
	}
}
