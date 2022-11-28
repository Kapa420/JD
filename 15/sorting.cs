using System;

class ActividadSorting {
  public static void Main (string[] args) {
    int[] tmp = inputArray();
    printArray(tmp, "", false);
    allSorts(tmp);
  }
  
  public static void printArray(int[] array, string sort, bool option = true){
    if (option == true){
      Console.WriteLine("Ordenado con " + sort);
    } else {
      Console.WriteLine("Array original");
    }
      for(int i =0; i < 10; i++){
        Console.Write(array[i] + " ");
      }
      Console.WriteLine("");
  } 
  
  public static int[] burbuja (int[] array){
    int[] arr = array;
    int n = 10;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
          if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
          }
    return arr;
  }
  
  public static int[] shell (int[] array){
    int[] arr = array;
     for (int gap = 5; gap > 0; gap /= 2)
        {
          for (int i = gap; i < 10; i += 1)
          {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
                arr[j] = temp;
            }
     }
    return arr;
  }
  
  public static int[] seleccion (int[] array) {
    int[] arr = array;
    for (int i = 0; i < 10 - 1; i++)
        {
          int min_idx = i;
          for (int j = i + 1; j < 10; j++)
              if (arr[j] < arr[min_idx])
                  min_idx = j;
          int temp = arr[min_idx];
          arr[min_idx] = arr[i];
          arr[i] = temp;
        }
    return arr;
    
  }

  
  public static int[] inserccion (int[]array) {
    int[] arr = array;
    for (int i = 1; i < 10; ++i) {
      int key = arr[i];
      int j = i - 1;
      while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j = j - 1;
        }
      arr[j + 1] = key;
    }
    return arr;
  }

  public static void allSorts(int[] arraySorted){
    printArray(burbuja(arraySorted), "burbuja");
    printArray(shell(arraySorted), "shell");
    printArray(seleccion(arraySorted), "seleccion");
    printArray(inserccion(arraySorted), "inserccion");
  }

  public static int[] inputArray(){
    int[] array = new int[10];
    for(int i=0; i < 10; i++){
      Console.WriteLine("Ingrese elemento");
      int tmp = Convert.ToInt32(Console.ReadLine());
      array[i] = tmp;
    }
    return array;
  }
}