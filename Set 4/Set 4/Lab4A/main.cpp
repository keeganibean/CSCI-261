// lower section
bool isThreeKind( int die1, int die2, int die3, int die4, int die5 ) {
    if (die1==die2 && die2==die3){
        return 1;
    }
    if (die2==die3 && die3==die4){
        return 1;
    }
    if (die3==die4 && die4==die5){
        return 1;
    }
    if (die4==die5 && die5==die1){
        return 1;
    }
    if (die5==die1 && die1==die2){
        return 1;
    }
    if (die1==die3&& die3==die5){
        return 1;
    }

    else {
        return 0;
    }

}

// upper section
bool isOnes( int die1, int die2, int die3, int die4, int die5 ) {
    if (die1==1||die2==1||die3==1||die4==1||die5==1){
        return 1;
    }
    else {
        return 0;
    }
}