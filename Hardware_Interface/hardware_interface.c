/* *Copyright(C), Haijie Lee. 2019. AllRightsReserved.
	*FileName:   硬件功能接口 模块源文件.
	*Author:  Haijie Lee.
	*Version:  1.5.
	*Date:  2019.01.22.
	*Description:  实现当前单片机的硬件驱动功能，向上层提供硬件接口。
							此文件的内容应由用户补充。
	*Others:  无。
*/
#include "hardware_interface.h"

#include <stdlib.h>

uint16_t Write_SerialPort( uint8_t *input_buff, uint16_t data_length )
{
	/*  在此处编写单片机的（连接NB模组的）串口的驱动——写入数据  */ 
	;
	return data_length;
}


uint16_t Read_SerialPort( uint8_t **output_buff, uint16_t *buff_size )
{ 
	static uint8_t receive_buff[1024];	// 由此函数提供数据缓冲区
	size_t i, *pos;
	
	if( buff_size != NULL)
		*buff_size = 1024;		// 向外输出缓冲区的大小，方便函数外部的安全性检查
	if( output_buff != NULL )
		*output_buff = receive_buff;	// 向外输出缓冲区数据
	pos = (size_t *)receive_buff;	// 使用系统长度的指针，提高程序的效率
	for( i=0; i<1024/sizeof(size_t); pos[i++]=0 );	// 接受数据之前，先清空缓冲区
	
	/*  在此处编写单片机的（连接NB模组的）串口的驱动——读出数据  */
	;
}


void TimerDelay_ms( uint32_t time )
{
	/*  在此处编写单片机的（连接NB模组的）定时器的驱动  */ 
	;
}
