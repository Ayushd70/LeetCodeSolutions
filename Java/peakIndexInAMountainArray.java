// https://leetcode.com/problems/peak-index-in-a-mountain-array/
public class peakIndexInAMountainArray {

  static int peakIndexInMountainArray(int[] arr) {
    int startIndex = 0;
    int endIndex = arr.length - 1;

    while (startIndex < endIndex) {
      int middleIndex = startIndex + (endIndex - startIndex) / 2;
      if (arr[middleIndex] > arr[middleIndex + 1]) {
        endIndex = middleIndex;
      } else {
        startIndex = middleIndex + 1;
      }
    }
    return startIndex;
  }

  public static void main(String[] args) {
    int[] arr = {-2,0, 1,2,1, 0,-2};
    System.out.println(peakIndexInMountainArray(arr));
  }
}
