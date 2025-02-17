#include "GameScene.h"
GameScene::GameScene() {} // コンストラクタ
void GameScene::Initialize() {
	// hでテクスチャハンドルを宣言KAMATAENGINEのテクスチャマネーギャーでスプライトを読み込み
	textureHandle_ = KamataEngine::TextureManager::Load("uvChecker.png");
	// 新しいスプライトを作る
	// textureHandle_ の画像を設定し、座標 (100, 50) に置く
	sprite = KamataEngine::Sprite::Create(textureHandle_, {100, 50});
}
void GameScene::Update() {}
void GameScene::Draw() {
	// スプライト描画
	sprite->Draw();
}
GameScene::~GameScene() {

	// スプライトを解放する
	delete sprite;

} // デストラクタ
