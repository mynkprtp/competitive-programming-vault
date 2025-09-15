// import java.util.Queue;
// import java.util.LinkedList;
// import java.util.Scanner;

// public class Solution {
// 	public static void main(String[] args) {
// 		Scanner scn = new Scanner(System.in);
// 		int n = scn.nextInt();
// 		int q[][] = new int[n][n];
// 		for (int i = 0; i < n; i++) {
// 			for (int j = 0; j < n; j++)
// 				q[i][j] = scn.nextInt();
// 		}
// 		int ans = solution(q);
// 		System.out.print("ans: " + ans);
// 	}

// 	public static int solution(int[][] map) {
// 		// Your code here
// 		int[][] temp = helper(map);
// 		int ans = bfs(map);
// 		for (int i = 0; i < map.length; i++){
// 			for (int j = 0; j < map[0].length; j++) {
// 				if (temp[i][j] == 1) {
// 					temp[i][j] = 0;
// 					int val = bfs(temp);
// 					if (ans > 0) {
// 						if (val < ans && val > 0)
// 							ans = val;
// 						temp[i][j] = 1;
// 						reset(temp);
// 					} else {
// 						ans = val;
// 						temp[i][j] = 1;
// 						reset(temp);
// 					}
// 				}
// 			}
// 		}
// 		return ans;
// 	}

// 	public static int bfs(int[][] arr) {
// 		if (arr[0][0] == 1)
// 			return -1;
// 		int row = arr.length;
// 		int col = arr[0].length;
// 		Queue<Integer> qRow = new LinkedList<>();
// 		Queue<Integer> qCol = new LinkedList<>();
// 		qRow.offer(0);
// 		qCol.offer(0);

// 		int[] dr = { 1, -1, 0, 0 };
// 		int[] dc = { 0, 0, -1, 1 };

// 		boolean reachedTarget = false;
// 		int nodesLeft = 1;
// 		int nodesNext = 0;
// 		int count = 0;

// 		while (!qRow.isEmpty()) {

// 			int r = qRow.poll();
// 			int c = qCol.poll();
// 			if (r == row - 1 && c == col - 1) { 
// 				reachedTarget = true;
// 				break;

// 			}
// 			for (int i = 0; i < 4; i++) {
// 				int newRow = r + dr[i];
// 				int newCol = c + dc[i];
// 				if (newRow < 0 || newCol < 0)
// 					continue;
// 				if (newRow >= row || newCol >= col)
// 					continue;
// 				if (arr[newRow][newCol] == 1)
// 					continue;
// 				if (arr[newRow][newCol] == 2)
// 					continue; 
// 				qRow.offer(newRow);
// 				qCol.offer(newCol);
// 				arr[newRow][newCol] = 2;
// 				nodesNext++;

// 			}

// 			nodesLeft--;
// 			if (nodesLeft == 0) {
// 				nodesLeft = nodesNext;
// 				nodesNext = 0;
// 				count++;
// 			}

// 		}

// 		return reachedTarget ? count + 1 : -1;

// 	}

// 	public static int[][] helper(int map[][]) {
// 		int[][] temp = new int[map.length][map[0].length];
// 		for (int i = 0; i < temp.length; i++)
// 			for (int j = 0; j < temp[0].length; j++) {
// 				if (map[i][j] != 2)
// 					temp[i][j] = map[i][j];
// 				else if (map[i][j] == 2)
// 					map[i][j] = 0;
// 			}
// 		return temp;
// 	}

// 	public static void reset(int[][] arr) {
// 		for (int i = 0; i < arr.length; i++) {
// 			for (int j = 0; j < arr[0].length; j++) {
// 				if (arr[i][j] == 2) {
// 					arr[i][j] = 0;
// 				}
// 			}
// 		}
// 	}
// }