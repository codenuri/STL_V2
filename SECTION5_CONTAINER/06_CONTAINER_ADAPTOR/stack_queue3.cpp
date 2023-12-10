#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>

int main()
{
	// 다음중 잘못된 코드를 찾아 보세요
	std::stack<int, std::list<int>> s1;
	std::stack<int, std::deque<int>> s2;
	std::stack<int, std::vector<int>> s3;

	std::queue<int, std::list<int>> q1;
	std::queue<int, std::deque<int>> q2;
	std::queue<int, std::vector<int>> q3; // 잘못된 코드

	q3.push(10); // vector 의 push_back() 호출
	q3.pop();    // vector 의 pop_front()


}