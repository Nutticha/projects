#include <iostream>
#include <string>
using namespace std;
void student_information (string student_name[10] , long student_id[10] , string student_faculty [10] , string student_branch[10],int student_id_count);
int main(){

	int student_id_count = 2;
	long student_id[10];
	student_id[0] = 100001;
	student_id[1] = 100002;
	
	string student_name[10];
	student_name[0] = "Panachai";
	student_name[1] = "Akaraphon";

	string student_faculty[10];
	student_faculty[0] = "IT";
	student_faculty[1] = "FITM";

	string student_branch[10];
	student_branch[0] = "IT";
	student_branch[1] = "INE";

	long book_id[10];
	book_id[0] = 123001;
	book_id[1] = 123002;

	string book_name[10];
	book_name[0] = "testing Programming";
	book_name[1] = "Intro to IT";

	string book_author[10];
	book_author[0] = "Teacher";
	book_author[1] = "Unknow";

	string book_publish[10];
	book_publish[0] = "thai";
	book_publish[1] = "English";

	int book_year[100];
	book_year[0] = 2554;
	book_year[1] = 2560;

	long lend_student_id[100];
	lend_student_id[0] = 100001;
	lend_student_id[1] = 100002;

	long lend_book_id[100];
	lend_book_id[0] = 123002;
	lend_book_id[1] = 123001;

	bool lend_check[100];
	lend_check[0] = false;
	lend_check[1] = true;

	cout << "========Main Program=========" <<endl;
	cout << "1 ) เพี่มข้อมูลนักศึกษา " << endl;
	cout << "2 ) เพี่มข้อมูลหนังสือ " << endl;
	cout << "3 ) ยืมหนังสือ " << endl;
	cout << "4 ) คืนหนังสือ " << endl;
	cout << "5 ) รายงาน " << endl;
	student_information (student_name,student_id,student_faculty , student_branch,student_id_count);
}
void student_information (string student_name[10] , long student_id[10] , string student_faculty [10] , string student_branch[10], int student_id_count)
{
  string name; 
  int id;
  string faculty; 
  string branch;  
  cout << "Enter Your name : ";
  cin  >> name;
  cout << "Enter Your student code : ";
  cin  >> id;
  cout << "Enter Your faculty :";
  cin  >> faculty;
  cout << "Enter Your branch : ";
  cin  >> branch;
  student_id_count++;
  student_name[student_id_count-1] = name;
  student_id[student_id_count-1] = id;
  student_faculty[student_id_count-1] = faculty;
  student_branch[student_id_count-1] = branch;
  for(int i = 0 ; i < student_id_count;i++){
	  cout << student_name[i] << endl;
	  cout << student_id[i] << endl;
  }
}
