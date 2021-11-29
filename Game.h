#pragma once

#include"Common.h"
#include"Board.h"

class Game {
	Board* _b;	// Một bàn cờ.
	bool _turn;	// Lượt chơi: true lượt người một & false lượt người thứ hai.
	int _x, _y;		// Tọa độ hiện hành của nháy chuột.
	int _command;	// Phím gõ từ người dùng.
	bool _loop;		// Biến quyết định thoát game hay không.
	bool _playing;
public:
	static int countX;
	static int countO;
public:
	Game(int, int, int);
	~Game();
public:
	int getCommand();
	bool isContinue();
	char waitKeyBoard(); // Hàm nhận phím từ người dùng.
	char askContinue();
	bool isPlaying() { return _playing; };
public:
	void startGame(); //Bắt đầu game.
	void exitGame();	//Thoát game.
public:
	int processFinish();
	bool processCheckBoard();
	bool processCheckBoard_Easy();
	void moveRight();
	void moveLeft();
	void moveUp();
	void moveDown();
public:
	int getX() { return _x; };
	int getY() { return _y; };
public:
	void Play(); //Chơi với người
	void InFor(); //Thông tin giao diện khi chơi
	void SelectSetting();
	void Setting(); //Cài đặt
	void Information(); //Thông tin về GAME
	void Easy_AutoPlay(); //Chơi với máy (Lower)
	void SelectAutoPlay();
	void Back(int); //Hỗ trợ quay lại Menu hoặc chuyển sang giao diện chơi		
	int SettingSize();//Hàm cho phép cài đặt lại kích thước của bảng
	void AskContinue(); //Xử lý tiếp tục khi thắng thua
	void Save(); //Lưu dữ liệu đang chơi
	void Load(); //Tải dữ liệu đã lưu
	void Coordinate();
	bool Music(int);
	void Turn();
};
