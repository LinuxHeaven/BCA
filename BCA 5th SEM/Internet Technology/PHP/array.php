<?php
    //array
    $food = array ("burger","pizza","briyani","samosa");
    //n=4
    //range = 0 to 3 = 0 to n-1
    //lb=0th up=(n-1)th
    echo $food[1];
    echo "<br>";
    echo "<br>";
    //foreachloop
    foreach($food as $items)
    {
        echo $items. "<br>";
    }
    $food[0] = "apple";
    array_push($food,"kiwi","mango");
    array_pop($food);
    echo "<br>";
    echo "<br>";
    //foreachloop
    foreach($food as $items)
    {
        echo $items. "<br>";
    }

    $removed_item = array_shift($food);
    echo "<br>";
    echo "<br>";
    //foreachloop
    foreach($food as $items)
    {
        echo $items. "<br>";
    }
    echo $removed_item . "<br>";

    $rev_food = array_reverse($food);
    echo "<br>";
    echo "<br>";
    //foreachloop
    foreach($rev_food as $items)
    {
        echo $items. "<br>";
    }

    echo count($food)."<br>";

    //asociative array
    $capitals = array(
        "usa"=>"washington DC",
        "japan"=>"tokyo",
        "south korea"=>"seoul",
        "india"=>"new delhi"
    );

    echo "<br>";
    echo $capitals["japan"];

?>