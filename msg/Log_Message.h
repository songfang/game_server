/**
 * struct Log_Message description
 *
 * [This file was auto-generated. Please Do not edit]
 *
 */

#ifndef LOG_MESSAGE_H_
#define LOG_MESSAGE_H_

#include "Block_Buffer.h"
#include "Msg_Struct.h"


#include "Public_Struct.h"


/*

	后台MySQL数据库插入测试
*/
struct MSG_180000 {

	int32_t id;

	std::string name;

	MSG_180000(void);
	void serialize(Block_Buffer &buffer) const;
	int deserialize(Block_Buffer &buffer);
	void reset(void);
};
/*

	后台登录退出流水
*/
struct MSG_180001 {

	int64_t role_id;/*角色id*/

	std::string role_name;/*角色名*/

	std::string account;/*账号*/

	uint16_t level;/*等级*/

	std::string client_ip;/*客户端IP*/

	uint32_t login_time;/*登录时间戳*/

	uint32_t logout_time;/*退出时间戳*/

	uint32_t online_time;/*在线时长*/

	MSG_180001(void);
	void serialize(Block_Buffer &buffer) const;
	int deserialize(Block_Buffer &buffer);
	void reset(void);
};


#endif
