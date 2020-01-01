public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
	Stack res = new Stack();
	ArrayList<Integer> relist = new ArrayList<Integer>();
	if (listNode == null){
		return null;
	}
	while (listNode.next != null) {
		res.push(listNode.val);
		listNode = listNode.next;
	}
	res.push(listNode.val);
	while (!res.isEmpty()) {
		relist.add((Integer)res.pop());
	}
	return relist;
}
