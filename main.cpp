#include <iostream>

int main()
{
	int x;
	int block[3][3]
	{
		{0, 1, 0},
		{0, 1, 1},
		{0, 1, 0}
	};
	int extra[3][3]{};

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			std::cout << block[i][j];
		}

		std::cout << std::endl;
	}

	std::cout << "�� ���� ��� �������� ȸ����Ű�ڽ��ϱ�?" << std::endl;
	std::cout << "�����̸� 0, �������̸� 1�� �Է����ּ���!" << std::endl;
	std::cout << "ȸ���� ���߰� �ʹٸ� 2�� �Է����ּ���!" << std::endl;
	std::cin >> x;

	while (x != 2)
	{
		if (x == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					extra[i][j] = block[2 - j][i];
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					block[i][j] = extra[i][j];
				}
			}
	
			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					std::cout << block[i][j];
				}

				std::cout << std::endl;
			}

			std::cin >> x;
			continue;
		}

		else if (x == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					extra[i][j] = block[j][2 - i];
				}
			}

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					block[i][j] = extra[i][j];
				}
			}

			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					std::cout << block[i][j];
				}

				std::cout << std::endl;
			}

			std::cin >> x;
			continue;
		}
	}
}


