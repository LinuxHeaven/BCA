<?php
    //arithmetic operators
    // +, -, *, /, %, ** (power)
    $x=5;
    $y=2;
    $z=$x**$y;
    echo "z = {$z}";

    //increment and decrement
    // ++, --

    $count = 0;
    echo $count++;//post increment original display will be displayed then increment will be done
    echo "<br>";
    echo $count; //value after post increment
    echo "<br>";
    echo ++$count;//pre increment the value will be incremented first then displayed
?>