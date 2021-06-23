#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char teachid[5],teachp[5],stuid[5],stup[5],tid,tp,sid,sp,sys[5]="teach",stu1[5]="skool",stu2[5]="schol",temp1,temp2;
	char sub[10],x,a[5],eng11[100],mat11[100],evs11[100],msc11[100],eng12[100],mat12[100],evs12[100],msc12[100],neg1[100];
	char nma1[100],nev1[100],nmo1[100],heg1[100],hma1[100],hev1[100],hmo1[100],heg2[100],hma2[100],hev2[100],hmo2[100];
	char nma2[100],nev2[100],nmo2[100],neg2[100],eng21[100],mat21[100],evs21[100],msc21[100],eng22[100],mat22[100];
	char evs22[100],msc22[100],neg3[100],nma3[100],nev3[100],nmo3[100],heg3[100],hma3[100],hev3[100],hmo3[100];
	char eng31[100],mat31[100],evs31[100],msc31[100],eng32[100],mat32[100],evs32[100],msc32[100],neg4[100],nma4[100];
	char nev4[100],nmo4[100],heg4[100],hma4[100],hev4[100],hmo4[100],eng41[100],mat41[100],evs41[100],msc41[100];
	char eng42[100],mat42[100],evs42[100],msc42[100],neg5[100],nma5[100],nev5[100],nmo5[100],heg5[100],hma5[100],hev5[100];
	char hmo5[100],eng51[100],mat51[100],evs51[100],msc51[100],eng52[100],mat52[100],evs52[100],msc52[100];
	int i,s,b,st,y,y2,y3,y4,y5,c,t,r1,r2,sub1,sub12,sub21,sub22,sub31,sub32,sub41,sub42,sub51,sub52;
	int n1,h1,h2,n2,n3,h3,n4,h4,n5,h5,cn,sn;
	frn:
	system("COLOR 71"); 
	printf("\n\n\t\t\t\t\t\tSri Krishna Mission School\n\t\t\t\t\t\t\tAgartala\n");              //front page
	printf("*******************************************************************************************");
	printf("*****************************\n");
	printf("\n\n1.Teacher login     2.Student login\n");
	printf("\n\n\n\n\n3.Class Notes\n\n\n\n\n4.Close the system");
	printf("\n\n\n\n\nEnter choice: ");
	scanf("%d",&c);
	system("cls");
	if(c==1){                                       //teacher's login
		printf("\nEnter id: ");
		scanf("%s",&teachid);
		printf("\nEnter password:");
		scanf("%s",&teachp);
	   if(strcmp(teachid,sys)==0)
	   {system("cls");
	   	 printf("\nLogin Sucess!\n");
	   	 printf("Enter class: ");
	   	 scanf("%d",&t); 
	   	 printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		 printf("\nEnter subject code:");
		 scanf("%d",&st);
		 if(t==1 && st==1){  
		    system("cls"); 
			ent11:                                            //class1-english
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class1 english
		 		printf("\nUpdate notes of english\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(neg1,sizeof(neg1),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent11;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class1 english
				system("cls");
		 		printf("\nUpdate homeworks of english\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(heg1,sizeof(heg1),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent11;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                           //view answers of class1 english
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",eng11);
				printf("Roll number:2\n");
				printf("%s\n",eng12);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent11;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==1 && st==2){
		 	system("cls"); 
			ent12:                                            //class1-mathematics
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class1 mathematics
		 		printf("\nUpdate notes of mathematics\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nma1,sizeof(nma1),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent12;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                              //update homework of class1 mathematics
				system("cls");
		 		printf("\nUpdate homeworks of mathematics\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hma1,sizeof(hma1),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent12;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class1 mathematics
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",mat11);
				printf("Roll number:2\n");
				printf("%s\n",mat12);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent12;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==1 && st==3){
		 	system("cls"); 
			ent13:                                            //class1-EVS
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class1 evs
		 		printf("\nUpdate notes of evs\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nev1,sizeof(nev1),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent13;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class1 evs
				system("cls");
		 		printf("\nUpdate homeworks of evs\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hev1,sizeof(hev1),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent13;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class1 evs
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",evs11);
				printf("Roll number:2\n");
				printf("%s\n",evs12);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent13;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==1 && st==4){
		 	system("cls"); 
			ent14:                                            //class1-Moral Sci
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class1 evs
		 		printf("\nUpdate notes of moral science\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nmo1,sizeof(nmo1),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent14;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class1 moral sci
				system("cls");
		 		printf("\nUpdate homeworks of moral science\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hmo1,sizeof(hmo1),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent14;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class1 moral science
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",msc11);
				printf("Roll number:2\n");
				printf("%s\n",msc12);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent14;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==2 && st==1){
		 	system("cls"); 
			ent21:                                            //class2-english
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class2 english
		 		printf("\nUpdate notes of english\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(neg2,sizeof(neg2),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent21;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class2 english
				system("cls");
		 		printf("\nUpdate homeworks of english\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(heg2,sizeof(heg2),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent21;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class2 english
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",eng21);
				printf("Roll number:2\n");
				printf("%s\n",eng22);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent21;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==2 && st==2){
		 	system("cls"); 
			ent22:                                            //class2-mathematics
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class2 mathematics
		 		printf("\nUpdate notes of mathematics\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nma2,sizeof(nma2),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent22;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class2 mathematics
				system("cls");
		 		printf("\nUpdate homeworks of mathematics\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hma2,sizeof(hma2),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent22;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class2 mathematics
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",mat21);
				printf("Roll number:2\n");
				printf("%s\n",mat22);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent22;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		else if(t==2 && st==3){
		 	system("cls"); 
			ent23:                                            //class2-EVS
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class2 evs
		 		printf("\nUpdate notes of evs\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nev2,sizeof(nev2),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent23;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class2 evs
				system("cls");
		 		printf("\nUpdate homeworks of evs\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hev2,sizeof(hev2),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent23;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class2 evs
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",evs21);
				printf("Roll number:2\n");
				printf("%s\n",evs22);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent23;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		else if(t==2 && st==4){
		 	system("cls"); 
			ent24:                                            //class2-Moral Sci
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class2 evs
		 		printf("\nUpdate notes of moral science\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nmo2,sizeof(nmo2),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent24;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class2 moral sci
				system("cls");
		 		printf("\nUpdate homeworks of moral science\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hmo2,sizeof(hmo2),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent24;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class2 moral science
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",msc21);
				printf("Roll number:2\n");
				printf("%s\n",msc22);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent24;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
		}
			else if(t==3 && st==1){
		 	system("cls"); 
			ent31:                                            //class3-english
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class3 english
		 		printf("\nUpdate notes of english\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(neg3,sizeof(neg3),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent31;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class3 english
				system("cls");
		 		printf("\nUpdate homeworks of english\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(heg3,sizeof(heg3),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent31;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class3 english
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",eng31);
				printf("Roll number:2\n");
				printf("%s\n",eng32);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent31;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==3 && st==2){
		 	system("cls"); 
			ent32:                                            //class3-mathematics
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class3 mathematics
		 		printf("\nUpdate notes of mathematics\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nma3,sizeof(nma3),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent32;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class3 mathematics
				system("cls");
		 		printf("\nUpdate homeworks of mathematics\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hma3,sizeof(hma3),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent32;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class3 mathematics
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",mat31);
				printf("Roll number:2\n");
				printf("%s\n",mat32);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent32;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==3 && st==3){
		 	system("cls"); 
			ent33:                                            //class3-EVS
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class3 evs
		 		printf("\nUpdate notes of evs\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nev3,sizeof(nev3),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent33;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class3 evs
				system("cls");
		 		printf("\nUpdate homeworks of evs\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hev3,sizeof(hev3),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent33;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class3 evs
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",evs31);
				printf("Roll number:2\n");
				printf("%s\n",evs32);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent33;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==3 && st==4){
		 	system("cls"); 
			ent34:                                            //class3-Moral Sci
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class3 evs
		 		printf("\nUpdate notes of moral science\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nmo3,sizeof(nmo3),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent34;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class3 moral sci
				system("cls");
		 		printf("\nUpdate homeworks of moral science\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hmo3,sizeof(hmo3),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent34;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class3 moral science
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",msc31);
				printf("Roll number:2\n");
				printf("%s\n",msc32);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent24;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
	   }
		 else if(t==4 && st==1){
		 	system("cls"); 
			ent41:                                            //class4-english
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class4 english
		 		printf("\nUpdate notes of english\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(neg4,sizeof(neg4),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent41;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class4 english
				system("cls");
		 		printf("\nUpdate homeworks of english\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(heg4,sizeof(heg4),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent41;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class4 english
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",eng41);
				printf("Roll number:2\n");
				printf("%s\n",eng42);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent41;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==4 && st==2){
		 	system("cls"); 
			ent42:                                            //class4-mathematics
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class4 mathematics
		 		printf("\nUpdate notes of mathematics\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nma4,sizeof(nma4),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent42;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class4 mathematics
				system("cls");
		 		printf("\nUpdate homeworks of mathematics\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hma4,sizeof(hma4),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent42;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class4 mathematics
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",mat41);
				printf("Roll number:2\n");
				printf("%s\n",mat42);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent42;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==4 && st==3){
		 	system("cls"); 
			ent43:                                            //class4-EVS
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class4 evs
		 		printf("\nUpdate notes of evs\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nev4,sizeof(nev4),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent43;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class4 evs
				system("cls");
		 		printf("\nUpdate homeworks of evs\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hev4,sizeof(hev4),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent43;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class4 evs
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",evs41);
				printf("Roll number:2\n");
				printf("%s\n",evs42);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent43;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==4 && st==4){
		 	system("cls"); 
			ent44:                                            //class4-Moral Sci
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class4 evs
		 		printf("\nUpdate notes of moral science\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nmo4,sizeof(nmo4),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent44;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class4 moral sci
				system("cls");
		 		printf("\nUpdate homeworks of moral science\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hmo4,sizeof(hmo4),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent44;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class4 moral science
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",msc41);
				printf("Roll number:2\n");
				printf("%s\n",msc42);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent44;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
		 }
		  else if(t==5 && st==1){
		 	system("cls"); 
			ent51:                                            //class5-english
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class5 english
		 		printf("\nUpdate notes of english\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(neg5,sizeof(neg5),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent51;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class5 english
				system("cls");
		 		printf("\nUpdate homeworks of english\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(heg5,sizeof(heg5),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent51;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class5 english
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",eng51);
				printf("Roll number:2\n");
				printf("%s\n",eng52);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent51;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==5 && st==2){
		 	system("cls"); 
			ent52:                                            //class5-mathematics
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class5 mathematics
		 		printf("\nUpdate notes of mathematics\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nma5,sizeof(nma5),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent52;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class5 mathematics
				system("cls");
		 		printf("\nUpdate homeworks of mathematics\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hma5,sizeof(hma5),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent52;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class5 mathematics
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",mat51);
				printf("Roll number:2\n");
				printf("%s\n",mat52);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent52;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==5 && st==3){
		 	system("cls"); 
			ent53:                                            //class5-EVS
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class5 evs
		 		printf("\nUpdate notes of evs\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nev5,sizeof(nev5),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent53;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class5 evs
				system("cls");
		 		printf("\nUpdate homeworks of evs\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hev5,sizeof(hev5),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent53;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class5 evs
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",evs51);
				printf("Roll number:2\n");
				printf("%s\n",evs52);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent53;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else{
				system("cls");
				goto frn;
			}
		 }
		 else if(t==5 && st==4){
		 	system("cls"); 
			ent54:                                            //class5-Moral Sci
		 	printf("\n1.Update Notes\n2.Update Homeworks\n3.View Student's Answers\n4.go back\n");
		 	printf("\nEnter choice:");
		 	scanf("%d",&s);
		 	if(s==1){system("cls");                       //for update notes of class5 moral science
		 		printf("\nUpdate notes of moral science\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(nmo5,sizeof(nmo5),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent54;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			 }
			else if(s==2){                      //update homework of class5 moral sci
				system("cls");
		 		printf("\nUpdate homeworks of moral science\n\n");
		 		printf("Write here: ");
		 		scanf("%c",&temp2);
		 		fgets(hmo5,sizeof(hmo5),stdin);
		 		printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent54;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
			else if(s==3){
				system("cls");                   //view answers of class5 moral science
				printf("Answers of Students\n\n");
				printf("--------------------------------------\n");
				printf("Roll number:1\n");
				printf("%s\n",msc51);
				printf("Roll number:2\n");
				printf("%s\n",msc52);
				printf("\n\n\nPress 0 to go back and 1 to logout...");
		 		scanf("%d",&b);
		 		if(b==0){
		 			system("cls");
		 			goto ent54;
				 }
				 else{
				 	system("cls");
				 	goto frn;
				 }
			}
		 }
	 
	 }
	   else
	   printf("\nInvalid input");
	   system("cls");
	   goto frn;
    }
	if(c==2)
	{                                              //student's login
		printf("Enter userid: ");//class and then first three alphabets of your name
		scanf("%s",&stuid);
		printf("Enter password: ");
		scanf("%s",&stup);
		if(strcmp(stup,stu1)==0){
			printf("Login Sucess\n");
			x=stuid[0];
		}
		else if(strcmp(stup,stu2)==0){
				printf("Login Sucess\n");
			x=stuid[0];
		}
        else{
        	printf("Invalid input\n");
        		system("cls");
        	goto frn;
		}		
		switch(x)
		{
			case '1': system("cls");            //class 1
			 printf("class:%c\n\n",x);
			 goto pag1;
    pag1:
	printf("1.View homework(including all subjects)\n2.View notes of all subjects\n3.Update homework answers\n\n");
	printf("4.Logout\n");
	printf("Enter choice: ");
	scanf("%d",&y);
	if(y==1)
	{                                       //for homework of class 1
		system("cls");
		printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		printf("Enter subject code:");
	    scanf("%d",&h1);
	    if(h1==1){
	    system("cls");
	    printf("Homework of ENGLISH: %s",heg1);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag1;}
		else
		system("cls");
		goto frn;
		}
		else if(h1==2){
	    system("cls");
	    printf("Homework of MATHEMATICS: %s",hma1);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag1;}
		else
		system("cls");
		goto frn;
		}
		else if(h1==3){
	    system("cls");
	    printf("Homework of EVS: %s",hev1);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag1;}
		else
		system("cls");
		goto frn;
		}
		else {
	    system("cls");
	    printf("Homework of MORAL SCIENCE: %s",hmo1);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag1;}
		else
		system("cls");
		goto frn;
		}
	}
	if(y==2)
	{
		                             //for notes of class 1
		system("cls");
		printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		printf("Enter subject code:");
	    scanf("%d",&n1);
	    if(n1==1){
	    system("cls");
	    printf("Notes of ENGLISH: %s",neg1);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag1;}
		else
		system("cls");
		goto frn;
		}
		else if(n1==2){
	    system("cls");
	    printf("Notes of MATHEMATICS: %s",nma1);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag1;}
		else
		system("cls");
		goto frn;
		}
		else if(n1==3){
	    system("cls");
	    printf("Notes of EVS: %s",nev1);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag1;}
		else
		system("cls");
		goto frn;
		}
		else {
	    system("cls");
	    printf("Note of MORAL SCIENCE: %s",nmo1);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag1;}
		else
		system("cls");
		goto frn;
		}
	}
	if(y==3)
	{                                       // for upload answers of class 1 
		system("cls");
		printf("Enter roll number:");
		scanf("%d",&r1);
		if(r1==1)
		{   
		    system("cls");
			printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
			printf("Enter subject code: ");
			scanf("%d",&sub1);
			if(sub1==1){
				system("cls");
				printf("Enter answers of ENGLISH: ");
				scanf("%c",&temp1);
				fgets(eng11,sizeof(eng11),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag1;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub1==2){
				system("cls");
				printf("Enter answers of MATHEMATICS: ");
				scanf("%c",&temp1);
				fgets(mat11,sizeof(mat11),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag1;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub1==3){
				system("cls");
				printf("Enter answers of EVS: ");
				scanf("%c",&temp1);
				fgets(evs11,sizeof(evs11),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag1;}
		        else
		        system("cls");
		        goto frn;
			}
			else
			{   system("cls");
				printf("Enter answers of MORAL SCIENCE: ");
				scanf("%c",&temp1);
				fgets(msc11,sizeof(msc11),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag1;}
		        else
		        system("cls");
		        goto frn;
			}
		}
		if(r1==2){   system("cls");
				printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
			    printf("Enter subject code: ");
			    scanf("%d",&sub12);
			if(sub12==1){
				system("cls");
				printf("Enter answers of ENGLISH: ");
				scanf("%c",&temp1);
				fgets(eng12,sizeof(eng12),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag1;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub12==2){
				system("cls");
				printf("Enter answers of MATHEMATICS: ");
				scanf("%c",&temp1);
				fgets(mat12,sizeof(mat12),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag1;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub12==3){
				system("cls");
				printf("Enter answers of EVS: ");
				scanf("%c",&temp1);
				fgets(evs12,sizeof(evs12),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag1;}
		        else
		        system("cls");
		        goto frn;
			}
			else{
				system("cls");
				printf("Enter answers of MORAL SCIENCE: ");
				scanf("%c",&temp1);
				fgets(msc12,sizeof(msc12),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag1;}
		        else
		        system("cls");
		        goto frn;
			}
		}
	}
 	if(y==4)
	{                                           //logout from class 1
			system("cls");
		goto frn;
	}
			break;
			
			case '2': system("cls");                      //class 2
			 printf("class:%c\n",x);
			 goto pag2;
			 
			pag2:
	printf("1.View homework(including all subjects)\n2.View notes of all subjects\n3.Update homework answers\n\n");
	printf("4.Logout\n");
	printf("Enter choice: ");
	scanf("%d",&y2);
	if(y2==1){                                          //for homework of class 2
			system("cls");
		printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		printf("Enter subject code:");
	    scanf("%d",&h2);
	    if(h2==1){
	    system("cls");
	    printf("Homework of ENGLISH: %s",heg2);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag2;}
		else
		system("cls");
		goto frn;
		}
		else if(h2==2){
	    system("cls");
	    printf("Homework of MATHEMATICS: %s",hma2);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag2;}
		else
		system("cls");
		goto frn;
		}
		else if(h2==3){
	    system("cls");
	    printf("Homework of EVS: %s",hev2);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag2;}
		else
		system("cls");
		goto frn;
		}
		else {
	    system("cls");
	    printf("Homework of MORAL SCIENCE: %s",hmo2);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag2;}
		else
		system("cls");
		goto frn;
		}
	}
	else if(y2==2){                                    //for notes of class 2
		system("cls");
		printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		printf("Enter subject code:");
	    scanf("%d",&n2);
	    if(n2==1){
	    system("cls");
	    printf("Notes of ENGLISH: %s",neg2);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag2;}
		else
		system("cls");
		goto frn;
		}
		else if(n2==2){
	    system("cls");
	    printf("Notes of MATHEMATICS: %s",nma2);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag2;}
		else
		system("cls");
		goto frn;
		}
		else if(n2==3){
	    system("cls");
	    printf("Notes of EVS: %s",nev2);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag2;}
		else
		system("cls");
		goto frn;
		}
		else {
	    system("cls");
	    printf("Note of MORAL SCIENCE: %s",nmo2);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag2;}
		else
		system("cls");
		goto frn;
		}
		
	}
	else if(y2==3){                                    //for uploading homework answers of class 2
			system("cls");
		printf("Enter roll number:");
		scanf("%d",&r2);
		if(r2==1)
		{   
		    system("cls");
			printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
			printf("Enter subject code: ");
			scanf("%d",&sub21);
			if(sub21==1){
				system("cls");
				printf("Enter answers of ENGLISH: ");
				scanf("%c",&temp1);
				fgets(eng21,sizeof(eng21),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag2;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub21==2){
				system("cls");
				printf("Enter answers of MATHEMATICS: ");
				scanf("%c",&temp1);
				fgets(mat21,sizeof(mat21),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag2;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub21==3){
				system("cls");
				printf("Enter answers of EVS: ");
				scanf("%c",&temp1);
				fgets(evs21,sizeof(evs21),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag2;}
		        else
		        system("cls");
		        goto frn;
			}
			else
			{   system("cls");
				printf("Enter answers of MORAL SCIENCE: ");
				scanf("%c",&temp1);
				fgets(msc21,sizeof(msc21),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag2;}
		        else
		        system("cls");
		        goto frn;
			}
		}
		if(r2==2){   system("cls");
				printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
			    printf("Enter subject code: ");
			    scanf("%d",&sub22);
			if(sub22==1){
				system("cls");
				printf("Enter answers of ENGLISH: ");
				scanf("%c",&temp1);
				fgets(eng22,sizeof(eng22),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag2;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub22==2){
				system("cls");
				printf("Enter answers of MATHEMATICS: ");
				scanf("%c",&temp1);
				fgets(mat22,sizeof(mat22),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag2;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub22==3){
				system("cls");
				printf("Enter answers of EVS: ");
				scanf("%c",&temp1);
				fgets(evs22,sizeof(evs22),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag2;}
		        else
		        system("cls");
		        goto frn;
			}
			else{
				system("cls");
				printf("Enter answers of MORAL SCIENCE: ");
				scanf("%c",&temp1);
				fgets(msc22,sizeof(msc22),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag2;}
		        else
		        system("cls");
		        goto frn;
			}
     }
	}   
	else{                                     //logout from class2 
		system("cls");
		goto frn;
	}
			break;
			case '3':system("cls");                        //class 3
			printf("class:%c\n",x);
			goto pag3;
			 
			pag3:
	printf("1.View homework(including all subjects)\n2.View notes of all subjects\n3.Update homework answers\n\n");
	printf("4.Logout\n");
	printf("Enter choice: ");
	scanf("%d",&y3);
	if(y3==1){                                          //for homework of class 3
			system("cls");
		printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		printf("Enter subject code:");
	    scanf("%d",&h3);
	    if(h3==1){
	    system("cls");
	    printf("Homework of ENGLISH: %s",heg3);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag3;}
		else
		system("cls");
		goto frn;
		}
		else if(h3==2){
	    system("cls");
	    printf("Homework of MATHEMATICS: %s",hma3);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag3;}
		else
		system("cls");
		goto frn;
		}
		else if(h3==3){
	    system("cls");
	    printf("Homework of EVS: %s",hev3);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag3;}
		else
		system("cls");
		goto frn;
		}
		else {
	    system("cls");
	    printf("Homework of MORAL SCIENCE: %s",hmo3);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag3;}
		else
		system("cls");
		goto frn;
		}
	}
	else if(y3==2){                                    //for notes of class 3
		system("cls");
		printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		printf("Enter subject code:");
	    scanf("%d",&n3);
	    if(n3==1){
	    system("cls");
	    printf("Notes of ENGLISH: %s",neg3);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag3;}
		else
		system("cls");
		goto frn;
		}
		else if(n3==2){
	    system("cls");
	    printf("Notes of MATHEMATICS: %s",nma3);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag3;}
		else
		system("cls");
		goto frn;
		}
		else if(n3==3){
	    system("cls");
	    printf("Notes of EVS: %s",nev3);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag3;}
		else
		system("cls");
		goto frn;
		}
		else {
	    system("cls");
	    printf("Note of MORAL SCIENCE: %s",nmo3);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag3;}
		else
		system("cls");
		goto frn;
		}
		
	}
	else if(y3==3){                                    //for uploading homework answers of class 3
			system("cls");
		printf("Enter roll number:");
		scanf("%d",&r2);
		if(r2==1)
		{   
		    system("cls");
			printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
			printf("Enter subject code: ");
			scanf("%d",&sub31);
			if(sub31==1){
				system("cls");
				printf("Enter answers of ENGLISH: ");
				scanf("%c",&temp1);
				fgets(eng31,sizeof(eng31),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag3;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub31==2){
				system("cls");
				printf("Enter answers of MATHEMATICS: ");
				scanf("%c",&temp1);
				fgets(mat31,sizeof(mat31),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag3;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub31==3){
				system("cls");
				printf("Enter answers of EVS: ");
				scanf("%c",&temp1);
				fgets(evs31,sizeof(evs31),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag3;}
		        else
		        system("cls");
		        goto frn;
			}
			else
			{   system("cls");
				printf("Enter answers of MORAL SCIENCE: ");
				scanf("%c",&temp1);
				fgets(msc31,sizeof(msc31),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag3;}
		        else
		        system("cls");
		        goto frn;
			}
		}
		if(r2==2){   system("cls");
				printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
			    printf("Enter subject code: ");
			    scanf("%d",&sub32);
			if(sub32==1){
				system("cls");
				printf("Enter answers of ENGLISH: ");
				scanf("%c",&temp1);
				fgets(eng32,sizeof(eng32),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag3;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub32==2){
				system("cls");
				printf("Enter answers of MATHEMATICS: ");
				scanf("%c",&temp1);
				fgets(mat32,sizeof(mat32),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag3;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub32==3){
				system("cls");
				printf("Enter answers of EVS: ");
				scanf("%c",&temp1);
				fgets(evs32,sizeof(evs32),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag3;}
		        else
		        system("cls");
		        goto frn;
			}
			else{
				system("cls");
				printf("Enter answers of MORAL SCIENCE: ");
				scanf("%c",&temp1);
				fgets(msc32,sizeof(msc32),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag3;}
		        else
		        system("cls");
		        goto frn;
			}
     }
	}   
	else{                                     //logout from class3 
		system("cls");
		goto frn;
	}
			break;
			case '4':system("cls");                      //class 4
			 printf("class:%c\n",x);
			 goto pag4;
			 	 
			pag4:
	printf("1.View homework(including all subjects)\n2.View notes of all subjects\n3.Update homework answers\n\n");
	printf("4.Logout\n");
	printf("Enter choice: ");
	scanf("%d",&y4);
	if(y4==1){                                          //for homework of class 4
			system("cls");
		printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		printf("Enter subject code:");
	    scanf("%d",&h4);
	    if(h4==1){
	    system("cls");
	    printf("Homework of ENGLISH: %s",heg4);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag4;}
		else
		system("cls");
		goto frn;
		}
		else if(h4==2){
	    system("cls");
	    printf("Homework of MATHEMATICS: %s",hma4);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag4;}
		else
		system("cls");
		goto frn;
		}
		else if(h4==3){
	    system("cls");
	    printf("Homework of EVS: %s",hev4);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag4;}
		else
		system("cls");
		goto frn;
		}
		else {
	    system("cls");
	    printf("Homework of MORAL SCIENCE: %s",hmo4);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag4;}
		else
		system("cls");
		goto frn;
		}
	}
	else if(y4==2){                                    //for notes of class 4
		system("cls");
		printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		printf("Enter subject code:");
	    scanf("%d",&n4);
	    if(n4==1){
	    system("cls");
	    printf("Notes of ENGLISH: %s",neg4);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag4;}
		else
		system("cls");
		goto frn;
		}
		else if(n4==2){
	    system("cls");
	    printf("Notes of MATHEMATICS: %s",nma4);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag4;}
		else
		system("cls");
		goto frn;
		}
		else if(n4==3){
	    system("cls");
	    printf("Notes of EVS: %s",nev4);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag4;}
		else
		system("cls");
		goto frn;
		}
		else {
	    system("cls");
	    printf("Note of MORAL SCIENCE: %s",nmo4);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag4;}
		else
		system("cls");
		goto frn;
		}
		
	}
	else if(y4==3){                                    //for uploading homework answers of class 4
			system("cls");
		printf("Enter roll number:");
		scanf("%d",&r2);
		if(r2==1)
		{   
		    system("cls");
			printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
			printf("Enter subject code: ");
			scanf("%d",&sub41);
			if(sub41==1){
				system("cls");
				printf("Enter answers of ENGLISH: ");
				scanf("%c",&temp1);
				fgets(eng41,sizeof(eng41),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag4;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub41==2){
				system("cls");
				printf("Enter answers of MATHEMATICS: ");
				scanf("%c",&temp1);
				fgets(mat41,sizeof(mat41),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag4;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub41==3){
				system("cls");
				printf("Enter answers of EVS: ");
				scanf("%c",&temp1);
				fgets(evs41,sizeof(evs41),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag4;}
		        else
		        system("cls");
		        goto frn;
			}
			else
			{   system("cls");
				printf("Enter answers of MORAL SCIENCE: ");
				scanf("%c",&temp1);
				fgets(msc41,sizeof(msc41),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag4;}
		        else
		        system("cls");
		        goto frn;
			}
		}
		if(r2==2){   system("cls");
				printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
			    printf("Enter subject code: ");
			    scanf("%d",&sub42);
			if(sub42==1){
				system("cls");
				printf("Enter answers of ENGLISH: ");
				scanf("%c",&temp1);
				fgets(eng42,sizeof(eng42),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag4;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub42==2){
				system("cls");
				printf("Enter answers of MATHEMATICS: ");
				scanf("%c",&temp1);
				fgets(mat42,sizeof(mat42),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag4;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub42==3){
				system("cls");
				printf("Enter answers of EVS: ");
				scanf("%c",&temp1);
				fgets(evs42,sizeof(evs42),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag4;}
		        else
		        system("cls");
		        goto frn;
			}
			else{
				system("cls");
				printf("Enter answers of MORAL SCIENCE: ");
				scanf("%c",&temp1);
				fgets(msc42,sizeof(msc42),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag4;}
		        else
		        system("cls");
		        goto frn;
			}
     }
	}   
	else{                                     //logout from class4 
		system("cls");
		goto frn;
	}
			break;
			case '5':system("cls"); 
			printf("class:%c",x);
			 goto pag5;
			 	 
			pag5:
	printf("1.View homework(including all subjects)\n2.View notes of all subjects\n3.Update homework answers\n\n");
	printf("4.Logout\n");
	printf("Enter choice: ");
	scanf("%d",&y5);
	if(y5==1){                                          //for homework of class 5
			system("cls");
		printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		printf("Enter subject code:");
	    scanf("%d",&h5);
	    if(h5==1){
	    system("cls");
	    printf("Homework of ENGLISH: %s",heg5);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag5;}
		else
		system("cls");
		goto frn;
		}
		else if(h5==2){
	    system("cls");
	    printf("Homework of MATHEMATICS: %s",hma5);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag5;}
		else
		system("cls");
		goto frn;
		}
		else if(h5==3){
	    system("cls");
	    printf("Homework of EVS: %s",hev5);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag5;}
		else
		system("cls");
		goto frn;
		}
		else {
	    system("cls");
	    printf("Homework of MORAL SCIENCE: %s",hmo5);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag5;}
		else
		system("cls");
		goto frn;
		}
	}
	else if(y5==2){                                    //for notes of class 5
		system("cls");
		printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
		printf("Enter subject code:");
	    scanf("%d",&n5);
	    if(n5==1){
	    system("cls");
	    printf("Notes of ENGLISH: %s",neg5);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag5;}
		else
		system("cls");
		goto frn;
		}
		else if(n5==2){
	    system("cls");
	    printf("Notes of MATHEMATICS: %s",nma5);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag5;}
		else
		system("cls");
		goto frn;
		}
		else if(n5==3){
	    system("cls");
	    printf("Notes of EVS: %s",nev5);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag5;}
		else
		system("cls");
		goto frn;
		}
		else {
	    system("cls");
	    printf("Note of MORAL SCIENCE: %s",nmo5);
		printf("\n\nPress 0 to go back or press 1 to logout...");
	    scanf("%d",&i);
	    if(i==0){
		system("cls");
		goto pag5;}
		else
		system("cls");
		goto frn;
		}
		
	}
	else if(y5==3){                                    //for uploading homework answers of class 5
			system("cls");
		printf("Enter roll number:");
		scanf("%d",&r2);
		if(r2==1)
		{   
		    system("cls");
			printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
			printf("Enter subject code: ");
			scanf("%d",&sub51);
			if(sub51==1){
				system("cls");
				printf("Enter answers of ENGLISH: ");
				scanf("%c",&temp1);
				fgets(eng51,sizeof(eng51),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag5;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub51==2){
				system("cls");
				printf("Enter answers of MATHEMATICS: ");
				scanf("%c",&temp1);
				fgets(mat51,sizeof(mat51),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag5;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub51==3){
				system("cls");
				printf("Enter answers of EVS: ");
				scanf("%c",&temp1);
				fgets(evs51,sizeof(evs51),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag5;}
		        else
		        system("cls");
		        goto frn;
			}
			else
			{   system("cls");
				printf("Enter answers of MORAL SCIENCE: ");
				scanf("%c",&temp1);
				fgets(msc51,sizeof(msc51),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag5;}
		        else
		        system("cls");
		        goto frn;
			}
		}
		if(r2==2){   system("cls");
				printf("1.English\n2.Mathematics\n3.EVS\n4.Moral Science\n");
			    printf("Enter subject code: ");
			    scanf("%d",&sub52);
			if(sub52==1){
				system("cls");
				printf("Enter answers of ENGLISH: ");
				scanf("%c",&temp1);
				fgets(eng52,sizeof(eng52),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag5;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub52==2){
				system("cls");
				printf("Enter answers of MATHEMATICS: ");
				scanf("%c",&temp1);
				fgets(mat52,sizeof(mat52),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag5;}
		        else
		        system("cls");
		        goto frn;
			}
			else if(sub52==3){
				system("cls");
				printf("Enter answers of EVS: ");
				scanf("%c",&temp1);
				fgets(evs52,sizeof(evs52),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag5;}
		        else
		        system("cls");
		        goto frn;
			}
			else{
				system("cls");
				printf("Enter answers of MORAL SCIENCE: ");
				scanf("%c",&temp1);
				fgets(msc52,sizeof(msc52),stdin);
				system("cls");
				printf("Submitted Sucessfully\n");
				printf("\n\nPress 0 to go back or press 1 to logout...");
	            scanf("%d",&i);
	            if(i==0){
		        system("cls");
		        goto pag5;}
		        else
		        system("cls");
		        goto frn;
			}
     }
	}   
	else{                                     //logout from class5 
		system("cls");
		goto frn;
	}
			break;
		}
	}
	if(c==4)                              //for closing the system
	return 0;
	else{                            //class notes
	printf(" Class:");
	scanf("%d",&cn);
	if(cn==1){system("cls");                //class notes of class1 
printf("\nNotes of English:%s\nNotes of Mathematics:%s\nNotes of EVS:%s\nNotes of Moral Science:%s\n",neg1,nma1,nev1,nmo1);
		printf("\n\nPress 1 to go back...\n");
		scanf("%d",&i);
		if(i==1){
		system("cls");
			goto frn;}
		
	}
	if(cn==2){system("cls");              //class notes of class2
printf("\nNotes of English:%s\nNotes of Mathematics:%s\nNotes of EVS:%s\nNotes of Moral Science:%s\n",neg2,nma2,nev2,nmo2);
		printf("\n\nPress 1 to go back...\n");
		scanf("%d",&i);
		if(i==1){
		system("cls");
			goto frn;}		
	}
	if(cn==3){system("cls");              //class notes of class3
printf("\nNotes of English:%s\nNotes of Mathematics:%s\nNotes of EVS:%s\nNotes of Moral Science:%s\n",neg3,nma3,nev3,nmo3);
		printf("\n\nPress 1 to go back...\n");
		scanf("%d",&i);
		if(i==1){
		system("cls");
			goto frn;}
		}
		if(cn==4){system("cls");              //class notes of class4
printf("\nNotes of English:%s\nNotes of Mathematics:%s\nNotes of EVS:%s\nNotes of Moral Science:%s\n",neg4,nma4,nev4,nmo4);
		printf("\n\nPress 1 to go back...\n");
		scanf("%d",&i);
		if(i==1){
		system("cls");
			goto frn;}
		}
		if(cn==5){system("cls");              //class notes of class5
printf("\nNotes of English:%s\nNotes of Mathematics:%s\nNotes of EVS:%s\nNotes of Moral Science:%s\n",neg5,nma5,nev5,nmo5);
		printf("\n\nPress 1 to go back...\n");
		scanf("%d",&i);
		if(i==1){
		system("cls");
			goto frn;}
		}
		
	}	
}

