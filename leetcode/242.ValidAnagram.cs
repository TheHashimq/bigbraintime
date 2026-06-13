public class Solution {
  public bool IsAnagram(string s, string t) {
          if (s.Length != t.Length)
{
    return false;
}
          int[] arr1 = new int[26];
          int[] arr2 = new int[26];
          foreach (char ss in s){
                  arr1[ss - 'a'] ++;
          }
          foreach (char tt in t){
                  arr2[tt - 'a'] ++;
          }
          for(int i = 0 ;i < 26;i++){
                  if(arr1[i] != arr2[i]){
                          return false;
                  }
          }
          return true;
  }
}
