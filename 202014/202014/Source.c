public int JumpFloor(int target) {
	if (target == 1 || target == 2) {
		return target;
	int jumpSum = 0;
	int jumpSumBackStep1 = 2;
	int jumpSumBackStep2 = 1;
	for (int i = 3; i <= target; i++) {
		jumpSum = jumpSumBackStep1 + jumpSumBackStep2;
		jumpSumBackStep2 = jumpSumBackStep1;
		jumpSumBackStep1 = jumpSum;
	}
	return jumpSum;
}