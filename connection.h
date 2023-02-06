#pragma once
#include<mysql.h>
#include<string>
//MySql操作
using std::string;
class Connection
{
public:
	Connection();
	~Connection();
	bool connect(string ip,
		unsigned short port,
		string user,
		string passwd,
		string databasename);//负责数据库连接

	bool update(string sql);//负责insert，delete，update

	MYSQL_RES* query(string sql);//负责查询操作 select

private:
	MYSQL* m_conn;
};