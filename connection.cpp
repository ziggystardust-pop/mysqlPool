#include"connection.h"
#include"public.h"
Connection::Connection()
{
	m_conn = mysql_init(nullptr);
}
Connection::~Connection()
{
	if (m_conn != nullptr)mysql_close(m_conn);
}

bool Connection::connect(string ip,
	unsigned short port,
	string user,
	string passwd,
	string databasename)
{
	MYSQL* p = mysql_real_connect(m_conn,ip.c_str(),user.c_str(),
		passwd.c_str(),databasename.c_str(),port,nullptr,0);
	return p != nullptr;
}
bool Connection::update(string sql)
{
	if (mysql_query(m_conn,sql.c_str()))
	{
		LOG("¸üÐÂÊ§°Ü" + sql);
		return false;
	}
	return true;
}
MYSQL_RES* Connection::query(string sql)
{
	if (mysql_query(m_conn, sql.c_str()))
	{
		LOG("²éÑ¯Ê§°Ü" + sql);
		return nullptr;
	}
	return mysql_use_result(m_conn);
}
