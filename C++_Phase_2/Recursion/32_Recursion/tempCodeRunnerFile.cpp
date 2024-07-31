 // Base Case

   if(n<0)
    return 0;
   if(n==0)
    return 1;

    // recursive Relation
    return countDistinctWays(n - 1) 
           + countDistinctWays(n -2);