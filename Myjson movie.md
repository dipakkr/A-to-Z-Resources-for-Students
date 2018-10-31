# A movie coder is writing this!
## presenting
* Italian Spiderman. 
* Superman, Spiderman or Batman. 
* Spiderman. 
* Spiderman thwip-thwap. 
* Fighting, Flying and Driving: The Stunts of Spiderman 3. 
* Spiderman and Grandma. 
* The Amazing Spiderman T4 Premiere Special. 
* Amazing Spiderman Syndrome. 
* Hollywood's Master Storytellers: Spiderman Live. 
* Spiderman 5. 
* They Call Me Spiderman. 
* The Death of Spiderman. 
* Spiderman in Cannes. 
* We then store each title in our titles array, sort it in ascending order, and return it as our answer.
```java
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.net.*;
import com.google.gson.*;

public class Solution {
/*
 * Complete the function below.
 */

static String[] getMovieTitles(String substr) {

      //complete function here
}


public static void main(String[] args) throws IOException{
    Scanner in = new Scanner(System.in);
    final String fileName = System.getenv("OUTPUT_PATH");
    BufferedWriter bw = new BufferedWriter(new FileWriter(fileName));
    String[] res;
    String _substr;
    try {
        _substr = in.nextLine();
    } catch (Exception e) {
        _substr = null;
    }

    res = getMovieTitles(_substr);
    for(int res_i=0; res_i < res.length; res_i++) {
        bw.write(String.valueOf(res[res_i]));
        bw.newLine();
    }

    bw.close();
    } 
}
```

> An India origin movie
> An Italian development in Cannes
> science fiction
> robust and secure
> no spoilers
> named *Myjsonmovie*
