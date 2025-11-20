#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main()
{
  // 使用 endl 输出并刷新缓冲区
  std::cout << "Using endl:" << std::endl;
  std::cout << "Line 1" << std::endl;
  std::cout << "Line 2" << std::endl;

  // 模拟耗时操作
  std::this_thread::sleep_for(std::chrono::seconds(2));

  // 使用 "\n" 输出但不刷新缓冲区
  std::cout << "Using \\n:" << "\n";
  std::cout << "Line 1" << "\n";
  std::cout << "Line 2" << "\n";

  // 再次模拟耗时操作，以便观察输出
  std::this_thread::sleep_for(std::chrono::seconds(2));

  // 在程序结束前刷新缓冲区，确保所有内容都被输出
  std::cout.flush();

  return 0;
}
