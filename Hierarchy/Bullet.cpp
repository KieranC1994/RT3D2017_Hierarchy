#include "Bullet.h"

//Initialize static class variables
CommonMesh* Bullet::s_pBulletMesh = NULL;

bool Bullet::s_bResourcesReady = false;

Bullet::Bullet(float fX, float fY, float fZ)
{
	m_mBulletWorldMatrix = XMMatrixIdentity();

	m_b4Pos = XMFLOAT4(fX, fY, fZ, 0.0f);

	m_vBulletScale = XMMatrixIdentity();

	m_fBulletSpeed = 0.0f;
}

Bullet::~Bullet(void)
{
}