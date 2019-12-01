 /*f.c*/
int f(int x, int y){
float a = (x-1)/2;
float A = (2*a) + 1;
float b = x/2;
float B = b*2;
if (x < 0){
        return 0;
}
else if (y < 0){
        return 0;
      }
else if (x >= 1 && x <= 6 && y != 1 && y != 0){
        if (B == x){
                return 30;
        }
        else if (A == x){
                return 31;
        }
      }
else if (x == 0 || x >= 9 && x <= 12){
        if (B == x){

                return 31;
        }
      }
else if (x == 0 || x >= 9 && x <= 12){
        if (B == x){
                return 31;
        }
        else if (A == x){
                return 30;
        }
      }
else if (x >= 7 && x <= 8){
        return 31;
      }
else if (x == 2 && y == 0){
                return 28;
      }
else if (x == 2 && y == 1){
                return 29;
      }
else
               aqui cambiale
}
