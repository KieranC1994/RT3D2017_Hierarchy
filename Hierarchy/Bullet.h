#ifndef BULLET_H
#define BULLET_H

#include "Application.h"


class Bullet
{
public:
	Bullet(float fX = 0.0f, float fY = 0.0f, float fZ = 0.0f);
	~Bullet(void);

	static void LoadResources(void); // Only load the resources once for all instances
	static void ReleaseResources(void); // Only free the resources once for all instances
	void Update();

	void SetWorldPosition(float fX, float fY, float fZ);

private:
	void UpdateMatrices(void);

	static CommonMesh* s_pBulletMesh;	//Only one bullet mesh for all instances

	static bool s_bResourcesReady;

	XMFLOAT4 m_b4Pos;	//Bullets world position

	XMMATRIX m_mBulletWorldMatrix;
	XMMATRIX m_vBulletScale;
	float m_fBulletSpeed;				//Speed the bullet will travel at

public:
	float GetXPosition(void) { return m_b4Pos.x; }
	float GetYPosition(void) { return m_b4Pos.y; }
	float GetZPosition(void) { return m_b4Pos.z; }

	XMFLOAT4 GetPosition(void) { return m_b4Pos; }
};

#endif