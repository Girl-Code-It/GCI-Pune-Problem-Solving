class Solution {
    public void sortColors(int[] a) {
      int low=0;
      int mid=0;
      int high=a.length-1;
        int temp;
        while(mid<=high)
        {
        if(a[mid]==0)
        {
            temp=a[mid];
            a[mid]=a[low];
            a[low]=temp;
            mid++;
            low++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            temp=a[mid];
            a[mid]=a[high];
            a[high]=temp;
            high--;
        }
        }
	}
    }
