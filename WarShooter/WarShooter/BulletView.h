#pragma once
#include "sheet.h"

class BulletView
{
public:
	BulletView(CAssets & assets);

	void Update(float dt);
	void Draw(sf::RenderWindow & window);

private:
	void SetTexture(sf::Texture & texture);
	CAssets m_assets;
	sf::Sprite m_body;
};