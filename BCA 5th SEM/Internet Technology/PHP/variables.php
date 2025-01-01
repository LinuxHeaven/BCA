<?php

    // comments

    /*Multiline
    comments*/

    //Scaler data type variables = contains one value
    $name  = "hello"; //string var
    $num1 = 10; //integer var
    $num2 = 10.10; //float var
    $price = 4.40;
    $bool1 = false; // boolean var if flase then it will not display anything if true then it will display 1 
    $bool2 = true; // flase = 0 and true = 1
    $total = null; // no value
    $total = $num1 * $price; // arithmetic operations

    echo "the name variable value is {$name} <br>"; //{$varname} is called string literals
    echo "num1 = {$num1} <br>";
    echo "num2 = {$num2} <br>";
    echo "price = \${$price} <br>";
    echo "bool1 = {$bool1} <br>";
    echo "bool2 = {$bool2} <br>";
    echo "total = \${$total} <br>";
    
?>