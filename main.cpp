Block* Blocks = new Block[26];
for (int i=0; i < 12; i++)
	Blocks[i] = Block(i, W);
for (int i=0; i < 12; i++)
	Blocks[i+13] = Block(i, B);


Block::Block(int n_out, char color_)
{
	n_outside=n_out;
	if (n_out!=-1)
	{
		if (color_=B)
			n_array=n_outside;
		if (color_=W)
			n_array=n_outside+0.5;
	}
	color=color_;
}




//Game System
char blockCondition()

void atkSuccess()

void kill()

void winner()



//Player
void blockDraw()

void blockSort()


//User
void attack()


//COM
void attack()
