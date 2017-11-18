class Block
//'조커'의 경우, n_array를 private로 넣으면 문제가 생길 것 같음.
// 그렇다고 해서 public에 넣으면, 값이 바뀔 수 있는 문제가 생김.  
{
	private:
		int n_outside; 		//surface value for game. range: 0 to 11
		double n_array; 	//functional value for sort. white gets .5 more.
		char color; 		//B=black, W=white

	public:
		Block(int n_out, char color_); 7
		int open=0; 		//whether the block is open to everyone. 	//0: hide 1:open
		int belongTo; 		//where the block belongs to. 			//when belongTo=0, the block is belong to me(player0)
		int raw=1; 		//check if the block is picked within one turn.
};
