

float problemSolution1(float consumed_water) {
    float cost = 0;
    // write your code here
    if(consumed_water >=60){
        cost = 13 + 30 * 0.4 + 20 * 0.12 + 10 * 1.4 + (consumed_water - 60) * 1.4;
    }else if(consumed_water >= 50 && consumed_water < 60){
        cost = 13 + 30 * 0.4 + 20 * 0.12 + (consumed_water - 50) * 1.4;
    }else if(consumed_water >= 30 && consumed_water < 50){
        cost = 13 + 30 * 0.4 + (consumed_water - 30) * 0.12 ;
    }else{
        cost = 13 + (30 - consumed_water);
    }


    return cost;
}
