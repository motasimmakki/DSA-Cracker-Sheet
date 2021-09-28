/*
Importing java.util Package.
*/
import  java.util.*;

/*
Time Complexity --> O(n).  For n Element

# Sample Output:
Array Before Sorting
1 0 2 2 1 0 2 1 0 2
Array After Sorting
0 0 0 1 1 1 2 2 2 2

 
# Explanation:
In function sort012 we initilizw Three valiable i,j and k.
Assign i and j at index 0 . and k on last index of array.
Assume Three assumption.
1. From i-1 till j , store value 1.
2. From j-1 till 0 index strore value 0.
3. From K+1  till last index store value 2.
 
# Most Important:
From index i+1 till K values are unknown and we are soerting these value and placing them on right Position.
  
# How Algo is working:
	Start iterating i from index 0 till k.
	If value at index i = 1 , then just move to next index.
	If value is 0 then swap the value with index j .
	If value is 2 then swap it with index k.
	When i will reach at index k so,
	From index 0 to j-1 , all element will be 0.
	From index j to i-1 , all element will be 1.
	And index i till end of Array all value will be 2.
 */

public class Sort_012 {
    public static void sort012(int[] arr){
        int i = 0;  // i-1 -->j == 1;
        int j = 0;  // j-1 -->0 == 0
        int k = arr.length-1;  // k+1 --> end == 2
      while(i <= k) {
          if (arr[i] == 1) {
              i++;
          } else if (arr[i] == 0) {
              swap(arr, i, j);
              i++;
              j++;
          }
          else if (arr[i] == 2) {
              swap(arr, i, k);
              k--;
          }
      }
    }

    // used for swapping ith and jth elements of array
    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void print(int[] arr){
        for(int i = 0 ; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args)  {
	int[] arr = {1,0,2,2,1,0,2,1,0,2};
	System.out.println("Array Before Sorting");
	print(arr);
	sort012(arr);
	System.out.println("Array After Sorting");
	print(arr);
    }
}
