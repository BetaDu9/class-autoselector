#include <iostream>
#include <string>
using namespace std;
#include <fstream> 
#include"Class12.h"
#include"Class.h"
#include"Class13.h"
#include"Class14.h"
#include<ctime>


//�˵�
void showMenu(){       
	cout<<"     ��ӭʹ�ð༶ѡ��ϵͳ   "<<endl;
	cout<<"                            "<<endl;
	cout<<"       Ӣ��*��������ʦ      "<<endl;
	cout<<"        12��,13��,14��      "<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"       0.�˳�ѡ��ϵͳ       "<<endl;
	cout<<"                            "<<endl;
	cout<<"       1.��ʾѧ����Ϣ       "<<endl;
	cout<<"                            "<<endl;
	cout<<"       2.�����ȡѧ��       "<<endl;
	cout<<"----------------------------"<<endl;
	}


//��ʾѧ��
void ShowStu(){
	int num=0;
	cout<<"������༶��"<<endl;
	cin>>num;
//12��
	if(num==12){
	ifstream ifs;
	ifs.open("Class12.txt",ios::in);
	if(!ifs.is_open()){
	    cout<<"�ļ���ʧ�ܣ�"<<endl;
	}
	
	  //����ѧ����Ϣ
	   else{
	int cl_num;
    string name;
	int group;
	int ig_num;

	while(ifs>>cl_num&&ifs>>name&& ifs>>group && ifs>>ig_num){
		
		cout<<"ѧ����ţ�"<<cl_num<<"\tѧ�����֣�"<<name<<"\tѧ������С�飺"<<group<<" "<<"\tѧ�����ڱ�ţ�"<<ig_num<<endl;
	
	 }
	   }
	ifs.close();
		  
		   }

	//13��
	if(num==13){
	ifstream ifs;
	ifs.open("Class13.txt",ios::in);
	if(!ifs.is_open()){
	    cout<<"�ļ���ʧ�ܣ�"<<endl;
	}
	
	  //����ѧ����Ϣ
	   else{
	int cl_num;
    string name;
	int group;
	int ig_num;

	while(ifs>>cl_num&&ifs>>name&& ifs>>group && ifs>>ig_num){
		
		cout<<"ѧ����ţ�"<<cl_num<<"\tѧ�����֣�"<<name<<" "<<"\tѧ������С�飺"<<group<<" "<<"\tѧ�����ڱ�ţ�"<<ig_num<<endl;
	
	 }
	   }
	ifs.close();
		  
		   }

	//14��
	if(num==14){
	ifstream ifs;
	ifs.open("Class14.txt",ios::in);
	if(!ifs.is_open()){
	    cout<<"�ļ���ʧ�ܣ�"<<endl;
	}
	
	   else{
	int cl_num;
    string name;
	int group;
	int ig_num;

	while(ifs>>cl_num&&ifs>>name&& ifs>>group && ifs>>ig_num){
		
		cout<<"ѧ����ţ�"<<cl_num<<"\tѧ�����֣�"<<name<<" "<<"\tѧ������С�飺"<<group<<" "<<"\tѧ�����ڱ�ţ�"<<ig_num<<endl;
	
	 }
	   }
	ifs.close();
		  
		   }
	else if((num!=12)&&(num!=13)&&(num!=14) ){
	cout<<"�޴˰༶��"<<endl;
	}

	system("pause");
	system("cls");
}



//���ѡ��ѧ��
void SelectStu(){
	int num=0;
	cout<<"������༶��"<<endl;
	cin>>num;	

//14��
if(num==14){
int w_select;
	cout<<"��ѡ�񰴰༶��ȡ���ǰ�С���ȡ��"<<endl;
	cout<<"1. ���༶��ȡ"<<endl;
    cout<<"2. ��С���ȡ"<<endl;
	cin>>w_select;
	  //14�ఴ�༶��ȡ
	if(w_select==1){
	  int num1=0;
	  cout<<"��ѡ���ȡ������"<<endl;
	  cin>>num1;
	     if(num1<=41){
			 int random[41];
			for(int i=0;i<num1;i++){
				random[i]=rand()%41;
				for(int j=0;j<i;j++){
					if(random[i]==random[j]){
					random[i]=rand()%41;
					j=-1;
					}
				}
		  cout<<i+1<<"��"<<class14[random[i]].name<<endl;
			}
		 }
		 else if(num1>41){
		 cout<<"�����༶������"<<endl;
		 }

	}
	
	//13�ఴС���ȡ
	if(w_select==2){
	   int num2=0;
	  cout<<"��ѡ���ȡ������"<<endl;
	  cin>>num2;
	     if(num2<=5){
			 //ÿ��С�������ȡ�����������
			 int team1[5];
			 int team2[5];
			 int team3[5];
			 int team4[5];
			 int team5[5];
			 int team6[5];
			 int team7[5];

			 //��һ��
			 for(int i=0;i<num2;i++){
				team1[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team1[i]==team1[j]){
					team1[i]=rand()%6;
                    j=-1;
					}	 
			   }
			   cout<<"Apple��"<<"\t"<<"\t"<<class14_Apple[team1[i]].name<<endl;
				}
			 cout<<endl;
			 //��er��
			 for(int i=0;i<num2;i++){
				team2[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team2[i]==team2[j]){
					team2[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Grapes��"<<"\t"<<class14_Grapes[team2[i]].name<<endl;
				}
			 cout<<endl;
			 //������
			 for(int i=0;i<num2;i++){
				team3[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team3[i]==team3[j]){
					team3[i]=rand()%6;
                    j=-1;
					}	 
			   }
			 cout<<"Orange��"<<"\t"<<class14_Orange[team3[i]].name<<endl;
				}
			 cout<<endl;
			 //������
			  for(int i=0;i<num2;i++){
				team4[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team4[i]==team4[j]){
					team4[i]=rand()%6;
                    j=-1;
					}	 
			   }
			cout<<"Pear��"<<"\t"<<"\t"<<class14_Pear[team4[i]].name<<endl;
				}
			  cout<<endl;
			  //������
            for(int i=0;i<num2;i++){
				team5[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team5[i]==team5[j]){
					team5[i]=rand()%6;
                    j=-1;
					}	 
			   }
			 cout<<"Pineapple��"<<"\t"<<class14_Pineapple[team5[i]].name<<endl;
				}
			cout<<endl;
			//������
			for(int i=0;i<num2;i++){
				 srand((unsigned int)time(NULL));
				team6[i]=rand()%6;//����0��4
			   for(int j=0;j<i;j++){
					if(team6[i]==team6[j]){
					team6[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Strawberry��"<<"\t"<<class14_Strawberry[team6[i]].name<<endl;
				}
				cout<<endl;
		//���� ��
			for(int i=0;i<num2;i++){
				 srand((unsigned int)time(NULL));
				team7[i]=rand()%5;//����0��4
			   for(int j=0;j<i;j++){
					if(team7[i]==team7[j]){
					team7[i]=rand()%5;
                    j=-1;
					}	 
			   }
			  cout<<"Watermelon��"<<"\t"<<class14_Watermelon[team7[i]].name<<endl;
				}
			cout<<endl;
		 }
		 else if(num2>5){
		 cout<<"����С��������"<<endl;
		
		 }
	}
}

//12��
if(num==12){
int w_select;
	cout<<"��ѡ�񰴰༶��ȡ���ǰ�С���ȡ��"<<endl;
	cout<<"1. ���༶��ȡ"<<endl;
    cout<<"2. ��С���ȡ"<<endl;
	cin>>w_select;
	  //12�ఴ�༶��ȡ
	if(w_select==1){
	  int num1=0;
	  cout<<"��ѡ���ȡ������"<<endl;
	  cin>>num1;
	     if(num1<=50){
			 int random[50];
			for(int i=0;i<num1;i++){
				random[i]=rand()%50;
				for(int j=0;j<i;j++){
					if(random[i]==random[j]){
					random[i]=rand()%50;
					j=-1;
					}
				}
		  cout<<i+1<<"��"<<class12[random[i]].name<<endl;
			}
		 }

		 else if(num1>50){
		 cout<<"�����༶������"<<endl;
		 }

	}
	
	//12�ఴС���ȡ
	if(w_select==2){
	   int num2=0;
	  cout<<"��ѡ���ȡ������"<<endl;
	  cin>>num2;
	     if(num2<=5){
			 //ÿ��С�������ȡ�����������
			 int team1[5];
			 int team2[5];
			 int team3[5];
			 int team4[5];
			 int team5[5];
			 int team6[5];
			 int team7[5];
			 int team8[5];
			 int team9[5];

			 //��һ��
			 for(int i=0;i<num2;i++){
				team1[i]=rand()%5;//����0��5
			   for(int j=0;j<i;j++){
					if(team1[i]==team1[j]){
					team1[i]=rand()%5;
                    j=-1;
					}	 
			   }
			   cout<<"Apple��"<<"\t"<<"\t"<<class12_Apple[team1[i]].name<<endl;
				}
			 cout<<endl;
			
			 //�ڶ���
			 for(int i=0;i<num2;i++){
				team2[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team2[i]==team2[j]){
					team2[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Banana��"<<"\t"<<class12_Banana[team2[i]].name<<endl;
				}
			 cout<<endl;

			 //������
			 for(int i=0;i<num2;i++){
				team3[i]=rand()%5;//����0��5
			   for(int j=0;j<i;j++){
					if(team3[i]==team3[j]){
					team3[i]=rand()%5;
                    j=-1;
					}	 
			   }
			 cout<<"Cherry��"<<"\t"<<class12_Cherry[team3[i]].name<<endl;
				}
			 cout<<endl;
			 //������
			  for(int i=0;i<num2;i++){
				team4[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team4[i]==team4[j]){
					team4[i]=rand()%6;
                    j=-1;
					}	 
			   }
			cout<<"Grapes��"<<"\t"<<class12_Grapes[team4[i]].name<<endl;
				}
			  cout<<endl;
			  //������
            for(int i=0;i<num2;i++){
				team5[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team5[i]==team5[j]){
					team5[i]=rand()%6;
                    j=-1;
					}	 
			   }
			 cout<<"Orange��"<<"\t"<<class12_Orange[team5[i]].name<<endl;
				}
			cout<<endl;
			//������
			for(int i=0;i<num2;i++){
				team6[i]=rand()%5;//����0��4
			   for(int j=0;j<i;j++){
					if(team6[i]==team6[j]){
					team6[i]=rand()%5;
                    j=-1;
					}	 
			   }
			  cout<<"Pear��"<<"\t"<<"\t"<<class12_Pear[team6[i]].name<<endl;
				}
				cout<<endl;
		//������
			for(int i=0;i<num2;i++){
				 srand((unsigned int)time(NULL));
				team7[i]=rand()%6;//����0��4
			   for(int j=0;j<i;j++){
					if(team7[i]==team7[j]){
					team7[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Pineapple��"<<"\t"<<class12_Pineapple[team7[i]].name<<endl;
				}
			cout<<endl;
			//�ڰ���
			for(int i=0;i<num2;i++){
				 srand((unsigned int)time(NULL));
				team8[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team8[i]==team8[j]){
					team8[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Strawberry��"<<"\t"<<class12_Strawberry[team8[i]].name<<endl;
				}
			cout<<endl;
			//�ھ���
			for(int i=0;i<num2;i++){
				 srand((unsigned int)time(NULL));
				team9[i]=rand()%5;//����0��5
			   for(int j=0;j<i;j++){
					if(team9[i]==team9[j]){
					team9[i]=rand()%5;
                    j=-1;
					}	 
			   }
			  cout<<"Watermelon��"<<"\t"<<class12_Watermelon[team9[i]].name<<endl;
				}
			cout<<endl;
		 }
		 else if(num2>5){
		 cout<<"����С��������"<<endl;
		
		 }
	}
}

//13��
	if(num==13){
	int w_select;
	cout<<"��ѡ�񰴰༶��ȡ���ǰ�С���ȡ��"<<endl;
	cout<<"1. ���༶��ȡ"<<endl;
    cout<<"2. ��С���ȡ"<<endl;
	cin>>w_select;
	  //13�ఴ�༶��ȡ
	if(w_select==1){
	  int num1=0;
	  cout<<"��ѡ���ȡ������"<<endl;
	  cin>>num1;
	     if(num1<=43){
			 srand((unsigned int)time(NULL));
			 int random[43];
			for(int i=0;i<num1;i++){
				random[i]=rand()%43;
				for(int j=0;j<i;j++){
					if(random[i]==random[j]){
					random[i]=rand()%43;
					j=-1;
					}
				}
		  cout<<i+1<<"��"<<class13[random[i]].name<<endl;
			}
		 }
		 else{
		 cout<<"�����༶������"<<endl;
		 }

	}
	
	//13�ఴС���ȡ
	if(w_select==2){
	   int num2=0;
	  cout<<"��ѡ���ȡ������"<<endl;
	  cin>>num2;
	     if(num2<=5){
			 //ÿ��С�������ȡ�����������
			 int team1[5];
			 int team2[5];
			 int team3[5];
			 int team4[5];
			 int team5[5];
			 int team6[5];
			 int team7[5];

			 //��һ��
			 for(int i=0;i<num2;i++){
				
				team1[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team1[i]==team1[j]){
					team1[i]=rand()%6;
                    j=-1;
					}	 
			   }
			   cout<<"Apple��"<<"\t"<<"\t"<<class13_Apple[team1[i]].name<<endl;
				}
			 cout<<endl;
			 //��er��
			 for(int i=0;i<num2;i++){
				
				team2[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team2[i]==team2[j]){
					team2[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Banana��"<<"\t"<<class13_Banana[team2[i]].name<<endl;
				}
			 cout<<endl;
			 //������
			 for(int i=0;i<num2;i++){
				
				team3[i]=rand()%7;//����0��5
			   for(int j=0;j<i;j++){
					if(team3[i]==team3[j]){
					team3[i]=rand()%7;
                    j=-1;
					}	 
			   }
			 cout<<"Cherry��"<<"\t"<<class13_Cherry[team3[i]].name<<endl;
				}
			 cout<<endl;
			 //������
			  for(int i=0;i<num2;i++){
				 
				team4[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team4[i]==team4[j]){
					team4[i]=rand()%6;
                    j=-1;
					}	 
			   }
			cout<<"Grapes��"<<"\t"<<class13_Grapes[team4[i]].name<<endl;
				}
			  cout<<endl;
			  //������
            for(int i=0;i<num2;i++){
				
				team5[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team5[i]==team5[j]){
					team5[i]=rand()%6;
                    j=-1;
					}	 
			   }
			 cout<<"Pear��"<<"\t"<<"\t"<<class13_Pear[team5[i]].name<<endl;
				}
			cout<<endl;
			//������
			for(int i=0;i<num2;i++){
				
				team6[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team6[i]==team6[j]){
					team6[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Strawberry��"<<"\t"<<class13_Strawberry[team6[i]].name<<endl;
				}
			cout<<endl;
		//������
			for(int i=0;i<num2;i++){
			
				team7[i]=rand()%6;//����0��5
			   for(int j=0;j<i;j++){
					if(team7[i]==team6[j]){
					team7[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Watermelon��"<<"\t"<<class13_Watermelon[team7[i]].name<<endl;
			
				}
			cout<<endl;
		 }
		 else if(num2>5){
		 cout<<"����С��������"<<endl;
		
		 }
	}
	}
	//13�����
	else if((num!=12)&&(num!=13)&&(num!=14) ){
	cout<<"�޴˰༶��"<<endl;
	}
system("pause");
	system("cls");

}


int main(){
	 srand((unsigned int)time(NULL));
	int select;

	 while(true){
	  showMenu();
	   cin>>select;

	   switch(select){
	   case 0:
		   cout<<"��ӭ�´�ʹ�ã�"<<endl;
		   system("pause");
		   return 0;
		   break;
	   case 1:ShowStu();
		   break;
	   case 2:SelectStu();
		   break;
	   default :system("cls");
		   break;
	   
	   }
	 }
 system("pause");
		   return 0;
}