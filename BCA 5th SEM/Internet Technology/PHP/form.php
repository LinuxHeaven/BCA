<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>form handeling in php</title>
</head>
<body>
    <!--
    <form action="form.php" method="post">
        <label> username:</label>
        <input type="text" name="username" placeholder="enter username">
        <br>
        <br>
        <label> password:</label>
        <input type="password" name="password" placeholder="enter password">
        <br>
        <br>
        <input type="submit" value="login">
        <br>
        <br>
    </form>
    -->

    <!--
    <form action="form.php" method="post">
        <label> quantity:</label>
        <input type="text" name="quantity" placeholder="enter quantity">
        <br>
        <input type="submit">
        <br>
        <br>
    </form>
    -->

    <form action="form.php" method="post">
        <label> age:</label>
        <input type="text" name="age" placeholder="enter age">
        <br>
        <input type="submit">
        <br>
        <br>
    </form>
</body>
</html>

<?php
    /*get doesn't provide abstraction on url and security
    echo $_GET["username"];
    echo "<br>";
    echo $_GET["password"];*/

    /*post provide abstraction and security
    echo $_POST["username"];
    echo "<br>";
    echo $_POST["password"];*/

    /*$item = "pizza";
    $price = 50.50;
    $quantity = $_POST["quantity"];
    echo "{$quantity} {$item} <br>";
    $total = null;
    $total = (int)$quantity * $price;
    //(int) is used for typecast because quantity is fetvhed as string since it's input type is text
    echo "total price = RS {$total}";*/

    (int)$age = $_POST["age"];
    if($age>=18)
    {
        echo "eligible for vote";
    }
    elseif($age==0)
    {
        echo "invalid";
    }
    else
    {
        echo "not eligible for vote";
    }

?>