//案例2
//设计一个英雄结构体，包括成员姓名，年龄，性别；
//创建结构体数组，数组中存放5名英雄
//通过冒泡排序算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果
//五名英雄的信息如下：
//刘备 23 男
//关羽 22 男
//张飞 20 男
//赵云 21 男
//貂蝉 19 女
#include <iostream>
#include <string>
using namespace std;

//定义英雄结构体
struct Hero
{
	string name;
	int age;
	string sex;
};

int main()
{
	Hero heroes[5] = {
		{ "刘备", 23, "男" },
		{ "关羽", 22, "男" },
		{ "张飞", 20, "男" },
		{ "赵云", 21, "男" },
		{ "貂蝉", 19, "女" },
	};
	
	//输出排序前的heroes数组
	cout << "冒泡排序前的英雄如下:" << endl;
	for (int i = 0; i < 5; i++)
		cout << heroes[i].name << ' '
			<< heroes[i].age << "岁 "
			<< heroes[i].sex << endl;

	//按年龄冒泡排序
	for (int i = 0; i < 5 - 1; i++) {
		for (int j = 1; j < 5 - i; j++) {
			if (heroes[j - 1].age > heroes[j].age) {
				Hero temp = heroes[j - 1];
				heroes[j - 1] = heroes[j];
				heroes[j] = temp;
			}
		}
	}

	//输出排序后的heroes数组
	cout << "\n冒泡排序后的英雄如下:" << endl;
	for (int i = 0; i < 5; i++)
		cout << heroes[i].name << ' '
			<< heroes[i].age << "岁 "
			<< heroes[i].sex << endl;

	return 0;
}
