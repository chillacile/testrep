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
}LZ讲道理好吧，你既然要不懂装懂，在帖子里犯这么多错，那就要允许我板砖拍你脸上。不讲逻辑都忍了，你逻辑不好算你能力问题，可以不怪你。你连事实都要歪曲？DEEPMIND，也就是阿甲黄他们在nature上发表的Mastering the game of Go with deep neural networks and tree search，这才是ALPHAGO的那篇论文。整篇文章里没有提到任何关于具体的神经网络细节。只有一句：We trained a 13 layer policy network。也就是说，13层，里面什么信息都没有，那可不是什么1层5X5加上11层3X3。那么LZ关于这种奇怪的12层网络的观点是怎么来的呢？我们来看看，在更早之前，ICLR 2015会议上，阿甲黄他们发了一篇文章叫做MOVE EVALUATION IN GO USING DEEP CONVOLUTIONAL NEURAL NETWORKS，这是在ALPHAGO之前的他们用KGS上的棋来训练神经网络的文章，里面说到了：We used a deep convolutional neural network with 12 weight matrices for each of 12 layers and rectified linear non-linearities. The first hidden layer’s filters were of size 5x5 and the remainder were of size 3x3, with a stride of 1.注意，其中并不止12层一种，还包括了3层，6层，10层等等，还有中间层的filter数量也不同的各种网络，并不是仅仅一种固定的结构。好了，大家明白了LZ连哪篇文章是ALPHAGO的文章都没弄清楚，就随便出来发帖。用2015年论文里提到的网络结构中的一种，直接当成现在ALPHAGO的网络结构。连一句“我推测，这是另一个文章里的结构，但是是阿甲黄写的，所以有可能ALPHAGO也是这样的结构”，这种话都不讲，直接当成事实说出来。我不打你这种人的脸打谁的脸。故意误导人，还跑出来写科普文章？不说MASTER版本已经和ALPHAGO不同，就连ALPHAGO也是LZ说的网络结构之后又过了一年后的东西。故意装B，还卷积神经核，欺负吧友不懂专业词汇？？？不知道相当于27X27是这样算出来的：27-1=（5-1）+（3-1）*11以为没人读过ALPHAGO原论文？以为没有人读过阿甲黄以前写的更早的文章？以为没人懂，就敢生造一“卷积神经网的信息传播按半径来算”，所以27要换成14？你家的体育老师都死不瞑目。POOLING不懂？最后可以有fullconnected可以统合所有中间层的信息，也不懂？就算没有fullconnected，只要范围大于了19X19就有节点整合了19X19的所有信息，这点逻辑也不懂？能不能让这些半瓶水响叮当的人闭嘴。水帖你随便发，这种跟科普有关的，跟知识的正确与否的，不懂的就别发帖，少说话你就不会错。对不起各位吧友，我也不想发些莫名其妙的POOLING，FULLCONNECTED这些词汇来装B，我真不是用专业词汇装B的意思。在此我道歉，如果有时间，有精力，我可以把这些东西尽量认真的用大家明白的方式，解释出来。
