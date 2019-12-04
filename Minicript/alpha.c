
      #define ARR_SIZE(arr)	((sizeof(arr))/(sizeof(arr[0])))
 
      char alpha[][6]={
        {' ','a','e','i','o','u'},
        {'a','e','i','o','u',' '},
        {'e','i','o','u',' ','a'},
        {'i','o','u',' ','a','e'},
        {'o','u',' ','a'.'e','i'},
        {'u',' ','a','e','i','o'}
      };

      unsigned int index_of(char);

      /**
       {c,k\in\{' ','a','e','i','o','u'\}}encript{
         encript(c,k)\in{' ','a','e','i','o','u'\} ^ 
         encript(c,k)=alpha[beta][0] donde beta es tal que
         alpha[beta][index_of(c)]=k (index_of(c):=indice de c 
         en la fila alpha[0])}
       */
      char encript(char c,char k);


      int index_of(char c)
      {
        unsigned int i;
        for(i=0;i<ARR_SIZE(alpha[0]);i++){
          if(alpha[0][i]==c){
            return i;
          }
        }
        return -1;
      }
