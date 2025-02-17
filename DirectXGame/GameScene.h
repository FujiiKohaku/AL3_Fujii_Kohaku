#include "KamataEngine.h"
#include "stdint.h"
#pragma once
class GameScene {
public:
	GameScene();  // コンストラクタ
	~GameScene(); // デストラクタ

	void Initialize();
	void Update();
	void Draw();
	//スプライトのポインタを宣言
	KamataEngine::Sprite* sprite= nullptr;

private:
	uint32_t textureHandle_ = 0;
};
