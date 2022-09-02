#include <iostream>
#include <string>
using namespace std;
#include <fstream> 
#include"Class12.h"
#include"Class.h"
#include"Class13.h"
#include"Class14.h"
#include<ctime>


//菜单
void showMenu(){       
	cout<<"     欢迎使用班级选人系统   "<<endl;
	cout<<"                            "<<endl;
	cout<<"       英语*徐敏超老师      "<<endl;
	cout<<"        12班,13班,14班      "<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"       0.退出选人系统       "<<endl;
	cout<<"                            "<<endl;
	cout<<"       1.显示学生信息       "<<endl;
	cout<<"                            "<<endl;
	cout<<"       2.随机抽取学生       "<<endl;
	cout<<"----------------------------"<<endl;
	}


//显示学生
void ShowStu(){
	int num=0;
	cout<<"请输入班级："<<endl;
	cin>>num;
//12班
	if(num==12){
	ifstream ifs;
	ifs.open("Class12.txt",ios::in);
	if(!ifs.is_open()){
	    cout<<"文件打开失败！"<<endl;
	}
	
	  //存在学生信息
	   else{
	int cl_num;
    string name;
	int group;
	int ig_num;

	while(ifs>>cl_num&&ifs>>name&& ifs>>group && ifs>>ig_num){
		
		cout<<"学生编号："<<cl_num<<"\t学生名字："<<name<<"\t学生所在小组："<<group<<" "<<"\t学生组内编号："<<ig_num<<endl;
	
	 }
	   }
	ifs.close();
		  
		   }

	//13班
	if(num==13){
	ifstream ifs;
	ifs.open("Class13.txt",ios::in);
	if(!ifs.is_open()){
	    cout<<"文件打开失败！"<<endl;
	}
	
	  //存在学生信息
	   else{
	int cl_num;
    string name;
	int group;
	int ig_num;

	while(ifs>>cl_num&&ifs>>name&& ifs>>group && ifs>>ig_num){
		
		cout<<"学生编号："<<cl_num<<"\t学生名字："<<name<<" "<<"\t学生所在小组："<<group<<" "<<"\t学生组内编号："<<ig_num<<endl;
	
	 }
	   }
	ifs.close();
		  
		   }

	//14班
	if(num==14){
	ifstream ifs;
	ifs.open("Class14.txt",ios::in);
	if(!ifs.is_open()){
	    cout<<"文件打开失败！"<<endl;
	}
	
	   else{
	int cl_num;
    string name;
	int group;
	int ig_num;

	while(ifs>>cl_num&&ifs>>name&& ifs>>group && ifs>>ig_num){
		
		cout<<"学生编号："<<cl_num<<"\t学生名字："<<name<<" "<<"\t学生所在小组："<<group<<" "<<"\t学生组内编号："<<ig_num<<endl;
	
	 }
	   }
	ifs.close();
		  
		   }
	else if((num!=12)&&(num!=13)&&(num!=14) ){
	cout<<"无此班级！"<<endl;
	}

	system("pause");
	system("cls");
}



//随机选择学生
void SelectStu(){
	int num=0;
	cout<<"请输入班级："<<endl;
	cin>>num;	

//14班
if(num==14){
int w_select;
	cout<<"请选择按班级抽取还是按小组抽取："<<endl;
	cout<<"1. 按班级抽取"<<endl;
    cout<<"2. 按小组抽取"<<endl;
	cin>>w_select;
	  //14班按班级抽取
	if(w_select==1){
	  int num1=0;
	  cout<<"请选择抽取人数："<<endl;
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
		  cout<<i+1<<"："<<class14[random[i]].name<<endl;
			}
		 }
		 else if(num1>41){
		 cout<<"超出班级人数！"<<endl;
		 }

	}
	
	//13班按小组抽取
	if(w_select==2){
	   int num2=0;
	  cout<<"请选择抽取人数："<<endl;
	  cin>>num2;
	     if(num2<=5){
			 //每个小组随机抽取的数组成数组
			 int team1[5];
			 int team2[5];
			 int team3[5];
			 int team4[5];
			 int team5[5];
			 int team6[5];
			 int team7[5];

			 //第一组
			 for(int i=0;i<num2;i++){
				team1[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team1[i]==team1[j]){
					team1[i]=rand()%6;
                    j=-1;
					}	 
			   }
			   cout<<"Apple："<<"\t"<<"\t"<<class14_Apple[team1[i]].name<<endl;
				}
			 cout<<endl;
			 //第er组
			 for(int i=0;i<num2;i++){
				team2[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team2[i]==team2[j]){
					team2[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Grapes："<<"\t"<<class14_Grapes[team2[i]].name<<endl;
				}
			 cout<<endl;
			 //第三组
			 for(int i=0;i<num2;i++){
				team3[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team3[i]==team3[j]){
					team3[i]=rand()%6;
                    j=-1;
					}	 
			   }
			 cout<<"Orange："<<"\t"<<class14_Orange[team3[i]].name<<endl;
				}
			 cout<<endl;
			 //第四组
			  for(int i=0;i<num2;i++){
				team4[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team4[i]==team4[j]){
					team4[i]=rand()%6;
                    j=-1;
					}	 
			   }
			cout<<"Pear："<<"\t"<<"\t"<<class14_Pear[team4[i]].name<<endl;
				}
			  cout<<endl;
			  //第五组
            for(int i=0;i<num2;i++){
				team5[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team5[i]==team5[j]){
					team5[i]=rand()%6;
                    j=-1;
					}	 
			   }
			 cout<<"Pineapple："<<"\t"<<class14_Pineapple[team5[i]].name<<endl;
				}
			cout<<endl;
			//第六组
			for(int i=0;i<num2;i++){
				 srand((unsigned int)time(NULL));
				team6[i]=rand()%6;//生成0到4
			   for(int j=0;j<i;j++){
					if(team6[i]==team6[j]){
					team6[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Strawberry："<<"\t"<<class14_Strawberry[team6[i]].name<<endl;
				}
				cout<<endl;
		//第七 组
			for(int i=0;i<num2;i++){
				 srand((unsigned int)time(NULL));
				team7[i]=rand()%5;//生成0到4
			   for(int j=0;j<i;j++){
					if(team7[i]==team7[j]){
					team7[i]=rand()%5;
                    j=-1;
					}	 
			   }
			  cout<<"Watermelon："<<"\t"<<class14_Watermelon[team7[i]].name<<endl;
				}
			cout<<endl;
		 }
		 else if(num2>5){
		 cout<<"超出小组人数！"<<endl;
		
		 }
	}
}

//12班
if(num==12){
int w_select;
	cout<<"请选择按班级抽取还是按小组抽取："<<endl;
	cout<<"1. 按班级抽取"<<endl;
    cout<<"2. 按小组抽取"<<endl;
	cin>>w_select;
	  //12班按班级抽取
	if(w_select==1){
	  int num1=0;
	  cout<<"请选择抽取人数："<<endl;
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
		  cout<<i+1<<"："<<class12[random[i]].name<<endl;
			}
		 }

		 else if(num1>50){
		 cout<<"超出班级人数！"<<endl;
		 }

	}
	
	//12班按小组抽取
	if(w_select==2){
	   int num2=0;
	  cout<<"请选择抽取人数："<<endl;
	  cin>>num2;
	     if(num2<=5){
			 //每个小组随机抽取的数组成数组
			 int team1[5];
			 int team2[5];
			 int team3[5];
			 int team4[5];
			 int team5[5];
			 int team6[5];
			 int team7[5];
			 int team8[5];
			 int team9[5];

			 //第一组
			 for(int i=0;i<num2;i++){
				team1[i]=rand()%5;//生成0到5
			   for(int j=0;j<i;j++){
					if(team1[i]==team1[j]){
					team1[i]=rand()%5;
                    j=-1;
					}	 
			   }
			   cout<<"Apple："<<"\t"<<"\t"<<class12_Apple[team1[i]].name<<endl;
				}
			 cout<<endl;
			
			 //第二组
			 for(int i=0;i<num2;i++){
				team2[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team2[i]==team2[j]){
					team2[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Banana："<<"\t"<<class12_Banana[team2[i]].name<<endl;
				}
			 cout<<endl;

			 //第三组
			 for(int i=0;i<num2;i++){
				team3[i]=rand()%5;//生成0到5
			   for(int j=0;j<i;j++){
					if(team3[i]==team3[j]){
					team3[i]=rand()%5;
                    j=-1;
					}	 
			   }
			 cout<<"Cherry："<<"\t"<<class12_Cherry[team3[i]].name<<endl;
				}
			 cout<<endl;
			 //第四组
			  for(int i=0;i<num2;i++){
				team4[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team4[i]==team4[j]){
					team4[i]=rand()%6;
                    j=-1;
					}	 
			   }
			cout<<"Grapes："<<"\t"<<class12_Grapes[team4[i]].name<<endl;
				}
			  cout<<endl;
			  //第五组
            for(int i=0;i<num2;i++){
				team5[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team5[i]==team5[j]){
					team5[i]=rand()%6;
                    j=-1;
					}	 
			   }
			 cout<<"Orange："<<"\t"<<class12_Orange[team5[i]].name<<endl;
				}
			cout<<endl;
			//第六组
			for(int i=0;i<num2;i++){
				team6[i]=rand()%5;//生成0到4
			   for(int j=0;j<i;j++){
					if(team6[i]==team6[j]){
					team6[i]=rand()%5;
                    j=-1;
					}	 
			   }
			  cout<<"Pear："<<"\t"<<"\t"<<class12_Pear[team6[i]].name<<endl;
				}
				cout<<endl;
		//第七组
			for(int i=0;i<num2;i++){
				 srand((unsigned int)time(NULL));
				team7[i]=rand()%6;//生成0到4
			   for(int j=0;j<i;j++){
					if(team7[i]==team7[j]){
					team7[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Pineapple："<<"\t"<<class12_Pineapple[team7[i]].name<<endl;
				}
			cout<<endl;
			//第八组
			for(int i=0;i<num2;i++){
				 srand((unsigned int)time(NULL));
				team8[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team8[i]==team8[j]){
					team8[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Strawberry："<<"\t"<<class12_Strawberry[team8[i]].name<<endl;
				}
			cout<<endl;
			//第九组
			for(int i=0;i<num2;i++){
				 srand((unsigned int)time(NULL));
				team9[i]=rand()%5;//生成0到5
			   for(int j=0;j<i;j++){
					if(team9[i]==team9[j]){
					team9[i]=rand()%5;
                    j=-1;
					}	 
			   }
			  cout<<"Watermelon："<<"\t"<<class12_Watermelon[team9[i]].name<<endl;
				}
			cout<<endl;
		 }
		 else if(num2>5){
		 cout<<"超出小组人数！"<<endl;
		
		 }
	}
}

//13班
	if(num==13){
	int w_select;
	cout<<"请选择按班级抽取还是按小组抽取："<<endl;
	cout<<"1. 按班级抽取"<<endl;
    cout<<"2. 按小组抽取"<<endl;
	cin>>w_select;
	  //13班按班级抽取
	if(w_select==1){
	  int num1=0;
	  cout<<"请选择抽取人数："<<endl;
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
		  cout<<i+1<<"："<<class13[random[i]].name<<endl;
			}
		 }
		 else{
		 cout<<"超出班级人数！"<<endl;
		 }

	}
	
	//13班按小组抽取
	if(w_select==2){
	   int num2=0;
	  cout<<"请选择抽取人数："<<endl;
	  cin>>num2;
	     if(num2<=5){
			 //每个小组随机抽取的数组成数组
			 int team1[5];
			 int team2[5];
			 int team3[5];
			 int team4[5];
			 int team5[5];
			 int team6[5];
			 int team7[5];

			 //第一组
			 for(int i=0;i<num2;i++){
				
				team1[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team1[i]==team1[j]){
					team1[i]=rand()%6;
                    j=-1;
					}	 
			   }
			   cout<<"Apple："<<"\t"<<"\t"<<class13_Apple[team1[i]].name<<endl;
				}
			 cout<<endl;
			 //第er组
			 for(int i=0;i<num2;i++){
				
				team2[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team2[i]==team2[j]){
					team2[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Banana："<<"\t"<<class13_Banana[team2[i]].name<<endl;
				}
			 cout<<endl;
			 //第三组
			 for(int i=0;i<num2;i++){
				
				team3[i]=rand()%7;//生成0到5
			   for(int j=0;j<i;j++){
					if(team3[i]==team3[j]){
					team3[i]=rand()%7;
                    j=-1;
					}	 
			   }
			 cout<<"Cherry："<<"\t"<<class13_Cherry[team3[i]].name<<endl;
				}
			 cout<<endl;
			 //第四组
			  for(int i=0;i<num2;i++){
				 
				team4[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team4[i]==team4[j]){
					team4[i]=rand()%6;
                    j=-1;
					}	 
			   }
			cout<<"Grapes："<<"\t"<<class13_Grapes[team4[i]].name<<endl;
				}
			  cout<<endl;
			  //第五组
            for(int i=0;i<num2;i++){
				
				team5[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team5[i]==team5[j]){
					team5[i]=rand()%6;
                    j=-1;
					}	 
			   }
			 cout<<"Pear："<<"\t"<<"\t"<<class13_Pear[team5[i]].name<<endl;
				}
			cout<<endl;
			//第六组
			for(int i=0;i<num2;i++){
				
				team6[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team6[i]==team6[j]){
					team6[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Strawberry："<<"\t"<<class13_Strawberry[team6[i]].name<<endl;
				}
			cout<<endl;
		//第七组
			for(int i=0;i<num2;i++){
			
				team7[i]=rand()%6;//生成0到5
			   for(int j=0;j<i;j++){
					if(team7[i]==team6[j]){
					team7[i]=rand()%6;
                    j=-1;
					}	 
			   }
			  cout<<"Watermelon："<<"\t"<<class13_Watermelon[team7[i]].name<<endl;
			
				}
			cout<<endl;
		 }
		 else if(num2>5){
		 cout<<"超出小组人数！"<<endl;
		
		 }
	}
	}
	//13班结束
	else if((num!=12)&&(num!=13)&&(num!=14) ){
	cout<<"无此班级！"<<endl;
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
		   cout<<"欢迎下次使用！"<<endl;
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