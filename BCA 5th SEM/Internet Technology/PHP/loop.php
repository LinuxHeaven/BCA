<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>loops</title>
</head>
<body>
<form action="loop.php" method="post">
        <label> num:</label>
        <input type="text" name="num" placeholder="enter num">
        <br>
        <input type="submit">
        <br>
        <br>
    </form>
</body>
</html>

<?php
    //for loop
    (int)$num = $_POST["num"];
    for ($i=0; $i<=$num; $i++)
    {
        echo "{$i}" . "<br>";
    }
?>