//案例1
//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下：
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//学生的成员有姓名，考试分数，创建数组存放3名老师，通过函数给每个老师及所带的每个学生赋值
//最终打印出老师数据以及老师所带的学生的数据
#include <iostream>
#include <string>
using namespace std;

//定义结构体Student和Teacher
struct Student
{
	string name;	//学生姓名
	int score;		//考试分数
};
struct Teacher
{
	string name;	//老师姓名
	Student stu[5];	//5名学生的数组
};

void Input_Teacher_and_Student(Teacher* t, int i) {
	cout << "请输入老师 " << i << " 的姓名: ";
	cin >> t->name;

	cout << "----请依次输入老师" << i << "的学生的各项信息----" << endl;

	for (int j = 0; j < 5; j++) {
		cout << "请分别输入学生" << j + 1 << "的姓名和分数: ";
		cin >> t->stu[j].name >> t->stu[j].score;
		cout << endl;
	}
}

void Print_Teacher_and_Student(const Teacher* t, int i) {
	cout << "老师" << i << "的姓名为: " << t->name << endl;
	cout << endl;
	cout << "老师" << i << "的学生分别为: " << endl;
	for (int j = 0; j < 5; j++) {
		cout << t->stu[j].name << "\t分数为: " << t->stu[j].score << "分" << endl;
	}
	cout << endl;
}

int main()
{
	Teacher t1, t2, t3;
	//初始化t1, t2, t3
	for (int i = 1; i <= 3; i++) {
		switch (i) {
		case 1:
			Input_Teacher_and_Student(&t1, i);
			break;
		case 2:
			Input_Teacher_and_Student(&t2, i);
			break;
		case 3:
			Input_Teacher_and_Student(&t3, i);
		}
		cout << endl;
	}

	cout << "-----------------------------------------";

	//输出最终的t1, t2, t3的结果
	for (int i = 1; i <= 3; i++) {
		switch (i) {
		case 1:
			Print_Teacher_and_Student(&t1, i);
			break;
		case 2:
			Print_Teacher_and_Student(&t2, i);
			break;
		case 3:
			Print_Teacher_and_Student(&t3, i);
		}
		cout << endl;
	}

	return 0;
}
