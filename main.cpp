#include<iostream>
#include"connection.h"
using namespace std;

int main()
{
	Connection conn;
	string sql = "insert into user(name,age,sex) values('new1',20,'male');";
	conn.connect("127.0.0.1",3306,"root","123456","chat");
	conn.update(sql);
	return 0;
}