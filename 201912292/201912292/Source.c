public class test{
	public static void main(String[] args){
		float totalmeters = 100;//总路程。
		float startHeight = 100;//每一次下落后弹起的高度
		//计算在第十次落地时已经走过的路程。（第十次已经落地但是并没有走第十次的路程）
		for (int i = 1; i <= 9; i++){
			startHeight = startHeight / 2;//计算此次弹起单程高度

			totalmeters += startHeight * 2;//将此次弹起并落地的高度加到总路程中。
		}

		System.out.println("totalmeters:" + totalmeters);
		System.out.println("第十次高度：" + startHeight * 1 / 2);
	}

}