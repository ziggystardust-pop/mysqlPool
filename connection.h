#pragma once
#include<mysql.h>
#include<string>
//MySql����
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
		string databasename);//�������ݿ�����

	bool update(string sql);//����insert��delete��update

	MYSQL_RES* query(string sql);//�����ѯ���� select

private:
	MYSQL* m_conn;
};