#include "stdafx.h"

#include "DataOfServer.h"

void DataOfServer::Clear() // optimize
{
	m_vectorBlocks.clear();
	m_vectorBullets.clear();
	m_vectorPlayers.clear();
}
