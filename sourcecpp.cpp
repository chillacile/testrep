#define TEST_NUM 12
class CB;
class CA
{
public:
	int a[25];


	double b[TEST_NUM][TEST_NUM + 1][2 * TEST_NUM];


	float** c;


	CB*** d;

};
class CB
{
public:
	int e[5][5];
};

int inittest()
{
	CA ca;


	for(int i = 0; i < 25; i++) ca.a[i] = i * 2;

	for(int i = 0; i < TEST_NUM; i++)
	{
		for(int j = 0; j < TEST_NUM + 1; j++)
		{
			for(int k = 0; k < 2 * TEST_NUM; k++)
			{
				ca.b[i][j][k] = i + j + k;
			}
		}
	}

	
	ca.c = new float*[10];
	for(int i = 0; i < 25; i++)
	{
		ca.c[i] = new float[5];
	}

	int testi = 13;
	ca.d = new CB**[testi];
	for(int i = 0; i < testi; i++)
	{
		ca.d[i] = new CB*[6];
		for(int j = 0; j < 6; j++)
		{
			ca.d[i][j] = new CB[5];
		}
	}

	for(int i = 0; i < testi; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			for(int k = 0; k < 5; k++) ca.d[i][j][k].e[k][k] = 3;
		}
	}

	return 0;
}
