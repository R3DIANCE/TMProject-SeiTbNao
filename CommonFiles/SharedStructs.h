 
#pragma once

#ifndef _SHAREDSTRUCTS_ // Last updated 27/01/2013

#define _SHAREDSTRUCTS_

#define _MSG      	short		  Size;			\
					char		  KeyWord;		\
					char		  CheckSum;		\
					short		  Type;			\
					short		  ID;			\
					unsigned int  ClientTick;

struct MSG_HSTANDARD
{
	short Size;
	char KeyWord;
	char CheckSum;
	short Type;
	short ID;
	int Tick;
};

#define _PCKHEADER MSG_HSTANDARD Header

#ifdef _WYDCLIENT
struct		 MSG_STANDARD
{
	short Size;
	char KeyWord;
	char CheckSum;
	short Type;
	short ID;
	int Tick;
};
#endif // _WYDCLIENT

#pragma pack(push, 1)
struct		  MSG_AccountLogin
{
	_PCKHEADER;

	char AccountPassword[16];
	char AccountName[12];
	char Zero[52];
	int  ClientVersion;
	int  DBNeedSave;
	int AdapterName[4];
};
#pragma pack(pop)

#endif